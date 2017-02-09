
fpic := -fpic
STATIC_LINKING ?= 0

ifeq ($(platform), unix)
   SHARED := -shared
   SHARED_EXT := so
   TARGET_SUFFIX :=
   LIBM := -lm
else
   $(error unsupported platform : $(platform))
endif

SHARED += -Wl,--no-undefined

# version script was causing a link error : investigate / fix.
# SHARED += -Wl,--version-script=link.T

DEFINES  += -D__LIBRETRO__
FLAGS += -Werror=implicit-function-declaration

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


CFLAGS   += $(FLAGS) $(DEFINES) $(INCLUDES) $(C_FLAGS)   $(C_DEFINES)   $(C_INCLUDES)
CXXFLAGS += $(FLAGS) $(DEFINES) $(INCLUDES) $(CXX_FLAGS) $(CXX_DEFINES) $(CXX_INCLUDES)
LDFLAGS  += $(FLAGS) $(C_FLAGS) $(CXX_FLAGS) $(SHARED) $(LIBM)


build: $(TARGET)
$(TARGET): $(OBJECTS)
ifeq ($(STATIC_LINKING), 1)
	$(AR) rcs $@ $(OBJECTS)
else
	$(CXX) -o $@ $^ $(LDFLAGS) $(SHARED)
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
