#include <cstdio>
#include <libretro.h>
#include <string>

#include "Common/CommonPaths.h"
#include "Common/Logging/LogManager.h"
#include "Core/BootManager.h"
#include "Core/ConfigManager.h"
#include "Core/Core.h"
#include "UICommon/UICommon.h"
#include "VideoCommon/AsyncRequests.h"
#include "VideoCommon/VideoConfig.h"

#include "DolphinLibretro/input.h"
#include "DolphinLibretro/main.h"
#include "DolphinLibretro/video.h"

using namespace Libretro;

static void enable_log(LogTypes::LOG_TYPE type, LogTypes::LOG_LEVELS level)
{
  LogManager::GetInstance()->AddListener(type, LogListener::CONSOLE_LISTENER);
  LogManager::GetInstance()->SetLogLevel(type, level);
  LogManager::GetInstance()->SetEnable(type, true);
}

bool retro_load_game(const struct retro_game_info* game)
{
  const char* save_dir = NULL;
  const char* system_dir = NULL;
  const char* core_assets_dir = NULL;
  std::string user_dir;

  environ_cb(RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY, &save_dir);
  environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &system_dir);
  environ_cb(RETRO_ENVIRONMENT_GET_CORE_ASSETS_DIRECTORY, &core_assets_dir);

  if (save_dir && *save_dir)
    user_dir = std::string(save_dir) + DIR_SEP "User";
  else if (system_dir && *system_dir)
    user_dir = std::string(system_dir) + DIR_SEP "dolphin-emu" DIR_SEP "User";

  if (system_dir && *system_dir)
    sys_dir = std::string(system_dir) + DIR_SEP "dolphin-emu" DIR_SEP "Sys";
  else if (core_assets_dir && *core_assets_dir)
    sys_dir = std::string(core_assets_dir) + DIR_SEP "dolphin-emu" DIR_SEP "Sys";
  else if (save_dir && *save_dir)
    sys_dir = std::string(save_dir) + DIR_SEP "Sys";
  else
    sys_dir = "dolphin-emu" DIR_SEP "Sys";

  UICommon::SetUserDirectory(user_dir);
  UICommon::CreateDirectories();
  UICommon::Init();

  enable_log(LogTypes::LIBRETRO, LogTypes::LDEBUG);
  enable_log(LogTypes::BOOT, LogTypes::LDEBUG);
  enable_log(LogTypes::VIDEO, LogTypes::LINFO);
  enable_log(LogTypes::HOST_GPU, LogTypes::LINFO);
  enable_log(LogTypes::COMMON, LogTypes::LWARNING);
  enable_log(LogTypes::MEMMAP, LogTypes::LWARNING);
  enable_log(LogTypes::DSPINTERFACE, LogTypes::LWARNING);
  enable_log(LogTypes::DSPHLE, LogTypes::LWARNING);
  enable_log(LogTypes::DSPLLE, LogTypes::LWARNING);
  enable_log(LogTypes::DSP_MAIL, LogTypes::LWARNING);

  INFO_LOG(LIBRETRO, "User Directory set to '%s'", user_dir.c_str());
  INFO_LOG(LIBRETRO, "System Directory set to '%s'", sys_dir.c_str());

  init_descriptors();
  check_variables();

  get_variable(&options.fastmem);
  get_variable(&options.pal60);
  get_variable(&options.progressive_scan);
  get_variable(&options.DSP_mode);

  /* disable throttling emulation to match GetTargetRefreshRate() */
  Core::SetIsThrottlerTempDisabled(true);

  /* START OF DOLPHIN.INI */

  /* GENERAL */

  /* LastFilename */

  SConfig::GetInstance().m_ShowLag        = false;
  SConfig::GetInstance().m_ShowFrameCount = false;

  /* ISOPaths */

  SConfig::GetInstance().m_RecursiveISOFolder = false;

#if 0
  /*
   *
   * NANDRootPath
   * DumpPath
   * WirelessMac
   * WiiSDCardPath
   */
#endif

  /* INTERFACE */

  SConfig::GetInstance().bConfirmStop     = true;
  SConfig::GetInstance().bUsePanicHandlers= true;
  SConfig::GetInstance().bOnScreenDisplayMessages = true;
  SConfig::GetInstance().bHideCursor      = false;
  SConfig::GetInstance().bAutoHideCursor  = false;

#if 0
  /*
   *
   * MainWindowPosX
   * MainWindowPosY
   * MainWindowWidth
   * MainWindowHeight
   * LanguageCode
   * ShowToolbar
   * ShowStatusBar
   * ShowLogWindow
   * ShowLogConfigWindow
   * ExtendedFPSInfo
   * ThemeName
   * PauseOnFocusLost
   * DisableTooltips
   */
#endif

  /* DISPLAY */
  SConfig::GetInstance().bRenderToMain       = true;
#if 0
  /*
   *
   * RenderWindowXPos
   * RenderWindowYPos
   * RenderWindowWidth
   * RenderWindowHeight
   * RenderWindowAutoSize
   */
