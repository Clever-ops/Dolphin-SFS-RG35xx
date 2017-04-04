
fpic := -fpic
TARGET_SUFFIX :=

ifeq ($(platform),unix)
   LDFLAGS += -shared -lm
else ifeq ($(platform),win)

else
   $(error unsupported platform : $(platform))
endif


ifeq ($(DEBUG),1)
   DEFINES += -DDEBUG -D_DEBUG
else
   DEFINES += -DNDEBUG
endif

DEFINES += -D__LIBRETRO__

ifeq ($(compiler),msvc)
   fpic :=
   FLAGS_debug   = -GS -Gy -Od -RTC1 -D_SECURE_SCL=1
   FLAGS_release = -GS- -Gy- -O2 -Ob2 -GF -GT -Oy -Ot -D_SECURE_SCL=0

   ifeq ($(STATIC_LINKING), 1)
      FLAGS_debug   += -MDd
      FLAGS_release += -MD
   else
      FLAGS_debug   += -LDd
      FLAGS_release += -LD
   endif

   ifeq ($(DEBUG),1)
      FLAGS   += $(FLAGS_debug)
      LDFLAGS += -DEBUG
   else
      FLAGS   += $(FLAGS_release)
   endif
else
   ifeq ($(DEBUG),1)
      FLAGS += -O0 -g
   else
      FLAGS += -g -O3
   endif
   FLAGS	 += -Werror=implicit-function-declaration
endif

ifeq ($(STATIC_LINKING), 1)
   TARGET := $(TARGET_NAME)_libretro$(TARGET_SUFFIX)$(STATIC_EXT)
else
   TARGET := $(TARGET_NAME)_libretro$(TARGET_SUFFIX)$(SHARED_EXT)
   FLAGS  += $(fpic)
endif

ifeq ($(compiler),msvc)
   LIBS += kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib
   LIBS += uuid.lib odbc32.lib odbccp32.lib iphlpapi.lib winmm.lib setupapi.lib opengl32.lib glu32.lib rpcrt4.lib comctl32.lib

   LDFLAGS  += -nologo -wx -dynamicbase -dll -nxcompat -machine:x64
   #LDFLAGS  += -DEF:"libretro.def"
   #LDFLAGS  += -MANIFEST
   #LDFLAGS  += -INCLUDE:"ucrtFreadWorkaround"
   #LDFLAGS  += -OPT:REF
   #LDFLAGS  += uiAccess='false'"
   #LDFLAGS  += -OPT:ICF
   #LDFLAGS  += -TLBID:1
   #LDFLAGS  += -LTCG:incremental
   #LDFLAGS  += -INCREMENTAL
   #LDFLAGS  += -MANIFESTUAC:"level='asInvoker'
   #LDFLAGS  += -ManifestFile:"Release\msvc-2010.dll.intermediate.manifest"
   #LDFLAGS  += -manifest:embed
   #LDFLAGS  += -SUBSYSTEM:WINDOWS
   #LDFLAGS  += -SAFESEH

   OBJECTS := $(OBJECTS:.o=.obj)
   ifneq ($(CXXPCH),)
      CXXPCHFLAGS = -Yu"pch.h" -Fp$(CXXPCH) -FIpch.h
   endif
else
   LDFLAGS  += $(FLAGS) $(CFLAGS) $(CXXFLAGS) -Wl,--no-undefined -L.
   # version script was causing a link error : investigate / fix.
   # LDFLAGS += -Wl,--version-script=link.T
endif

CFLAGS   += $(FLAGS) $(WARNINGS) $(CWARNINGS) $(DEFINES) $(CDEFINES) $(INCLUDES) $(CINCLUDES)
CXXFLAGS += $(FLAGS) $(WARNINGS) $(CXXWARNINGS) $(DEFINES) $(CXXDEFINES) $(INCLUDES) $(CXXINCLUDES)


build: $(TARGET)
$(TARGET): $(TARGET_DEPS) $(OBJECTS)

ifeq ($(compiler),msvc)

%.lib:
	$(AR) -nologo -wx -machine:x64 -out:$@ $^

%.dll:
	$(LD) -out:$@ $(CXXPCH:.pch=.obj) $(OBJECTS) $(LIBS) $(LDFLAGS)

%.cpp: $(CXXPCH)
%.obj: %.cpp $(CXXPCH)
	$(CXX) $< -c -Fo$@ $(CXXFLAGS) $(CXXPCHFLAGS)

%.obj: %.cc
	$(CXX) $< -c -Fo$@ $(CXXFLAGS)

%.obj: %.c
	$(CC) $< -c -Fo$@ $(CFLAGS)

%.pch: %.cpp
	$(CXX) $< -Fp$@ -Fo$*.obj -Yc"pch.h" $(CXXFLAGS)

else

%.a:
	$(AR) rcs $@ $^

%.so:
	$(CXX) -o $@ $(OBJECTS) $(LIBS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $< -c -o $@ $(CXXFLAGS)

%.o: %.cc
	$(CXX) $< -c -o $@ $(CXXFLAGS)

%.o: %.c
	$(CC) $< -c -o $@ $(CFLAGS)

endif

clean:
	$(call delete, $(TARGET) $(OBJECTS) $(CXXPCH) $(CXXPCH:.pch=$(OBJ_EXT)))


.PHONY: clean test
