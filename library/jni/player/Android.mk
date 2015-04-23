LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libavplayer
LOCAL_CFLAGS := 
LOCAL_SRC_FILES := danbroid_libavplayer_LibAV.c audioplayer.c packet_queue.c read_thread.c play_thread.c

LOCAL_SHARED_LIBRARIES := libavresample libavcodec libavformat libavutil
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../libav/libav/$(TARGET_ARCH_ABI)/include

#LOCAL_LDLIBS += -lOpenSLES  -llog 
LOCAL_LDLIBS +=  -llog


include $(BUILD_SHARED_LIBRARY)


#include $(CLEAR_VARS)

#LOCAL_MODULE := avtest
#LOCAL_SRC_FILES := audiostream.c avtest.c
#LOCAL_CFLAGS := 
#LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../libav/libav/$(TARGET_ARCH_ABI)/include
#LOCAL_SHARED_LIBRARIES := libavresample libavcodec libavformat libavutil
#LOCAL_LDLIBS += -lOpenSLES  -llog


#include $(BUILD_EXECUTABLE)    # <-- Use this to build an executable.