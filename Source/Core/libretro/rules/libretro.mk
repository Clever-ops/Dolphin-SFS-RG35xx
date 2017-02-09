
fpic := -fpic
STATIC_LINKING ?= 0

ifeq ($(platform), unix)
   SHARED_EXT := so
   TARGET_SUFFIX :=
   LDFLAGS += -shared -lm
else
   $(error unsupported platform : $(platform))
endif


ifeq ($(DEBUG),1)
FLAGS += -O0 -g -DDEBUG
else
FLAGS += -g -O3 -DNDEBUG
endif

ifeq ($(PERF_TEST),1)
FLAGS += -DPERF_TEST
endif

ifeq ($(STATIC_LINKING), 1)
TARGET := $(TARGET_NAME)_libretro$(TARGET_SUFFIX).a
else
TARGET := $(TARGET_NAME)_libretro$(TARGET_SUFFIX).$(SHARED_EXT)
FLAGS += $(fpic)
endif

DEFINES  += -D__LIBRETRO__
FLAGS	 += -Werror=implicit-function-declaration

CFLAGS   += $(FLAGS) $(DEFINES) $(INCLUDES) $(C_FLAGS)   $(C_DEFINES)   $(C_INCLUDES)
CXXFLAGS += $(FLAGS) $(DEFINES) $(INCLUDES) $(CXX_FLAGS) $(CXX_DEFINES) $(CXX_INCLUDES)
LDFLAGS  += $(FLAGS) $(C_FLAGS) $(CXX_FLAGS) -Wl,--no-undefined
# version script was causing a link error : investigate / fix.
# LDFLAGS += -Wl,--version-script=link.T


build: $(TARGET)
$(TARGET): $(OBJECTS)
ifeq ($(STATIC_LINKING), 1)
	$(AR) rcs $@ $(OBJECTS)
else
	$(CXX) -o $@ $^ $(LDFLAGS)
endif

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

%.o: %.cc
	$(CXX) -c -o $@ $< $(CXXFLAGS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJECTS)


.PHONY: clean test
