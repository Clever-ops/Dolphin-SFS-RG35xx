SOURCES_LIBRETRO := $(LIBRETRO_DIR)/main.cpp \
                    $(LIBRETRO_DIR)/audio.cpp \
                    $(LIBRETRO_DIR)/boot.cpp \
                    $(LIBRETRO_DIR)/host.cpp \
                    $(LIBRETRO_DIR)/input.cpp \
                    $(LIBRETRO_DIR)/state.cpp \
                    $(LIBRETRO_DIR)/stubs.cpp \
                    $(LIBRETRO_DIR)/video.cpp \
                    $(BASE_DIR)/Core/UICommon/UICommon.cpp \
                    $(LIBRETRO_DIR)/libretro-common/compat/compat_posix_string.c \
                    $(LIBRETRO_DIR)/libretro-common/compat/compat_snprintf.c \
                    $(LIBRETRO_DIR)/libretro-common/compat/compat_strcasestr.c \
                    $(LIBRETRO_DIR)/libretro-common/file/file_path.c
