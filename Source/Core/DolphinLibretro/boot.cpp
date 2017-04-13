#include <cstdio>
#include <libco.h>
#include <libretro.h>
#include <string>

#include "Common/CommonPaths.h"
#include "Common/Logging/LogManager.h"
#include "Core/BootManager.h"
#include "Core/ConfigManager.h"
#include "Core/Core.h"
#include "UICommon/UICommon.h"
#include "VideoCommon/VideoConfig.h"

#include "DolphinLibretro/input.h"
#include "DolphinLibretro/main.h"
#include "DolphinLibretro/video.h"

using namespace Libretro;

namespace Core
{
void EmuThread();
}

void emuthread_entry(void);
void emuthread_entry(void)
{
  Core::EmuThread();
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
    user_dir = std::string(save_dir) + DIR_SEP "User" DIR_SEP;
  else if (system_dir && *system_dir)
    user_dir = std::string(system_dir) + DIR_SEP "dolphin-emu" DIR_SEP "User" DIR_SEP;

  if (system_dir && *system_dir)
    sys_dir = std::string(system_dir) + DIR_SEP "dolphin-emu" DIR_SEP "Sys";
  else if (core_assets_dir && *core_assets_dir)
    sys_dir = std::string(core_assets_dir) + DIR_SEP "dolphin-emu" DIR_SEP "Sys";
  else if (save_dir && *save_dir)
    sys_dir = std::string(save_dir) + DIR_SEP "Sys";
  else
    sys_dir = "dolphin-emu" DIR_SEP "Sys";

  UICommon::SetUserDirectory(user_dir);
  UICommon::Init();

  LogManager::GetInstance()->AddListener(LogTypes::LIBRETRO, LogListener::CONSOLE_LISTENER);
  LogManager::GetInstance()->SetLogLevel(LogTypes::LIBRETRO, LogTypes::LDEBUG);
  LogManager::GetInstance()->SetEnable(LogTypes::LIBRETRO, true);
#if 0
   /* enable VIDEO debug logging to stdout */
  LogManager::GetInstance()->AddListener(LogTypes::VIDEO, LogListener::CONSOLE_LISTENER);
  LogManager::GetInstance()->SetLogLevel(LogTypes::VIDEO, LogTypes::LDEBUG);
  LogManager::GetInstance()->SetEnable(LogTypes::VIDEO, true);
#endif
  INFO_LOG(LIBRETRO, "User Directory set to '%s'", user_dir.c_str());
  INFO_LOG(LIBRETRO, "System Directory set to '%s'", sys_dir.c_str());

  init_descriptors();
  check_variables();

  get_variable(&options.fastmem);
  get_variable(&options.pal60);
  get_variable(&options.progressive_scan);

  SConfig::GetInstance().bFastmem     = options.fastmem.value == std::string("ON");
  SConfig::GetInstance().bProgressive = options.progressive_scan.value == std::string("ON");
  SConfig::GetInstance().bPAL60       = options.pal60.value == std::string("ON");

  /* force dual thread mode. to make the current one the gpu thread. */
  SConfig::GetInstance().bCPUThread   = true;

  /* disable throttling emulation to match GetTargetRefreshRate() */
  Core::SetIsThrottlerTempDisabled(true);

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

  core_stop_request = false;

  if (!BootManager::BootCore(game->path))
  {
    fprintf(stderr, "Could not boot %s\n", game->path);
    return 1;
  }
  mainthread = co_active();

  /* 4MB stack is most likely overkill
   * todo: determine actual stack usage */

  emuthread = co_create(0x400000, emuthread_entry);

  return true;
}

bool retro_load_game_special(unsigned game_type, const struct retro_game_info* info,
                             size_t num_info)
{
  return false;
}
void retro_unload_game(void)
{
  core_stop_request = true;
  co_switch(emuthread);
  co_delete(emuthread);

  UICommon::Shutdown();
  emuthread = NULL;
}
