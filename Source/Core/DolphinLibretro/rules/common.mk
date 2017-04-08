COMMON_DIR := $(BASE_DIR)/Common
COMMON_OBJECTS :=
#COMMON_OBJECTS += $(COMMON_DIR)/Analytics.o
COMMON_OBJECTS += $(COMMON_DIR)/CDUtils.o
COMMON_OBJECTS += $(COMMON_DIR)/ColorUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/Config/Config.o
COMMON_OBJECTS += $(COMMON_DIR)/Config/Layer.o
COMMON_OBJECTS += $(COMMON_DIR)/Config/Section.o
COMMON_OBJECTS += $(COMMON_DIR)/ENetUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/FileSearch.o
COMMON_OBJECTS += $(COMMON_DIR)/FileUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/GekkoDisassembler.o
COMMON_OBJECTS += $(COMMON_DIR)/Hash.o
COMMON_OBJECTS += $(COMMON_DIR)/IniFile.o
COMMON_OBJECTS += $(COMMON_DIR)/JitRegister.o
COMMON_OBJECTS += $(COMMON_DIR)/MathUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/MemArena.o
COMMON_OBJECTS += $(COMMON_DIR)/MemoryUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/Misc.o
COMMON_OBJECTS += $(COMMON_DIR)/MsgHandler.o
COMMON_OBJECTS += $(COMMON_DIR)/NandPaths.o
COMMON_OBJECTS += $(COMMON_DIR)/Network.o
COMMON_OBJECTS += $(COMMON_DIR)/PcapFile.o
COMMON_OBJECTS += $(COMMON_DIR)/Profiler.o
COMMON_OBJECTS += $(COMMON_DIR)/SettingsHandler.o
COMMON_OBJECTS += $(COMMON_DIR)/SDCardUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/StringUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/SymbolDB.o
COMMON_OBJECTS += $(COMMON_DIR)/SysConf.o
COMMON_OBJECTS += $(COMMON_DIR)/Thread.o
COMMON_OBJECTS += $(COMMON_DIR)/Timer.o
COMMON_OBJECTS += $(COMMON_DIR)/TraversalClient.o
COMMON_OBJECTS += $(COMMON_DIR)/Version.o
COMMON_OBJECTS += $(COMMON_DIR)/x64ABI.o
COMMON_OBJECTS += $(COMMON_DIR)/x64Emitter.o
COMMON_OBJECTS += $(COMMON_DIR)/MD5.o
COMMON_OBJECTS += $(COMMON_DIR)/Crypto/AES.o
COMMON_OBJECTS += $(COMMON_DIR)/Crypto/bn.o
COMMON_OBJECTS += $(COMMON_DIR)/Crypto/ec.o
COMMON_OBJECTS += $(COMMON_DIR)/Logging/LogManager.o
COMMON_OBJECTS += $(COMMON_DIR)/x64FPURoundMode.o
COMMON_OBJECTS += $(COMMON_DIR)/x64CPUDetect.o
COMMON_OBJECTS += $(COMMON_DIR)/GL/GLUtil.o
COMMON_OBJECTS += $(COMMON_DIR)/GL/GLExtensions/GLExtensions.o

ifeq ($(platform),win)
COMMON_OBJECTS += $(COMMON_DIR)/Logging/ConsoleListenerWin.o
else
COMMON_OBJECTS += $(COMMON_DIR)/Logging/ConsoleListenerNix.o
COMMON_OBJECTS += $(COMMON_DIR)/PerformanceCounter.o
endif

# disable dlsym() reference in GLExtensions.cpp
$(COMMON_DIR)/GL/GLExtensions/GLExtensions.o : DEFINES += -U__linux__ -U__APPLE__

#override:
#COMMON_OBJECTS += $(COMMON_DIR)/GL/GLInterface/GLInterface.o

$(call add_lib,common,$(COMMON_OBJECTS))

DISTRIBUTOR          = Libretro
DOLPHIN_WC_BRANCH    = $(shell git$(EXE_EXT) rev-parse --abbrev-ref HEAD)
DOLPHIN_WC_REVISION  = $(shell git$(EXE_EXT) rev-parse HEAD)
DOLPHIN_WC_DESCRIBE  = $(shell git$(EXE_EXT) describe --always --long --dirty)
DOLPHIN_WC_IS_STABLE = $(if $(filter-out master stable,$(DOLPHIN_WC_BRANCH)),0,1)

$(COMMON_DIR)/scmrev.h:
	@echo scmrev.h
	$Qecho $(call format_echo,#define SCM_REV_STR "$(DOLPHIN_WC_REVISION)") > $@
	$Qecho $(call format_echo,#define SCM_DESC_STR "$(DOLPHIN_WC_DESCRIBE)") >> $@
	$Qecho $(call format_echo,#define SCM_BRANCH_STR "$(DOLPHIN_WC_BRANCH)") >> $@
	$Qecho $(call format_echo,#define SCM_IS_MASTER $(DOLPHIN_WC_IS_STABLE)) >> $@
	$Qecho $(call format_echo,#define SCM_DISTRIBUTOR_STR "$(DISTRIBUTOR)") >> $@

clean_scmrev:
	$(call delete,$(COMMON_DIR)/scmrev.h)

#clean: clean_scmrev

clean_deps:
	@echo scmrev.h

$(COMMON_DIR)/Version.cpp: $(COMMON_DIR)/scmrev.h

#.PHONY: $(COMMON_DIR)/scmrev.h


