bdisasm_OBJECTS :=
bdisasm_OBJECTS += $(DEPS_DIR)/Bochs_disasm/dis_decode.o
bdisasm_OBJECTS += $(DEPS_DIR)/Bochs_disasm/dis_groups.o
bdisasm_OBJECTS += $(DEPS_DIR)/Bochs_disasm/resolve.o
bdisasm_OBJECTS += $(DEPS_DIR)/Bochs_disasm/syntax.o

glslang_OBJECTS :=
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/GenericCodeGen/CodeGen.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/GenericCodeGen/Link.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/Constant.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/glslang_tab.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/InfoSink.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/Initialize.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/Intermediate.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/intermOut.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/IntermTraverse.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/limits.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/linkValidate.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/parseConst.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/ParseHelper.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/PoolAlloc.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/Pp.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpAtom.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpContext.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpMemory.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpScanner.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpSymbols.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/preprocessor/PpTokens.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/propagateNoContraction.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/reflection.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/RemoveTree.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/Scan.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/ShaderLang.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/SymbolTable.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/glslang/MachineIndependent/Versions.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/hlsl/hlslGrammar.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/hlsl/hlslOpMap.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/hlsl/hlslParseables.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/hlsl/hlslParseHelper.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/hlsl/hlslScanContext.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/hlsl/hlslTokenStream.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/OGLCompilersDLL/InitializeDll.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/SPIRV/disassemble.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/SPIRV/doc.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/SPIRV/GlslangToSpv.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/SPIRV/InReadableOrder.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/SPIRV/Logger.o
glslang_OBJECTS += $(DEPS_DIR)/glslang/SPIRV/SpvBuilder.o
#glslang_OBJECTS += $(DEPS_DIR)/glslang/SPIRV/SPVRemapper.o

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

mbedcrypto_OBJECTS :=
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/aes.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/aesni.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/arc4.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/asn1parse.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/asn1write.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/base64.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/bignum.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/blowfish.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/camellia.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/ccm.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/cipher.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/cipher_wrap.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/ctr_drbg.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/des.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/dhm.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/ecdh.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/ecdsa.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/ecp.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/ecp_curves.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/entropy.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/entropy_poll.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/error.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/gcm.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/havege.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/hmac_drbg.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/md.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/md2.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/md4.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/md5.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/md_wrap.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/memory_buffer_alloc.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/oid.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/padlock.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/pem.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/pk.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/pk_wrap.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/pkcs12.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/pkcs5.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/pkparse.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/pkwrite.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/platform.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/ripemd160.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/rsa.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/sha1.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/sha256.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/sha512.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/threading.o
mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/timing.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/version.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/version_features.o
#mbedcrypto_OBJECTS += $(DEPS_DIR)/mbedtls/library/xtea.o

mbedtls_OBJECTS :=
mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/debug.o
mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/net_sockets.o
#mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/ssl_cache.o
mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/ssl_ciphersuites.o
mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/ssl_cli.o
#mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/ssl_cookie.o
mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/ssl_srv.o
#mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/ssl_ticket.o
mbedtls_OBJECTS += $(DEPS_DIR)/mbedtls/library/ssl_tls.o

mbedx509_OBJECTS :=
mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/certs.o
#mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/pkcs11.o
mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/x509.o
#mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/x509_create.o
#mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/x509_crl.o
mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/x509_crt.o
#mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/x509_csr.o
#mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/x509write_crt.o
#mbedx509_OBJECTS += $(DEPS_DIR)/mbedtls/library/x509write_csr.o

sfml__network_OBJECTS :=
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/Http.o
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/IPAddress.o
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/Packet.o
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/Socket.o
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/SocketSelector.o
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/TcpListener.o
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/TcpSocket.o
sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/UdpSocket.o
ifeq ($(platform),win)
   sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/Win32/SocketImpl.o
else
   sfml__network_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/Network/Unix/SocketImpl.o
endif

sfml__system_OBJECTS :=
sfml__system_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/System/Err.o
sfml__system_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/System/String.o
sfml__system_OBJECTS += $(DEPS_DIR)/SFML/src/SFML/System/Time.o

