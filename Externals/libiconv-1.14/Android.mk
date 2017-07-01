LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE  := iconv
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include \
                    $(LOCAL_PATH)/libcharset/include
LOCAL_SRC_FILES := lib/iconv.c \
                   lib/relocatable.c \
                   libcharset/lib/localcharset.c
include $(BUILD_STATIC_LIBRARY)
