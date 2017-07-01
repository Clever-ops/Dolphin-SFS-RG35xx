LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE  := sfml
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include \
                    $(LOCAL_PATH)/src
LOCAL_SRC_FILES := src/SFML/Network/Http.cpp \
                   src/SFML/Network/IPAddress.cpp \
                   src/SFML/Network/Packet.cpp \
                   src/SFML/Network/Socket.cpp \
                   src/SFML/Network/SocketSelector.cpp \
                   src/SFML/Network/TcpListener.cpp \
                   src/SFML/Network/TcpSocket.cpp \
                   src/SFML/Network/UdpSocket.cpp \
                   src/SFML/Network/Unix/SocketImpl.cpp \
                   src/SFML/System/Err.cpp \
                   src/SFML/System/String.cpp \
                   src/SFML/System/Time.cpp
include $(BUILD_STATIC_LIBRARY)
