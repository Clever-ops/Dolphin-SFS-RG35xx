INCLUDES += -I$(CORE_DIR)
#INCLUDES += -I/usr/include/AL
#INCLUDES += -I/usr/include/libevdev-1.0
INCLUDES += -I$(DEPS_DIR)/Bochs_disasm
INCLUDES += -I$(DEPS_DIR)/enet/include
INCLUDES += -I$(DEPS_DIR)/mbedtls/include


CXX_INCLUDES += -I$(BASE_DIR)
CXX_INCLUDES += -I$(DEPS_DIR)/SFML/include
CXX_INCLUDES += -I$(DEPS_DIR)/SFML/src/
CXX_INCLUDES += -I$(DEPS_DIR)/xxhash
#CXX_INCLUDES += -I$(DEPS_DIR)/miniupnpc/src
CXX_INCLUDES += -I$(DEPS_DIR)/SOIL
#CXX_INCLUDES += -I$(DEPS_DIR)/hidapi/hidapi
#CXX_INCLUDES += -I$(DEPS_DIR)/wxWidgets3
#CXX_INCLUDES += -I$(DEPS_DIR)/wxWidgets3/include
#CXX_INCLUDES += -I$(DEPS_DIR)/gtest/include
#CXX_INCLUDES += -I$(DEPS_DIR)/glslang/glslang/Public
#CXX_INCLUDES += -I$(DEPS_DIR)/glslang/SPIRV

#CXX_INCLUDES += -I/usr/include/glib-2.0
#CXX_INCLUDES += -I/usr/include/freetype2
#CXX_INCLUDES += -I/usr/include/libpng16
#CXX_INCLUDES += -I/usr/include/soundtouch
#CXX_INCLUDES += -I/usr/include/libusb-1.0
#CXX_INCLUDES += -I/usr/lib64/glib-2.0/include
#CXX_INCLUDES += -I/usr/include/atk-1.0
#CXX_INCLUDES += -I/usr/include/gdk-pixbuf-2.0
#CXX_INCLUDES += -I/usr/include/cairo
#CXX_INCLUDES += -I/usr/include/pango-1.0
#CXX_INCLUDES += -I/usr/include/gtk-2.0
#CXX_INCLUDES += -I/usr/lib64/gtk-2.0/include
#CXX_INCLUDES += -I/usr/lib/glib-2.0/include
#CXX_INCLUDES += -I/usr/include/pixman-1
#CXX_INCLUDES += -I/usr/include/harfbuzz
#CXX_INCLUDES += -I/usr/include/libdrm
