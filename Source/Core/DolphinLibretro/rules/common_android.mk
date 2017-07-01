SOURCES_COMMON := $(COMMON_DIR)/CDUtils.cpp \
                  $(COMMON_DIR)/ColorUtil.cpp \
                  $(COMMON_DIR)/Config/Config.cpp \
                  $(COMMON_DIR)/Config/Layer.cpp \
                  $(COMMON_DIR)/Config/Section.cpp \
                  $(COMMON_DIR)/FileSearch.cpp \
                  $(COMMON_DIR)/FileUtil.cpp \
                  $(COMMON_DIR)/GekkoDisassembler.cpp \
                  $(COMMON_DIR)/GenericFPURoundMode.cpp \
                  $(COMMON_DIR)/Hash.cpp \
                  $(COMMON_DIR)/IniFile.cpp \
                  $(COMMON_DIR)/JitRegister.cpp \
                  $(COMMON_DIR)/MathUtil.cpp \
                  $(COMMON_DIR)/MemArena.cpp \
                  $(COMMON_DIR)/MemoryUtil.cpp \
                  $(COMMON_DIR)/Misc.cpp \
                  $(COMMON_DIR)/MsgHandler.cpp \
                  $(COMMON_DIR)/NandPaths.cpp \
                  $(COMMON_DIR)/Network.cpp \
                  $(COMMON_DIR)/PerformanceCounter.cpp \
                  $(COMMON_DIR)/PcapFile.cpp \
                  $(COMMON_DIR)/Profiler.cpp \
                  $(COMMON_DIR)/SettingsHandler.cpp \
                  $(COMMON_DIR)/SDCardUtil.cpp \
                  $(COMMON_DIR)/StringUtil.cpp \
                  $(COMMON_DIR)/SymbolDB.cpp \
                  $(COMMON_DIR)/SysConf.cpp \
                  $(COMMON_DIR)/Thread.cpp \
                  $(COMMON_DIR)/Timer.cpp \
                  $(COMMON_DIR)/Version.cpp \
                  $(COMMON_DIR)/x64ABI.cpp \
                  $(COMMON_DIR)/x64Emitter.cpp \
                  $(COMMON_DIR)/Crypto/AES.cpp \
                  $(COMMON_DIR)/Crypto/bn.cpp \
                  $(COMMON_DIR)/Crypto/ec.cpp \
                  $(COMMON_DIR)/Logging/LogManager.cpp \
                  $(COMMON_DIR)/Logging/ConsoleListenerLibretro.cpp \
                  $(COMMON_DIR)/GL/GLUtil.cpp \
                  $(COMMON_DIR)/GL/GLExtensions/GLExtensions.cpp

SOURCES_COMMON_ARM64 := $(COMMON_DIR)/ArmCPUDetect.cpp \
                        $(COMMON_DIR)/Arm64Emitter.cpp
