bdisasm_OBJECTS = \
$(DEPS_DIR)/Bochs_disasm/dis_decode.o \
$(DEPS_DIR)/Bochs_disasm/dis_groups.o \
$(DEPS_DIR)/Bochs_disasm/resolve.o \
$(DEPS_DIR)/Bochs_disasm/syntax.o

enet_OBJECTS = \
$(DEPS_DIR)/enet/callbacks.o \
$(DEPS_DIR)/enet/compress.o \
$(DEPS_DIR)/enet/host.o \
$(DEPS_DIR)/enet/list.o \
$(DEPS_DIR)/enet/packet.o \
$(DEPS_DIR)/enet/peer.o \
$(DEPS_DIR)/enet/protocol.o \
$(DEPS_DIR)/enet/unix.o \
$(DEPS_DIR)/enet/win32.o

glslang_OBJECTS = \
$(DEPS_DIR)/glslang/glslang/GenericCodeGen/CodeGen.o \
$(DEPS_DIR)/glslang/glslang/GenericCodeGen/Link.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/Constant.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/glslang_tab.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/InfoSink.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/Initialize.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/Intermediate.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/intermOut.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/IntermTraverse.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/limits.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/linkValidate.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/parseConst.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/ParseHelper.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/PoolAlloc.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/Pp.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpAtom.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpContext.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpMemory.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpScanner.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpSymbols.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpTokens.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/propagateNoContraction.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/reflection.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/RemoveTree.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/Scan.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/ShaderLang.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/SymbolTable.o \
$(DEPS_DIR)/glslang/glslang/MachineIndependent/Versions.o \
$(DEPS_DIR)/glslang/hlsl/hlslGrammar.o \
$(DEPS_DIR)/glslang/hlsl/hlslOpMap.o \
$(DEPS_DIR)/glslang/hlsl/hlslParseables.o \
$(DEPS_DIR)/glslang/hlsl/hlslParseHelper.o \
$(DEPS_DIR)/glslang/hlsl/hlslScanContext.o \
$(DEPS_DIR)/glslang/hlsl/hlslTokenStream.o \
$(DEPS_DIR)/glslang/OGLCompilersDLL/InitializeDll.o \
$(DEPS_DIR)/glslang/SPIRV/disassemble.o \
$(DEPS_DIR)/glslang/SPIRV/doc.o \
$(DEPS_DIR)/glslang/SPIRV/GlslangToSpv.o \
$(DEPS_DIR)/glslang/SPIRV/InReadableOrder.o \
$(DEPS_DIR)/glslang/SPIRV/Logger.o \
$(DEPS_DIR)/glslang/SPIRV/SpvBuilder.o \
$(DEPS_DIR)/glslang/SPIRV/SPVRemapper.o
ifeq ($(platform),win)
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/OSDependent/Windows/ossource.o
else
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/OSDependent/Unix/ossource.o
endif

# maybe $(DEPS_DIR)/hidapi/libusb can be used as a fallback here ?
ifeq ($(platform),win)
   hidapi__hidraw_OBJECTS = $(DEPS_DIR)/hidapi/windows/hid.o
else ifeq ($(platform),osx)
   hidapi__hidraw_OBJECTS = $(DEPS_DIR)/hidapi/mac/hid.o
else
   hidapi__hidraw_OBJECTS = $(DEPS_DIR)/hidapi/linux/hid.o
endif