SOIL_OBJECTS :=
SOIL_OBJECTS += $(DEPS_DIR)/SOIL/image_DXT.o
#SOIL_OBJECTS += $(DEPS_DIR)/SOIL/image_helper.o
SOIL_OBJECTS += $(DEPS_DIR)/SOIL/SOIL.o
SOIL_OBJECTS += $(DEPS_DIR)/SOIL/stb_image_aug.o

xxhash_OBJECTS = $(DEPS_DIR)/xxhash/xxhash.o

libpng_OBJECTS :=
libpng_OBJECTS += $(DEPS_DIR)/libpng/png.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngerror.o
#libpng_OBJECTS += $(DEPS_DIR)/libpng/pngget.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngmem.o
#libpng_OBJECTS += $(DEPS_DIR)/libpng/pngpread.o
#libpng_OBJECTS += $(DEPS_DIR)/libpng/pngread.o
#libpng_OBJECTS += $(DEPS_DIR)/libpng/pngrio.o
#libpng_OBJECTS += $(DEPS_DIR)/libpng/pngrtran.o
#libpng_OBJECTS += $(DEPS_DIR)/libpng/pngrutil.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngset.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngtrans.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngwio.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngwrite.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngwtran.o
libpng_OBJECTS += $(DEPS_DIR)/libpng/pngwutil.o

LZO_OBJECTS = $(DEPS_DIR)/LZO/minilzo.o

zlib_OBJECTS :=
zlib_OBJECTS += $(DEPS_DIR)/zlib/adler32.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/compress.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/crc32.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/deflate.o
#zlib_OBJECTS += $(DEPS_DIR)/zlib/gzclose.o
#zlib_OBJECTS += $(DEPS_DIR)/zlib/gzlib.o
#zlib_OBJECTS += $(DEPS_DIR)/zlib/gzread.o
#zlib_OBJECTS += $(DEPS_DIR)/zlib/gzwrite.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/inflate.o
#zlib_OBJECTS += $(DEPS_DIR)/zlib/infback.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/inftrees.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/inffast.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/trees.o
#zlib_OBJECTS += $(DEPS_DIR)/zlib/uncompr.o
zlib_OBJECTS += $(DEPS_DIR)/zlib/zutil.o


#Deps :
$(call add_external_lib,bdisasm,$(bdisasm_OBJECTS))
#$(call add_external_lib,hidapi,$(hidapi__hidraw_OBJECTS))
$(call add_external_lib,mbed,$(mbedcrypto_OBJECTS) $(mbedtls_OBJECTS) $(mbedx509_OBJECTS))
$(call add_external_lib,sfml,$(sfml__network_OBJECTS) $(sfml__system_OBJECTS))
$(call add_external_lib,SOIL,$(SOIL_OBJECTS))
$(call add_external_lib,xxhash,$(xxhash_OBJECTS))
$(call add_external_lib,png,$(libpng_OBJECTS))
$(call add_external_lib,LZO,$(LZO_OBJECTS))
$(call add_external_lib,z,$(zlib_OBJECTS))
ifeq ($(HAVE_VULKAN),1)
   $(call add_external_lib,glslang,$(glslang_OBJECTS))
endif

#$(hidapi__hidraw_OBJECTS.o=$(OBJ_EXT)): INCLUDES += -I$(DEPS_DIR)/hidapi/hidapi

#$(glslang_OBJECTS)        : WARNINGS += -Wno-shadow -Wno-reorder -Wno-sign-compare -Wno-parentheses -Wno-unused-variable

libSOIL.a:      WARNINGS_gcc += -Wno-misleading-indentation
libglslang.a:   WARNINGS_gcc += -Wno-shadow -Wno-reorder -Wno-sign-compare -Wno-parentheses -Wno-unused-variable -Wno-unused-but-set-variable
libz.a:         WARNINGS_gcc += -Wno-implicit-function-declaration
libz.a:         WARNINGS_clang += -Wno-implicit-function-declaration
libpng.a:       WARNINGS_gcc += -Wno-shadow

libsfml.lib:    WARNINGS_msvc := -W0
libglslang.lib: WARNINGS_msvc := -W0

#$(info $(TARGET_DEPS))
#$(error end)

