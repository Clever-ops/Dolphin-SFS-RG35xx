TARGET_NAME := dolphin
DEBUG        = 0
PERF_TEST    = 1
STATIC_LINKING = 1

BASE_DIR = ..
DEPS_DIR = ../../../Externals
DOLPHIN_DIR = ../../..

ifeq ($(platform),)
   platform = unix
   ifeq ($(shell uname -a),)
      platform = win
   else ifneq ($(findstring MINGW,$(shell uname -a)),)
      platform = win
   else ifneq ($(findstring Darwin,$(shell uname -a)),)
      platform = osx
      arch = intel
      ifeq ($(shell uname -p),powerpc)
      arch = ppc
      endif
   else ifneq ($(findstring win,$(shell uname -a)),)
      platform = win
   endif
endif

build: all

include rules/core.mk

include rules/common.mk
include rules/discio.mk
include rules/inputcommon.mk
include rules/videocommon.mk
include rules/videobackends.mk

include rules/externals.mk

include rules/flags.mk
include rules/defines.mk
include rules/includes.mk
include rules/link.mk

OBJECTS :=
OBJECTS += libretro.o
OBJECTS += AudioCommon.o
OBJECTS += GCPadEmu.o
OBJECTS += GLInterface.o
OBJECTS += libco/libco.o
OBJECTS += SWOGLWindow.o

OBJECTS += ../UICommon/UICommon.o
OBJECTS += $(CORE_OBJECTS)
OBJECTS += $(AUDIOCOMMON_OBJECTS)
OBJECTS += $(COMMON_OBJECTS)
OBJECTS += $(DISCIO_OBJECTS)
OBJECTS += $(INPUTCOMMON_OBJECTS)
OBJECTS += $(VIDEOCOMMON_OBJECTS)
OBJECTS += $(VIDEOGL_OBJECTS)
OBJECTS += $(VIDEONULL_OBJECTS)
OBJECTS += $(VIDEOSOFTWARE_OBJECTS)
#OBJECTS += $(VIDEOVULKAN_OBJECTS)

# this is needed to disable Vulkan::VideoBackend
$(VIDEOCOMMON_DIR)/VideoBackendBase.o: CXXFLAGS += -D__APPLE__

OBJECTS += $(bdisasm_OBJECTS)
OBJECTS += $(enet_OBJECTS)
OBJECTS += $(glslang_OBJECTS)
OBJECTS += $(hidapi__hidraw_OBJECTS)
OBJECTS += $(mbedcrypto_OBJECTS)
OBJECTS += $(mbedtls_OBJECTS)
OBJECTS += $(mbedx509_OBJECTS)
OBJECTS += $(miniupnpc_OBJECTS)
OBJECTS += $(sfml__network_OBJECTS)
OBJECTS += $(sfml__system_OBJECTS)
OBJECTS += $(SOIL_OBJECTS)
OBJECTS += $(xxhash_OBJECTS)

LIBM := -lm

fpic := -fPIC
SHARED := -shared -Wl,--no-undefined
# version script was causing a link error : investigate / fix.
# -Wl,--version-script=link.T
SHARED_EXT := so

DEFINES  += -D__LIBRETRO__ -DCORE
INCLUDES += -I. -I$(CORE_DIR)/libretro

ifeq ($(DEBUG),1)
FLAGS += -O0 -g -DDEBUG
else
FLAGS += -g -O3 -DNDEBUG
endif

ifeq ($(PERF_TEST),1)
FLAGS += -DPERF_TEST
endif


#FLAGS += -DDEBUGFAST
#FLAGS += -DLOGGING
FLAGS += -D_DEBUG

#TARGET_SUFFIX =
#TARGET_SUFFIX = .so

FLAGS += -Werror=implicit-function-declaration

CFLAGS   += $(FLAGS) $(DEFINES) $(INCLUDES) $(C_FLAGS)   $(C_DEFINES)   $(C_INCLUDES)
CXXFLAGS += $(FLAGS) $(DEFINES) $(INCLUDES) $(CXX_FLAGS) $(CXX_DEFINES) $(CXX_INCLUDES)
LDFLAGS  += $(FLAGS) $(C_FLAGS) $(CXX_FLAGS) $(SHARED) $(LIBM)


ifeq ($(STATIC_LINKING), 1)
TARGET := $(TARGET_NAME)_libretro.a
else
TARGET := $(TARGET_NAME)_libretro.$(SHARED_EXT)
FLAGS += $(fpic)
endif

all: $(TARGET)
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