mbedcrypto_OBJECTS = \
$(DEPS_DIR)/mbedtls/library/aes.o \
$(DEPS_DIR)/mbedtls/library/aesni.o \
$(DEPS_DIR)/mbedtls/library/arc4.o \
$(DEPS_DIR)/mbedtls/library/asn1parse.o \
$(DEPS_DIR)/mbedtls/library/asn1write.o \
$(DEPS_DIR)/mbedtls/library/base64.o \
$(DEPS_DIR)/mbedtls/library/bignum.o \
$(DEPS_DIR)/mbedtls/library/blowfish.o \
$(DEPS_DIR)/mbedtls/library/camellia.o \
$(DEPS_DIR)/mbedtls/library/ccm.o \
$(DEPS_DIR)/mbedtls/library/cipher.o \
$(DEPS_DIR)/mbedtls/library/cipher_wrap.o \
$(DEPS_DIR)/mbedtls/library/ctr_drbg.o \
$(DEPS_DIR)/mbedtls/library/des.o \
$(DEPS_DIR)/mbedtls/library/dhm.o \
$(DEPS_DIR)/mbedtls/library/ecdh.o \
$(DEPS_DIR)/mbedtls/library/ecdsa.o \
$(DEPS_DIR)/mbedtls/library/ecp.o \
$(DEPS_DIR)/mbedtls/library/ecp_curves.o \
$(DEPS_DIR)/mbedtls/library/entropy.o \
$(DEPS_DIR)/mbedtls/library/entropy_poll.o \
$(DEPS_DIR)/mbedtls/library/error.o \
$(DEPS_DIR)/mbedtls/library/gcm.o \
$(DEPS_DIR)/mbedtls/library/havege.o \
$(DEPS_DIR)/mbedtls/library/hmac_drbg.o \
$(DEPS_DIR)/mbedtls/library/md.o \
$(DEPS_DIR)/mbedtls/library/md2.o \
$(DEPS_DIR)/mbedtls/library/md4.o \
$(DEPS_DIR)/mbedtls/library/md5.o \
$(DEPS_DIR)/mbedtls/library/md_wrap.o \
$(DEPS_DIR)/mbedtls/library/memory_buffer_alloc.o \
$(DEPS_DIR)/mbedtls/library/oid.o \
$(DEPS_DIR)/mbedtls/library/padlock.o \
$(DEPS_DIR)/mbedtls/library/pem.o \
$(DEPS_DIR)/mbedtls/library/pk.o \
$(DEPS_DIR)/mbedtls/library/pk_wrap.o \
$(DEPS_DIR)/mbedtls/library/pkcs12.o \
$(DEPS_DIR)/mbedtls/library/pkcs5.o \
$(DEPS_DIR)/mbedtls/library/pkparse.o \
$(DEPS_DIR)/mbedtls/library/pkwrite.o \
$(DEPS_DIR)/mbedtls/library/platform.o \
$(DEPS_DIR)/mbedtls/library/ripemd160.o \
$(DEPS_DIR)/mbedtls/library/rsa.o \
$(DEPS_DIR)/mbedtls/library/sha1.o \
$(DEPS_DIR)/mbedtls/library/sha256.o \
$(DEPS_DIR)/mbedtls/library/sha512.o \
$(DEPS_DIR)/mbedtls/library/threading.o \
$(DEPS_DIR)/mbedtls/library/timing.o \
$(DEPS_DIR)/mbedtls/library/version.o \
$(DEPS_DIR)/mbedtls/library/version_features.o \
$(DEPS_DIR)/mbedtls/library/xtea.o

mbedtls_OBJECTS = \
$(DEPS_DIR)/mbedtls/library/debug.o \
$(DEPS_DIR)/mbedtls/library/net_sockets.o \
$(DEPS_DIR)/mbedtls/library/ssl_cache.o \
$(DEPS_DIR)/mbedtls/library/ssl_ciphersuites.o \
$(DEPS_DIR)/mbedtls/library/ssl_cli.o \
$(DEPS_DIR)/mbedtls/library/ssl_cookie.o \
$(DEPS_DIR)/mbedtls/library/ssl_srv.o \
$(DEPS_DIR)/mbedtls/library/ssl_ticket.o \
$(DEPS_DIR)/mbedtls/library/ssl_tls.o

mbedx509_OBJECTS = \
$(DEPS_DIR)/mbedtls/library/certs.o \
$(DEPS_DIR)/mbedtls/library/pkcs11.o \
$(DEPS_DIR)/mbedtls/library/x509.o \
$(DEPS_DIR)/mbedtls/library/x509_create.o \
$(DEPS_DIR)/mbedtls/library/x509_crl.o \
$(DEPS_DIR)/mbedtls/library/x509_crt.o \
$(DEPS_DIR)/mbedtls/library/x509_csr.o \
$(DEPS_DIR)/mbedtls/library/x509write_crt.o \
$(DEPS_DIR)/mbedtls/library/x509write_csr.o


miniupnpc_OBJECTS = \
$(DEPS_DIR)/miniupnpc/src/igd_desc_parse.o \
$(DEPS_DIR)/miniupnpc/src/miniupnpc.o \
$(DEPS_DIR)/miniupnpc/src/minixml.o \
$(DEPS_DIR)/miniupnpc/src/minisoap.o \
$(DEPS_DIR)/miniupnpc/src/minissdpc.o \
$(DEPS_DIR)/miniupnpc/src/miniwget.o \
$(DEPS_DIR)/miniupnpc/src/upnpcommands.o \
$(DEPS_DIR)/miniupnpc/src/upnpdev.o \
$(DEPS_DIR)/miniupnpc/src/upnpreplyparse.o \
$(DEPS_DIR)/miniupnpc/src/upnperrors.o \
$(DEPS_DIR)/miniupnpc/src/connecthostport.o \
$(DEPS_DIR)/miniupnpc/src/portlistingparse.o \
$(DEPS_DIR)/miniupnpc/src/receivedata.o

sfml__network_OBJECTS = \
$(DEPS_DIR)/SFML/src/SFML/Network/Http.o \
$(DEPS_DIR)/SFML/src/SFML/Network/IPAddress.o \
$(DEPS_DIR)/SFML/src/SFML/Network/Packet.o \
$(DEPS_DIR)/SFML/src/SFML/Network/Socket.o \
$(DEPS_DIR)/SFML/src/SFML/Network/SocketSelector.o \
$(DEPS_DIR)/SFML/src/SFML/Network/TcpListener.o \
$(DEPS_DIR)/SFML/src/SFML/Network/TcpSocket.o \
$(DEPS_DIR)/SFML/src/SFML/Network/UdpSocket.o
ifeq ($(platform),win)
   sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/Win32/SocketImpl.o
