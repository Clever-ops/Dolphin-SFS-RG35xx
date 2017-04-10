#include <cstdio>
#include <libco.h>
#include <libretro.h>
#include <string>

#include "Common/Logging/LogManager.h"
#include "Core/BootManager.h"
#include "Core/ConfigManager.h"
#include "Core/Core.h"
#include "UICommon/UICommon.h"
#include "VideoCommon/VideoConfig.h"

#include "common.h"

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
  Libretro::init_descriptors();
  Libretro::check_variables();

  UICommon::SetUserDirectory("");  // Auto-detect user folder
  UICommon::Init();

#if 0
   /* enable VIDEO debug logging to stdout */
   LogManager::GetInstance()->AddListener(LogTypes::VIDEO, LogListener::CONSOLE_LISTENER);
   LogManager::GetInstance()->SetLogLevel(LogTypes::VIDEO, LogTypes::LDEBUG);
   LogManager::GetInstance()->SetEnable(LogTypes::VIDEO, true);
#endif

#ifdef _DEBUG
  /* Fastmem installs a custom exception handler which
   * would prevent a debugger from working correctly */
  SConfig::GetInstance().bFastmem = false;
#else
  SConfig::GetInstance().bFastmem = true;
#endif

  /* force dual thread mode. to make the current one the gpu thread. */
  SConfig::GetInstance().bCPUThread = true;

  /* disable throtteling emulation to match GetTargetRefreshRate() */
  Core::SetIsThrottlerTempDisabled(true);

  /* bypass XFB */
  g_ActiveConfig.bUseXFB = false;

  Libretro::init_video();
  NOTICE_LOG(VIDEO, "Using GFX backend: %s", SConfig::GetInstance().m_strVideoBackend.c_str());

  Libretro::core_stop_request = false;

  if (!BootManager::BootCore(game->path))
  {
    fprintf(stderr, "Could not boot %s\n", game->path);
    return 1;
  }
  Libretro::mainthread = co_active();

  /* 4MB stack is most likely overkill
   * todo: determine actual stack usage */

  Libretro::emuthread = co_create(0x400000, emuthread_entry);

  return true;
}

bool retro_load_game_special(unsigned game_type, const struct retro_game_info* info,
                             size_t num_info)
{
  return false;
}
void retro_unload_game(void)
{
  Libretro::core_stop_request = true;
  co_switch(Libretro::emuthread);
  co_delete(Libretro::emuthread);

  UICommon::Shutdown();
  Libretro::emuthread = NULL;
}
