
include rules/base.mk

TARGET_NAME   := dolphin
DEBUG          = 0
STATIC_LINKING = 0

PERF_TEST                   = 1
DEBUGFAST                   = 0
LOGGING                     = 1
HAVE_HW_CONTEXT_OPENGL_CORE = 1

$(call add_defines, PERF_TEST LOGGING DEBUGFAST HAVE_HW_CONTEXT_OPENGL_CORE)

ROOT_DIR       = ../../..
BASE_DIR       = ..
LIBRETRO_DIR   = .
DEPS_DIR       = $(ROOT_DIR)/Externals

INCLUDES += -I$(LIBRETRO_DIR)

ifeq ($(compiler),msvc)
#FLAGS += -MP
FLAGS += -nologo -Zc:wchar_t -Z7 -Gm- -Zc:inline -fp:precise -Zp16 -Zc:forScope -GR- -Gd -Oi -volatile:iso
WARNINGS += -wd4996 -wd4351 -WX -W3
#FLAGS += -showIncludes
CFLAGS += -TC
CXXFLAGS += -TP -EHsc
#CXXFLAGS += -Zo -Zc:rvalueCast
#CXXFLAGS += /Yu"pch.h" /Fp"pch.pch" /FIpch.h
else
WARNINGS += -Wall -Wtype-limits -Wsign-compare -Wignored-qualifiers -Wuninitialized -Wlogical-op -Wshadow -Winit-self
FLAGS += -msse2 -fno-strict-aliasing -fno-exceptions -fvisibility=hidden -fomit-frame-pointer
CXXFLAGS += -Wmissing-declarations -fvisibility-inlines-hidden -std=c++14
endif

INCLUDES += -I$(CORE_DIR)
INCLUDES += -I$(DEPS_DIR)/Bochs_disasm
INCLUDES += -I$(DEPS_DIR)/enet/include
INCLUDES += -I$(DEPS_DIR)/mbedtls/include
INCLUDES += -I$(DEPS_DIR)/LZO
INCLUDES += -I$(DEPS_DIR)/zlib
INCLUDES += -I$(DEPS_DIR)/libpng

CXXINCLUDES += -I$(BASE_DIR)
CXXINCLUDES += -I$(DEPS_DIR)/SFML/include
CXXINCLUDES += -I$(DEPS_DIR)/SFML/src/
CXXINCLUDES += -I$(DEPS_DIR)/xxhash
CXXINCLUDES += -I$(DEPS_DIR)/SOIL

include rules/defines.mk

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

ifeq ($(platform),win)
   ifeq ($(compiler),gcc)
      $(error mingw build not supported)
   else ifeq ($(findstring amd64,$(LIB)),)
      $(error x86 32-bit build not supported)
   endif
endif

include rules/libretro.mk
