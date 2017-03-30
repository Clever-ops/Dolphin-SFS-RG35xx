
ifeq ($(platform),)
   platform = unix
   ifeq ($(shell uname -a),)
      platform = win
   else ifneq ($(findstring MINGW,$(shell uname -a)),)
      platform = win
   else ifneq ($(findstring Darwin,$(shell uname -a)),)
      platform = osx
   else ifneq ($(findstring win,$(shell uname -a)),)
      platform = win
   endif
endif

all: build

TARGET_NAME   := dolphin
DEBUG          = 0
PERF_TEST      = 1
STATIC_LINKING = 0
LOGGING        = 1

ROOT_DIR       = ../../..
BASE_DIR       = ..
LIBRETRO_DIR   = .
DEPS_DIR       = $(ROOT_DIR)/Externals


DEFINES  += -DHAVE_HW_CONTEXT_OPENGL_CORE
INCLUDES += -I$(LIBRETRO_DIR)


OBJECTS :=
OBJECTS += audio.o
OBJECTS += boot.o
OBJECTS += host.o
OBJECTS += input.o
OBJECTS += libretro.o
OBJECTS += state.o
OBJECTS += stubs.o
OBJECTS += video.o
OBJECTS += libco/libco.o
OBJECTS += ../UICommon/UICommon.o

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

ifeq ($(LOGGING), 1)
   #FLAGS += -DDEBUGFAST
   #FLAGS += -DLOGGING
   FLAGS += -D_DEBUG
endif

include rules/libretro.mk
