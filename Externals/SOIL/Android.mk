LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE  := SOIL
LOCAL_SRC_FILES := image_DXT.c \
                   image_helper.c \
                   SOIL.c \
                   stb_image_aug.c
include $(BUILD_STATIC_LIBRARY)
