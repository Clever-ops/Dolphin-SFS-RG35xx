ifneq ($(STATIC_LINKING), 0)
LDFLAGS += -fno-pie
LDFLAGS += -no-pie
endif


#LDFLAGS += -Wl,-Map,$(notdir $@.map)

# needed ?
#LDFLAGS += -lusb-1.0
#LDFLAGS += -ludev

#LDFLAGS += -lglib-2.0
#LDFLAGS += -lgobject-2.0
#LDFLAGS += -latk-1.0
#LDFLAGS += -lgio-2.0
#LDFLAGS += -lgthread-2.0
#LDFLAGS += -lgmodule-2.0
#LDFLAGS += -lpangocairo-1.0
#LDFLAGS += -lpangoft2-1.0
#LDFLAGS += -lpangoxft-1.0


LDFLAGS += -llzo2
##LDFLAGS += -levdev
#LDFLAGS += -lSM
#LDFLAGS += -lICE
#LDFLAGS += -lXext
LDFLAGS += -lcurl
#LDFLAGS += -lGLU
#LDFLAGS += -lGL
#LDFLAGS += -llzo2

##LDFLAGS += -lSoundTouch
##LDFLAGS += -lbluetooth
LDFLAGS += -lpng
#LDFLAGS += -lXrandr
#LDFLAGS += -lpthread
#LDFLAGS += -lrt
#LDFLAGS += -lXi
#LDFLAGS += -ldl
#LDFLAGS += -lz
#LDFLAGS += -lc



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