else
   sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/Unix/SocketImpl.o
endif

sfml__system_OBJECTS = \
$(DEPS_DIR)/SFML/src/SFML/System/Err.o \
$(DEPS_DIR)/SFML/src/SFML/System/String.o \
$(DEPS_DIR)/SFML/src/SFML/System/Time.o

SOIL_OBJECTS = \
$(DEPS_DIR)/SOIL/image_DXT.o \
$(DEPS_DIR)/SOIL/image_helper.o \
$(DEPS_DIR)/SOIL/SOIL.o \
$(DEPS_DIR)/SOIL/stb_image_aug.o

xxhash_OBJECTS = \
$(DEPS_DIR)/xxhash/xxhash.o

libpng_OBJECTS = \
$(DEPS_DIR)/libpng/png.o \
$(DEPS_DIR)/libpng/pngerror.o \
$(DEPS_DIR)/libpng/pngget.o \
$(DEPS_DIR)/libpng/pngmem.o \
$(DEPS_DIR)/libpng/pngpread.o \
$(DEPS_DIR)/libpng/pngread.o \
$(DEPS_DIR)/libpng/pngrio.o \
$(DEPS_DIR)/libpng/pngrtran.o \
$(DEPS_DIR)/libpng/pngrutil.o \
$(DEPS_DIR)/libpng/pngset.o \
$(DEPS_DIR)/libpng/pngtrans.o \
$(DEPS_DIR)/libpng/pngwio.o \
$(DEPS_DIR)/libpng/pngwrite.o \
$(DEPS_DIR)/libpng/pngwtran.o \
$(DEPS_DIR)/libpng/pngwutil.o

LZO_OBJECTS = \
$(DEPS_DIR)/LZO/minilzo.o

zlib_OBJECTS = \
$(DEPS_DIR)/zlib/adler32.o \
$(DEPS_DIR)/zlib/compress.o \
$(DEPS_DIR)/zlib/crc32.o \
$(DEPS_DIR)/zlib/deflate.o \
$(DEPS_DIR)/zlib/gzclose.o \
$(DEPS_DIR)/zlib/gzlib.o \
$(DEPS_DIR)/zlib/gzread.o \
$(DEPS_DIR)/zlib/gzwrite.o \
$(DEPS_DIR)/zlib/inflate.o \
$(DEPS_DIR)/zlib/infback.o \
$(DEPS_DIR)/zlib/inftrees.o \
$(DEPS_DIR)/zlib/inffast.o \
$(DEPS_DIR)/zlib/trees.o \
$(DEPS_DIR)/zlib/uncompr.o \
$(DEPS_DIR)/zlib/zutil.o


#Deps :
EXTERNALS_OBJECTS += $(bdisasm_OBJECTS)
EXTERNALS_OBJECTS += $(enet_OBJECTS)
EXTERNALS_OBJECTS += $(glslang_OBJECTS)
#EXTERNALS_OBJECTS += $(hidapi__hidraw_OBJECTS)
EXTERNALS_OBJECTS += $(mbedcrypto_OBJECTS)
EXTERNALS_OBJECTS += $(mbedtls_OBJECTS)
EXTERNALS_OBJECTS += $(mbedx509_OBJECTS)
EXTERNALS_OBJECTS += $(miniupnpc_OBJECTS)
EXTERNALS_OBJECTS += $(sfml__network_OBJECTS)
EXTERNALS_OBJECTS += $(sfml__system_OBJECTS)
EXTERNALS_OBJECTS += $(SOIL_OBJECTS)
EXTERNALS_OBJECTS += $(xxhash_OBJECTS)
EXTERNALS_OBJECTS += $(libpng_OBJECTS)
EXTERNALS_OBJECTS += $(LZO_OBJECTS)
EXTERNALS_OBJECTS += $(zlib_OBJECTS)

#$(hidapi__hidraw_OBJECTS.o=$(OBJ_EXT)): INCLUDES += -I$(DEPS_DIR)/hidapi/hidapi

#$(glslang_OBJECTS)        : WARNINGS += -Wno-shadow -Wno-reorder -Wno-sign-compare -Wno-parentheses -Wno-unused-variable

libexternals.a:   WARNINGS_gcc  := -w
libexternals.lib: WARNINGS_msvc := -W0

$(DEPS_DIR)/glslang/glslang/MachineIndependent/glslang_tab.obj: CXXPCHFLAGS :=
$(DEPS_DIR)/glslang/glslang/MachineIndependent/Scan.obj: CXXPCHFLAGS :=

$(call add_lib,externals,$(EXTERNALS_OBJECTS))

