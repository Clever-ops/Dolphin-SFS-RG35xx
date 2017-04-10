
TARGET_SUFFIX :=

ifeq ($(platform),unix)

else ifeq ($(platform),win)

else ifeq ($(platform),osx)

else
   $(error unsupported platform : $(platform))
endif

ifeq ($(DEBUG),1)
   build = debug
else
   build = release
endif

ifeq ($(STATIC_LINKING), 1)
   libtype = static
else
   libtype = shared
endif

ifeq ($(LTO), 1)
   FLAGS_gcc_release += -flto
   FLAGS_clang_release += -flto
endif

DEFINES                    += -D__LIBRETRO__
DEFINES_debug              += -DDEBUG -D_DEBUG
DEFINES_release            += -DNDEBUG

# msvc
FLAGS_msvc_debug           += -GS -Gy -Od -RTC1 -D_SECURE_SCL=1
FLAGS_msvc_release         += -GS- -Gy- -O2 -Ob2 -GF -GT -Oy -Ot -D_SECURE_SCL=0
FLAGS_msvc_debug_static    += -MDd
FLAGS_msvc_debug_shared    += -LDd
FLAGS_msvc_release_static  += -MD
FLAGS_msvc_release_shared  += -LD

LDFLAGS_msvc_debug         += -DEBUG

# gcc
FLAGS_gcc_debug            += -O0 -g
FLAGS_gcc_release          += -O3
FLAGS_gcc_shared           += -fpic

# version script was causing a link error : investigate / fix.
# LDFLAGS_gcc += -Wl,--version-script=link.T
LDFLAGS_gcc                += -Wl,--no-undefined -L.
LDFLAGS_gcc_release        += -s
LDFLAGS_gcc_shared         += -shared -lm

# gcc
FLAGS_clang_debug          += -O0 -g
FLAGS_clang_release        += -O3
FLAGS_clang_shared         += -fpic
LDFLAGS_clang              += -L.
#LDFLAGS_clang_release      += -s
LDFLAGS_clang_shared       += -shared -lm

TARGET_static := $(TARGET_NAME)_libretro$(TARGET_SUFFIX)$(STATIC_EXT)
TARGET_shared := $(TARGET_NAME)_libretro$(TARGET_SUFFIX)$(SHARED_EXT)

LIBS_msvc += kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib
LIBS_msvc += uuid.lib odbc32.lib odbccp32.lib iphlpapi.lib winmm.lib setupapi.lib opengl32.lib glu32.lib rpcrt4.lib comctl32.lib

LDFLAGS_msvc  += -nologo -wx -dynamicbase -dll -nxcompat -machine:x64
#LDFLAGS_msvc  += -DEF:"libretro.def"
#LDFLAGS_msvc  += -MANIFEST
#LDFLAGS_msvc  += -INCLUDE:"ucrtFreadWorkaround"
#LDFLAGS_msvc  += -OPT:REF
#LDFLAGS_msvc  += uiAccess='false'"
#LDFLAGS_msvc  += -OPT:ICF
#LDFLAGS_msvc  += -TLBID:1
#LDFLAGS_msvc  += -LTCG:incremental
#LDFLAGS_msvc  += -INCREMENTAL
#LDFLAGS_msvc  += -MANIFESTUAC:"level='asInvoker'
#LDFLAGS_msvc  += -ManifestFile:"Release\msvc-2010.dll.intermediate.manifest"
#LDFLAGS_msvc  += -manifest:embed
#LDFLAGS_msvc  += -SUBSYSTEM:WINDOWS
#LDFLAGS_msvc  += -SAFESEH

CXXPCH ?= $(CXXPCH_$(compiler))

ifeq ($(compiler), msvc)
   OBJECTS := $(OBJECTS:.o=.obj)   
   ifneq ($(CXXPCH),)
      CXXPCHFLAGS = -Yu"pch.h" -Fp$(CXXPCH) -FIpch.h
   endif
endif

CFLAGS      += $(strip $(FLAGS) $(WARNINGS) $(CWARNINGS) $(DEFINES) $(CDEFINES) $(INCLUDES) $(CINCLUDES))
CFLAGS      += $(call get_current,FLAGS CFLAGS WARNINGS CWARNINGS DEFINES CDEFINES INCLUDES CINCLUDES)
CXXFLAGS    += $(strip $(FLAGS) $(WARNINGS) $(CXXWARNINGS) $(DEFINES) $(CXXDEFINES) $(INCLUDES) $(CXXINCLUDES))
CXXFLAGS    += $(call get_current,FLAGS CXXFLAGS WARNINGS CXXWARNINGS DEFINES CXXDEFINES INCLUDES CXXINCLUDES)

LDFLAGS_gcc   += $(call get_current,FLAGS)
LDFLAGS_clang += $(call get_current,FLAGS)
LDFLAGS       += $(call get_current,LDFLAGS)
LIBS          += $(call get_current,LIBS)

TARGET = $(TARGET_$(libtype))

build: deps $(TARGET)
$(TARGET): $(TARGET_DEPS) $(OBJECTS)
#%.obj: $(CXXPCH)
#	echo $(CXXPCH)

# msvc
%.lib:
	$Q$(AR) -nologo -wx -machine:x64 -out:$@ $^

%.dll:
	$Q$(LD) -out:$@ $(CXXPCH:.pch=.obj) $(OBJECTS) $(TARGET_LIBS) $(EXTERNAL_LIBS) $(LIBS) $(LDFLAGS)

$(DEPS_DIR)%.obj: $(DEPS_DIR)%.cpp
	$Q$(CXX) $< -c -Fo$@ $(CXXFLAGS)

%.obj: %.cpp $(CXXPCH)
	$Q$(CXX) $< -c -Fo$@ $(CXXFLAGS) $(CXXPCHFLAGS)

%.obj: %.cc
	$Q$(CXX) $< -c -Fo$@ $(CXXFLAGS)

%.obj: %.c
	$Q$(CC) $< -c -Fo$@ $(CFLAGS)

%.pch: %.cpp %.h
	$Q$(CXX) $< -Fp$@ -Fo$*.obj -Yc"pch.h" $(CXXFLAGS)

.PRECIOUS: %.pch

# gcc / clang
%.a:
	$(AR) rcs $@ $^

%.so:
	$(CXX) -o $@ $(OBJECTS) -Wl,--start-group $(TARGET_LIBS) -Wl,--end-group $(EXTERNAL_LIBS) $(LIBS) $(LDFLAGS)

%.dylib:
	$(CXX) -o $@ $(OBJECTS) $(TARGET_LIBS) $(EXTERNAL_LIBS) $(LIBS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $< -c -o $@ $(CXXFLAGS)

%.o: %.cc
	$(CXX) $< -c -o $@ $(CXXFLAGS)

%.o: %.c
	$(CC) $< -c -o $@ $(CFLAGS)

clean_target:
	$(call delete, $(TARGET) $(OBJECTS) $(CXXPCH) $(CXXPCH:.pch=$(OBJ_EXT)))

clean: clean_deps clean_target

.PHONY: clean test deps
