LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libavcodec
LOCAL_SRC_FILES := libav/$(TARGET_ARCH_ABI)/lib/$(LOCAL_MODULE).so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/libav/$(TARGET_ARCH_ABI)/include
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libavformat
LOCAL_SRC_FILES := libav/$(TARGET_ARCH_ABI)/lib/$(LOCAL_MODULE).so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/libav/$(TARGET_ARCH_ABI)/include
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libavutil
LOCAL_SRC_FILES := libav/$(TARGET_ARCH_ABI)/lib/$(LOCAL_MODULE).so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/libav/$(TARGET_ARCH_ABI)/include
include $(PREBUILT_SHARED_LIBRARY)
include $(CLEAR_VARS)


LOCAL_MODULE := libavresample
LOCAL_SRC_FILES := libav/$(TARGET_ARCH_ABI)/lib/$(LOCAL_MODULE).so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/libav/$(TARGET_ARCH_ABI)/include
include $(PREBUILT_SHARED_LIBRARY)

#include $(CLEAR_VARS)
#LOCAL_MODULE := libswscale
#LOCAL_SRC_FILES := libav/$(TARGET_ARCH_ABI)/lib/$(LOCAL_MODULE).so
#LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/libav/$(TARGET_ARCH_ABI)/include
#include $(PREBUILT_SHARED_LIBRARY)

LOCAL_PATH:= $(call my-dir)
