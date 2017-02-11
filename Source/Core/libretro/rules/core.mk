CORE_DIR := $(BASE_DIR)/Core
CORE_OBJECTS :=
CORE_OBJECTS += $(CORE_DIR)/ActionReplay.o
#CORE_OBJECTS += $(CORE_DIR)/Analytics.o
CORE_OBJECTS += $(CORE_DIR)/ARDecrypt.o
CORE_OBJECTS += $(CORE_DIR)/BootManager.o
CORE_OBJECTS += $(CORE_DIR)/ConfigManager.o
CORE_OBJECTS += $(CORE_DIR)/Core.o
CORE_OBJECTS += $(CORE_DIR)/CoreTiming.o
CORE_OBJECTS += $(CORE_DIR)/DSPEmulator.o
CORE_OBJECTS += $(CORE_DIR)/ec_wii.o
CORE_OBJECTS += $(CORE_DIR)/GeckoCodeConfig.o
CORE_OBJECTS += $(CORE_DIR)/GeckoCode.o
CORE_OBJECTS += $(CORE_DIR)/HotkeyManager.o
CORE_OBJECTS += $(CORE_DIR)/MemTools.o
CORE_OBJECTS += $(CORE_DIR)/Movie.o
#CORE_OBJECTS += $(CORE_DIR)/NetPlayClient.o
#CORE_OBJECTS += $(CORE_DIR)/NetPlayServer.o
CORE_OBJECTS += $(CORE_DIR)/PatchEngine.o
CORE_OBJECTS += $(CORE_DIR)/State.o
CORE_OBJECTS += $(CORE_DIR)/WiiRoot.o
CORE_OBJECTS += $(CORE_DIR)/Boot/Boot_BS2Emu.o
CORE_OBJECTS += $(CORE_DIR)/Boot/Boot.o
CORE_OBJECTS += $(CORE_DIR)/Boot/Boot_DOL.o
CORE_OBJECTS += $(CORE_DIR)/Boot/Boot_ELF.o
CORE_OBJECTS += $(CORE_DIR)/Boot/Boot_WiiWAD.o
CORE_OBJECTS += $(CORE_DIR)/Boot/ElfReader.o
CORE_OBJECTS += $(CORE_DIR)/Debugger/Debugger_SymbolMap.o
CORE_OBJECTS += $(CORE_DIR)/Debugger/Dump.o
CORE_OBJECTS += $(CORE_DIR)/Debugger/PPCDebugInterface.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPAssembler.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPDisassembler.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPAccelerator.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPCaptureLogger.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPHWInterface.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPMemoryMap.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPStacks.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPAnalyzer.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPCodeUtil.o
CORE_OBJECTS += $(CORE_DIR)/DSP/LabelMap.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPCore.o
CORE_OBJECTS += $(CORE_DIR)/DSP/DSPTables.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPIntArithmetic.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPIntBranch.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPIntCCUtil.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPInterpreter.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPIntExtOps.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPIntLoadStore.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPIntMisc.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Interpreter/DSPIntMultiplier.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPEmitter.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitRegCache.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitExtOps.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitBranch.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitCCUtil.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitArithmetic.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitLoadStore.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitMultiplier.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitUtil.o
CORE_OBJECTS += $(CORE_DIR)/DSP/Jit/DSPJitMisc.o
CORE_OBJECTS += $(CORE_DIR)/FifoPlayer/FifoAnalyzer.o
CORE_OBJECTS += $(CORE_DIR)/FifoPlayer/FifoDataFile.o
CORE_OBJECTS += $(CORE_DIR)/FifoPlayer/FifoPlaybackAnalyzer.o
CORE_OBJECTS += $(CORE_DIR)/FifoPlayer/FifoPlayer.o
CORE_OBJECTS += $(CORE_DIR)/FifoPlayer/FifoRecordAnalyzer.o
CORE_OBJECTS += $(CORE_DIR)/FifoPlayer/FifoRecorder.o
CORE_OBJECTS += $(CORE_DIR)/HLE/HLE.o
CORE_OBJECTS += $(CORE_DIR)/HLE/HLE_Misc.o
CORE_OBJECTS += $(CORE_DIR)/HLE/HLE_OS.o
CORE_OBJECTS += $(CORE_DIR)/HW/AudioInterface.o
CORE_OBJECTS += $(CORE_DIR)/HW/CPU.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSP.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/AX.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/AXWii.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/CARD.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/GBA.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/INIT.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/ROM.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/UCodes.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/UCodes/Zelda.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/MailHandler.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPHLE/DSPHLE.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPLLE/DSPDebugInterface.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPLLE/DSPHost.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPLLE/DSPSymbols.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPLLE/DSPLLEGlobals.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPLLE/DSPLLE.o
CORE_OBJECTS += $(CORE_DIR)/HW/DSPLLE/DSPLLETools.o
CORE_OBJECTS += $(CORE_DIR)/HW/DVDInterface.o
CORE_OBJECTS += $(CORE_DIR)/HW/DVDThread.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_Channel.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_Device.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceAD16.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceAGP.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceDummy.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceEthernet.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceGecko.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceIPL.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceMemoryCard.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/EXI_DeviceMic.o
CORE_OBJECTS += $(CORE_DIR)/HW/GCKeyboard.o
CORE_OBJECTS += $(CORE_DIR)/HW/GCKeyboardEmu.o
CORE_OBJECTS += $(CORE_DIR)/HW/GCMemcard.o
CORE_OBJECTS += $(CORE_DIR)/HW/GCMemcardDirectory.o
CORE_OBJECTS += $(CORE_DIR)/HW/GCMemcardRaw.o
#overrides:
#CORE_OBJECTS += $(CORE_DIR)/HW/GCPad.o
#CORE_OBJECTS += $(CORE_DIR)/HW/GCPadEmu.o
CORE_OBJECTS += $(CORE_DIR)/HW/GPFifo.o
CORE_OBJECTS += $(CORE_DIR)/HW/HW.o
CORE_OBJECTS += $(CORE_DIR)/HW/Memmap.o
CORE_OBJECTS += $(CORE_DIR)/HW/MemoryInterface.o
CORE_OBJECTS += $(CORE_DIR)/HW/MMIO.o
CORE_OBJECTS += $(CORE_DIR)/HW/ProcessorInterface.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_Device.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_DeviceDanceMat.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_DeviceGBA.o
#CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_DeviceGCAdapter.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_DeviceGCController.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_DeviceGCSteeringWheel.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_DeviceKeyboard.o
CORE_OBJECTS += $(CORE_DIR)/HW/SI/SI_DeviceNull.o
CORE_OBJECTS += $(CORE_DIR)/HW/Sram.o
CORE_OBJECTS += $(CORE_DIR)/HW/StreamADPCM.o
CORE_OBJECTS += $(CORE_DIR)/HW/SystemTimers.o
CORE_OBJECTS += $(CORE_DIR)/HW/VideoInterface.o
CORE_OBJECTS += $(CORE_DIR)/HW/WII_IPC.o
CORE_OBJECTS += $(CORE_DIR)/HW/Wiimote.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/WiimoteEmu.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Attachment/Classic.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Attachment/Attachment.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Attachment/Nunchuk.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Attachment/Drums.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Attachment/Guitar.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Attachment/Turntable.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/EmuSubroutines.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Encryption.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteEmu/Speaker.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteReal/WiimoteReal.o
CORE_OBJECTS += $(CORE_DIR)/HW/WiiSaveCrypted.o
CORE_OBJECTS += $(CORE_DIR)/IOS/Device.o
CORE_OBJECTS += $(CORE_DIR)/IOS/DeviceStub.o
CORE_OBJECTS += $(CORE_DIR)/IOS/IPC.o
CORE_OBJECTS += $(CORE_DIR)/IOS/DI/DI.o
CORE_OBJECTS += $(CORE_DIR)/IOS/ES/ES.o
CORE_OBJECTS += $(CORE_DIR)/IOS/ES/Formats.o
CORE_OBJECTS += $(CORE_DIR)/IOS/FS/FileIO.o
CORE_OBJECTS += $(CORE_DIR)/IOS/FS/FS.o
CORE_OBJECTS += $(CORE_DIR)/IOS/Network/Config.o
CORE_OBJECTS += $(CORE_DIR)/IOS/Network/ICMPLin.o
CORE_OBJECTS += $(CORE_DIR)/IOS/Network/NWC24Config.o
CORE_OBJECTS += $(CORE_DIR)/IOS/Network/Socket.o
CORE_OBJECTS += $(CORE_DIR)/IOS/Network/Net.o
CORE_OBJECTS += $(CORE_DIR)/IOS/Network/SSL.o
CORE_OBJECTS += $(CORE_DIR)/IOS/SDIO/SDIOSlot0.o
CORE_OBJECTS += $(CORE_DIR)/IOS/STM/STM.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/Common.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/USBV0.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/USB_KBD.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/USB_VEN.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/Bluetooth/BTBase.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/Bluetooth/BTEmu.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/Bluetooth/BTStub.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/Bluetooth/WiimoteDevice.o
CORE_OBJECTS += $(CORE_DIR)/IOS/USB/Bluetooth/WiimoteHIDAttr.o
CORE_OBJECTS += $(CORE_DIR)/IOS/WFS/WFSSRV.o
CORE_OBJECTS += $(CORE_DIR)/IOS/WFS/WFSI.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/BreakPoints.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/MMU.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/PowerPC.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/PPCAnalyst.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/PPCCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/PPCSymbolDB.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/PPCTables.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Profiler.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/SignatureDB/CSVSignatureDB.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/SignatureDB/DSYSignatureDB.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/SignatureDB/SignatureDB.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitInterface.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/CachedInterpreter/CachedInterpreter.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/CachedInterpreter/InterpreterBlockCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_Branch.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_FloatingPoint.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_Integer.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_LoadStore.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_LoadStorePaired.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_Paired.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_SystemRegisters.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Interpreter/Interpreter_Tables.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitCommon/JitAsmCommon.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitCommon/JitBase.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitCommon/JitCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/IR.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_Branch.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_LoadStore.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_SystemRegisters.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_LoadStoreFloating.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_LoadStorePaired.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_Paired.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_FloatingPoint.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/JitILCommon/JitILBase_Integer.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64IL/IR_X86.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64IL/JitIL.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64IL/JitIL_Tables.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/FPURegCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/GPRRegCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit64_Tables.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/JitAsm.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_Branch.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_FloatingPoint.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_Integer.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_LoadStore.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_LoadStoreFloating.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_LoadStorePaired.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_Paired.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/JitRegCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64/Jit_SystemRegisters.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64Common/BlockCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64Common/EmuCodeBlock.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64Common/FarCodeCache.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64Common/Jit64AsmCommon.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64Common/Jit64Base.o
CORE_OBJECTS += $(CORE_DIR)/PowerPC/Jit64Common/TrampolineCache.o
#CORE_OBJECTS += $(CORE_DIR)/IOS/USB/USB_HIDv4.o
#CORE_OBJECTS += $(CORE_DIR)/IOS/USB/Bluetooth/BTReal.o
CORE_OBJECTS += $(CORE_DIR)/HW/EXI/BBA-TAP/TAP_Unix.o
#CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteReal/IOLinux.o
#CORE_OBJECTS += $(CORE_DIR)/HW/WiimoteReal/IOhidapi.o
#CORE_OBJECTS += $(CORE_DIR)/MemoryWatcher.o


OBJECTS += $(CORE_OBJECTS)