#endif
  SConfig::GetInstance().bKeepWindowOnTop    = false;
  SConfig::GetInstance().bProgressive        = options.progressive_scan == "ON";
  SConfig::GetInstance().bPAL60              = options.pal60 == "ON";
  SConfig::GetInstance().bDisableScreenSaver = false;
  SConfig::GetInstance().bForceNTSCJ         = false;

  /* GAMELIST */

  /* CORE */

  SConfig::GetInstance().bHLE_BS2         = true;
  SConfig::GetInstance().iTimingVariance  = 40;
  SConfig::GetInstance().iCPUCore         = 1;
  SConfig::GetInstance().bFastmem         = options.fastmem == "ON";
  /* force dual thread mode. to make the current one the gpu thread. */
  SConfig::GetInstance().bCPUThread       = true;
  SConfig::GetInstance().bDSPHLE          = options.DSP_mode == "HLE";
  SConfig::GetInstance().bSyncGPUOnSkipIdleHack = true;
  SConfig::GetInstance().bSyncGPU         = true;
  SConfig::GetInstance().iSyncGpuMaxDistance = 200000;
  SConfig::GetInstance().iSyncGpuMinDistance = -200000;
  SConfig::GetInstance().fSyncGpuOverclock   = 1.00000000;
  SConfig::GetInstance().bFPRF               = false;
  SConfig::GetInstance().bAccurateNaNs       = false;

#if 0
  /* DefaultISO
   * DVDRoot
   * Apploader
   */
#endif

  SConfig::GetInstance().bEnableCheats    = false;
  SConfig::GetInstance().SelectedLanguage = 0;
  SConfig::GetInstance().bOverrideGCLanguage  = false;
  SConfig::GetInstance().bDPL2Decoder         = false;
  SConfig::GetInstance().iLatency             = 2;

#if 0
  /* MemCardAPath
   * MemCardBPath
   * AgpCartAPath
   * AgpCartBPath
   * SlotA
   * SlotB
   * SerialPort1
   * BBA_MAC
   * SIDevice0
   * AdapterRumble0
   * SimulateKonga0
   * SIDevice1
   * AdapterRumble1
   * SimulateKonga1
   * SIDevice2
   * AdapterRumble2
   * SimulateKonga2
   * SIDevice3
   * AdapterRumble3
   * SimulateKonga3
   */
#endif

  SConfig::GetInstance().m_WiiSDCard      = false;
  SConfig::GetInstance().m_WiiKeyboard    = false;
  SConfig::GetInstance().m_WiimoteContinuousScanning = false;
  SConfig::GetInstance().m_WiimoteEnableSpeaker      = false;

#if 0
  /*
   * RunCompareServer
   * RunCompareClient
  */
#endif

  SConfig::GetInstance().m_EmulationSpeed = 1.00;
  SConfig::GetInstance().m_FrameSkip      = 0;

#if 0
  /*
   *
   * Overclock
  */
#endif

  SConfig::GetInstance().m_OCEnable       = false;

#if 0
  /* Don't need to implement this:
   * GFXBackend
   */

  /* Need to implement this:
   * GPUDeterminismMode
   * PerfMapDir
   *
   */
#endif

  SConfig::GetInstance().bEnableCustomRTC = false;

#if 0
  /* Need to implement this:
   * CustomRTCValue
   */
#endif

  SConfig::GetInstance().m_audio_stretch    = false;
  SConfig::GetInstance().m_audio_stretch_max_latency    = 80;

  /* MOVIE */

  SConfig::GetInstance().m_PauseMovie     = false;

#if 0
  /* Don't need to implement this:
   * Author
   */
#endif

  SConfig::GetInstance().m_DumpFrames     = false;
  SConfig::GetInstance().m_DumpFramesSilent = false;
  SConfig::GetInstance().m_ShowInputDisplay = false;
  SConfig::GetInstance().m_ShowRTC          = false;

  /* DSP */

  SConfig::GetInstance().m_DSPEnableJIT   = options.DSP_mode == "LLE recompiler";
  SConfig::GetInstance().m_DumpAudio      = false;
  SConfig::GetInstance().m_DumpAudioSilent= false;
  SConfig::GetInstance().m_DumpUCode      = false;

#if 0
  /* Don't need Backend */
#endif

  SConfig::GetInstance().m_Volume         = 100;
  SConfig::GetInstance().m_DSPCaptureLog  = false;

  /* INPUT */

  SConfig::GetInstance().m_BackgroundInput = false;

  /* FIFOPLAYER */

  SConfig::GetInstance().bLoopFifoReplay   = true;

  /* ANALYTICS */

#if 0
  /*
   *
   * ID
   * Enabled
   * PermissionAsked
   */
#endif

  /* NETWORK */

  SConfig::GetInstance().m_SSLDumpRead   = false;
  SConfig::GetInstance().m_SSLDumpWrite  = false;
  SConfig::GetInstance().m_SSLVerifyCert = false;
  SConfig::GetInstance().m_SSLDumpRootCA = false;
  SConfig::GetInstance().m_SSLDumpPeerCert = false;
  SConfig::GetInstance().m_SSLVerifyCert = true;

  /* BLUETOOTHPASSTHROUGH */

