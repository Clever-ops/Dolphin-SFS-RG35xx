ifneq ($(STATIC_LINKING), 0)
LDFLAGS += -fno-pie
LDFLAGS += -no-pie
endif

#LDFLAGS += -L/usr/lib
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/enet/libenet.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/xxhash/libxxhash.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/miniupnpc/libminiupnpc.a
##LDFLAGS += $(DOLPHIN_DIR)/build/Externals/hidapi/linux/libhidapi-hidraw.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/Bochs_disasm/libbdisasm.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/SFML/libsfml-network.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/SFML/libsfml-system.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/mbedtls/library/libmbedtls.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/mbedtls/library/libmbedx509.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/mbedtls/library/libmbedcrypto.a
#LDFLAGS += $(DOLPHIN_DIR)/build/Externals/SOIL/libSOIL.a


# needed ?
LDFLAGS += -lusb-1.0
LDFLAGS += -ludev

LDFLAGS += -lglib-2.0
LDFLAGS += -lgobject-2.0
LDFLAGS += -latk-1.0
LDFLAGS += -lgio-2.0
LDFLAGS += -lgthread-2.0
LDFLAGS += -lgmodule-2.0
LDFLAGS += -lpangocairo-1.0
LDFLAGS += -lpangoft2-1.0
LDFLAGS += -lpangoxft-1.0


#LDFLAGS += -lgdk_pixbuf-2.0
#LDFLAGS += -lcairo
#LDFLAGS += -lpango-1.0
#LDFLAGS += -lgdk-x11-2.0
#LDFLAGS += -lgtk-x11-2.0
LDFLAGS += -llzo2
#LDFLAGS += -lasound
#LDFLAGS += -levdev
LDFLAGS += -lSM
LDFLAGS += -lICE
#LDFLAGS += -lX11
LDFLAGS += -lXext
LDFLAGS += -lcurl
LDFLAGS += -lGLU
LDFLAGS += -lGL
LDFLAGS += -llzo2

#LDFLAGS += -lSoundTouch
#LDFLAGS += -lbluetooth
LDFLAGS += -lpng
LDFLAGS += -lXrandr
LDFLAGS += -lpthread
LDFLAGS += -lrt
LDFLAGS += -lXi
LDFLAGS += -ldl
LDFLAGS += -lz
LDFLAGS += -lc



#DEPS_OBJECTS += $(bdisasm_OBJECTS)
#DEPS_OBJECTS += $(enet_OBJECTS)
#DEPS_OBJECTS += $(glslang_OBJECTS)
#DEPS_OBJECTS += $(hidapi__hidraw_OBJECTS)
#DEPS_OBJECTS += $(mbedcrypto_OBJECTS)
#DEPS_OBJECTS += $(mbedtls_OBJECTS)
#DEPS_OBJECTS += $(mbedx509_OBJECTS)
#DEPS_OBJECTS += $(miniupnpc_OBJECTS)
#DEPS_OBJECTS += $(sfml__network_OBJECTS)
#DEPS_OBJECTS += $(sfml__system_OBJECTS)
#DEPS_OBJECTS += $(SOIL_OBJECTS)
#DEPS_OBJECTS += $(xxhash_OBJECTS)
#LDFLAGS += -L. -lexternals
#libexternals.a: $(DEPS_OBJECTS)
#	$(AR) rcs $@ $(DEPS_OBJECTS)
#$(TARGET): libexternals.a
