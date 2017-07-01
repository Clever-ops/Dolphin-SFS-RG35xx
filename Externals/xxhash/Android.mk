LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE  := xxhash
LOCAL_SRC_FILES := xxhash.c
include $(BUILD_STATIC_LIBRARY)