#if 0
  /*
   * Enabled
   * VID
   * PID
   * LinkKeys
   *
   */
#endif

  /* SYSCONF */

  SConfig::GetInstance().m_sensor_bar_position = 1;
  SConfig::GetInstance().m_sensor_bar_sensitivity = 50331648;
  SConfig::GetInstance().m_speaker_volume      = 88;
  SConfig::GetInstance().m_wiimote_motor       = true;
  SConfig::GetInstance().m_wii_language        = 1;
  SConfig::GetInstance().m_wii_aspect_ratio    = 1;
  SConfig::GetInstance().m_wii_screensaver     = 0;

  /* USB PASSTHROUGH */

#if 0
  /* Don't need Devices */
#endif

  /* END OF DOLPHIN.INI */

  /* START OF GFX.INI */

  /* HARDWARE */

  g_ActiveConfig.bVSync               = false;

  /* SETTINGS */

  g_ActiveConfig.iAspectRatio         = 0;
  g_ActiveConfig.bCrop                = false;
  g_ActiveConfig.bWidescreenHack      = false;
  g_ActiveConfig.bUseXFB              = false;     /* bypass XFB */
  g_ActiveConfig.bUseRealXFB          = true;
  g_ActiveConfig.iSafeTextureCache_ColorSamples = 128;
  g_ActiveConfig.bShowFPS             = false;
  g_ActiveConfig.bShowNetPlayPing     = false;
  g_ActiveConfig.bShowNetPlayMessages = false;
  g_ActiveConfig.bLogRenderTimeToFile = false;
  g_ActiveConfig.bOverlayStats        = false;
  g_ActiveConfig.bOverlayProjStats    = false;
  g_ActiveConfig.bDumpTextures        = false;
  g_ActiveConfig.bHiresTextures       = false;
  g_ActiveConfig.bConvertHiresTextures= false;
  g_ActiveConfig.bCacheHiresTextures  = false;
  g_ActiveConfig.bDumpEFBTarget       = false;
  g_ActiveConfig.bDumpFramesAsImages  = false;
  g_ActiveConfig.bFreeLook            = false;
  g_ActiveConfig.bUseFFV1             = false;
  g_ActiveConfig.bInternalResolutionFrameDumps = false;
  g_ActiveConfig.bEnablePixelLighting = false;
  g_ActiveConfig.bFastDepthCalc       = true;

  /* TODO : MSAA */
#if 0
  MSAA
  SSAA
#endif

  g_ActiveConfig.iEFBScale            = 2;
  g_ActiveConfig.bTexFmtOverlayEnable = false;
  g_ActiveConfig.bTexFmtOverlayCenter = false;
  g_ActiveConfig.bWireFrame           = false;

  g_ActiveConfig.bDisableFog          = false;
  g_ActiveConfig.bBorderlessFullscreen= false;
  g_ActiveConfig.bEnableValidationLayer= false;
  g_ActiveConfig.bBackendMultithreading= true;
  g_ActiveConfig.iCommandBufferExecuteInterval = 100;

  g_ActiveConfig.bZComploc             = true;
  g_ActiveConfig.bZFreeze              = true;

  g_ActiveConfig.bDumpObjects          = false;
  g_ActiveConfig.bDumpTevStages        = false;
  g_ActiveConfig.bDumpTevTextureFetches= false;

  g_ActiveConfig.drawStart             = 0;
  g_ActiveConfig.drawEnd               = 100000;

  /* ENHANCEMENTS */

  g_ActiveConfig.bForceFiltering       = true;
  g_ActiveConfig.iMaxAnisotropy        = 0;
  g_ActiveConfig.bForceTrueColor       = false;

  /* STEREOSCOPY */

  g_ActiveConfig.iStereoMode           = 0;
  g_ActiveConfig.iStereoDepth          = 20;
  g_ActiveConfig.iStereoConvergencePercentage = 100;
  g_ActiveConfig.bStereoSwapEyes       = false;

  /* HACKS */

  g_ActiveConfig.bEFBAccessEnable      = false;
  g_ActiveConfig.bBBoxEnable           = false;
  g_ActiveConfig.bForceProgressive     = true;

#if 0
  EFBToTextureEnable   = true;
  EFBScaledCopy        = true;
#endif

  g_ActiveConfig.bEFBEmulateFormatChanges = false;

  /* END OF GFX.INI */

  init_video();
  NOTICE_LOG(VIDEO, "Using GFX backend: %s", SConfig::GetInstance().m_strVideoBackend.c_str());

  if (!BootManager::BootCore(game->path))
  {
    ERROR_LOG(LIBRETRO, "Could not boot %s\n", game->path);
    return 1;
  }

  return true;
}

bool retro_load_game_special(unsigned game_type, const struct retro_game_info* info,
                             size_t num_info)
{
  return false;
}
void retro_unload_game(void)
{
  Core::Stop();
  Core::Shutdown();

  AsyncRequests::GetInstance()->SetEnable(false);
  AsyncRequests::GetInstance()->SetPassthrough(true);
  Core::ShutdownEmuThread();

  UICommon::Shutdown();
}
