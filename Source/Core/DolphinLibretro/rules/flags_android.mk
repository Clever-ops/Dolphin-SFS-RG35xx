TARGET_NAME     := dolphin
DEBUG           := 0
STATIC_LINKING  := 0
LTO             := 0
GC_SECTIONS     := 0
SANITIZER       := 0

PERF_TEST        := 0
DEBUGFAST        := 0
LOGGING          := 0
HAVE_OPENGL_CORE := 1
HAVE_VULKAN      := 1

DISTRIBUTOR          := Libretro
DOLPHIN_WC_BRANCH    := $(shell git$(EXE_EXT) rev-parse --abbrev-ref HEAD)
DOLPHIN_WC_REVISION  := $(shell git$(EXE_EXT) rev-parse HEAD)
DOLPHIN_WC_DESCRIBE  := $(shell git$(EXE_EXT) describe --always --long --dirty)
DOLPHIN_WC_IS_STABLE := $(if $(filter-out master stable,$(DOLPHIN_WC_BRANCH)),0,1)

ROOT_DIR       := $(LOCAL_PATH)/../../../..
BASE_DIR       := $(LOCAL_PATH)/../../..
LIBRETRO_DIR   := $(LOCAL_PATH)/..
COMMON_DIR     := $(BASE_DIR)/Core/Common
CORE_DIR       := $(BASE_DIR)/Core/Core
DISCIO_DIR     := $(BASE_DIR)/Core/DiscIO
INPUTCOMMON_DIR := $(BASE_DIR)/Core/InputCommon
VIDEOCOMMON_DIR  := $(BASE_DIR)/Core/VideoCommon
VIDEOBACKENDS_DIR := $(BASE_DIR)/Core/VideoBackends
VIDEOGL_DIR := $(BASE_DIR)/Core/VideoBackends/OGL
VIDEOVULKAN_DIR := $(BASE_DIR)/Core/VideoBackends/Vulkan
VIDEOSOFTWARE_DIR := $(BASE_DIR)/Core/VideoBackends/Software
VIDEONULL_DIR := $(BASE_DIR)/Core/VideoBackends/Null
DEPS_DIR       := $(ROOT_DIR)/Externals

DEFINES += -D__LIBRETRO__
DEFINES += -DHAVE_STRL
DEFINES += -DNDEBUG

INCLUDES += -I$(LIBRETRO_DIR)

INCLUDES += -I$(CORE_DIR)
INCLUDES += -I$(DEPS_DIR)/Bochs_disasm
INCLUDES += -I$(DEPS_DIR)/mbedtls/include
INCLUDES += -I$(DEPS_DIR)/enet/include
INCLUDES += -I$(DEPS_DIR)/LZO
INCLUDES += -I$(DEPS_DIR)/zlib
INCLUDES += -I$(DEPS_DIR)/libpng
INCLUDES += -I$(DEPS_DIR)/libiconv-1.14
INCLUDES += -I$(LIBRETRO_DIR)/libretro-common/include

CXXINCLUDES += -I$(BASE_DIR)
CXXINCLUDES += -I$(BASE_DIR)/Core
CXXINCLUDES += -I$(DEPS_DIR)/SFML/include
CXXINCLUDES += -I$(DEPS_DIR)/SFML/src/
CXXINCLUDES += -I$(DEPS_DIR)/xxhash
CXXINCLUDES += -I$(DEPS_DIR)/SOIL
ifeq ($(HAVE_VULKAN),1)
	   CXXINCLUDES       += -I$(DEPS_DIR)/Vulkan/Include
	      CXXINCLUDES_clang += -isystem$(DEPS_DIR)/glslang/glslang/Public
	         CXXINCLUDES_clang += -isystem$(DEPS_DIR)/glslang/SPIRV
	 endif

# clang
FLAGS_clang    += -fno-strict-aliasing -fvisibility=hidden -fomit-frame-pointer
CXXFLAGS_clang += -Wmissing-declarations -fvisibility-inlines-hidden
CXXFLAGS_clang += -fno-exceptions -fno-rtti -std=c++14
WARNINGS_clang += -Wall -Wtype-limits -Wsign-compare -Wignored-qualifiers -Wuninitialized -Wshadow -Winit-self
WARNINGS_clang += -Werror=implicit-function-declaration
