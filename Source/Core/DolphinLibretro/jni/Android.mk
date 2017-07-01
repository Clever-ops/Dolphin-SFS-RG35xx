LOCAL_PATH := $(call my-dir)

platform := android

include ../rules/defines.mk
include ../rules/flags_android.mk

include $(DEPS_DIR)/glslang/Android.mk
include $(DEPS_DIR)/libiconv-1.14/Android.mk
include $(DEPS_DIR)/libpng/Android.mk
include $(DEPS_DIR)/LZO/Android.mk
include $(DEPS_DIR)/mbedtls/Android.mk
include $(DEPS_DIR)/SFML/Android.mk
include $(DEPS_DIR)/SOIL/Android.mk
include $(DEPS_DIR)/xxhash/Android.mk

include ../rules/libretro_android.mk
include ../rules/core_android.mk
include ../rules/common_android.mk
include ../rules/discio_android.mk
include ../rules/inputcommon_android.mk
include ../rules/videocommon_android.mk
include ../rules/videobackends_android.mk

$(COMMON_DIR)/scmrev.h:
	@echo scmrev.h
	@echo '#define SCM_REV_STR "$(DOLPHIN_WC_REVISION)"' > $@
	@echo '#define SCM_DESC_STR "$(DOLPHIN_WC_DESCRIBE)"' >> $@
	@echo '#define SCM_BRANCH_STR "$(DOLPHIN_WC_BRANCH)"' >> $@
	@echo '#define SCM_IS_MASTER $(DOLPHIN_WC_IS_STABLE)' >> $@
	@echo '#define SCM_DISTRIBUTOR_STR "$(DISTRIBUTOR)"' >> $@

$(COMMON_DIR)/Version.cpp: $(COMMON_DIR)/scmrev.h

clean_scmrev:
	@rm $(COMMON_DIR)/scmrev.h

clean: clean_scmrev

include $(CLEAR_VARS)
LOCAL_MODULE           := retro
LOCAL_CXXFLAGS         += $(FLAGS_clang) $(DEFINES) $(CXXDEFINES) $(CXXFLAGS_clang) $(WARNINGS_clang) $(INCLUDES) $(CXXINCLUDES) $(CXXINCLUDES_clang)
LOCAL_CFLAGS           += $(FLAGS_clang) $(DEFINES) $(CXXDEFINES) $(INCLUDES)
LOCAL_LDFLAGS          += -lz
LOCAL_STATIC_LIBRARIES := xxhash LZO png iconv SOIL sfml glslang mbedtls
LOCAL_SRC_FILES        := $(SOURCES_LIBRETRO) $(SOURCES_CORE) $(SOURCES_CORE_HW) $(SOURCES_CORE_IOS) $(SOURCES_CORE_PPC) $(SOURCES_CORE_PPC_ARM64) $(SOURCES_COMMON) $(SOURCES_COMMON_ARM64) $(SOURCES_DISCIO) $(SOURCES_INPUT) $(SOURCES_VIDEO) $(SOURCES_VIDEO_ARM64) $(SOURCES_VIDGL) $(SOURCES_VULKAN) $(SOURCES_VIDEOSOFT) $(SOURCES_VIDEONULL)
include $(BUILD_SHARED_LIBRARY)
