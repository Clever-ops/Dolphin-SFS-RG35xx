LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE  := LZO
LOCAL_SRC_FILES := minilzo.c
include $(BUILD_STATIC_LIBRARY)
