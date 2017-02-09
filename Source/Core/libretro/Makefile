TARGET_NAME   := dolphin
DEBUG          = 0
PERF_TEST      = 1
STATIC_LINKING = 1
LOGGING        = 1

ROOT_DIR       = ../../..
BASE_DIR       = ..
LIBRETRO_DIR   = .
DEPS_DIR       = $(ROOT_DIR)/Externals

all: build


DEFINES  += -DCORE
INCLUDES += -I$(LIBRETRO_DIR)

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

#Deps :
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

ifeq ($(LOGGING), 1)
   #FLAGS += -DDEBUGFAST
   #FLAGS += -DLOGGING
   FLAGS += -D_DEBUG
endif

include rules/libretro.mk
