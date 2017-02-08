
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <string>
#include <thread>
#include <libco.h>

#include "libretro.h"

#include "UICommon/UICommon.h"
#include "Common/Event.h"
#include "Common/Logging/LogManager.h"
#include "Core/Core.h"
#include "Core/Host.h"
#include "Core/BootManager.h"
#include "Core/ConfigManager.h"
#include "Core/HW/VideoInterface.h"
#include "VideoCommon/VideoConfig.h"
#include "VideoBackends/OGL/FramebufferManager.h"
//#define GL_GLEXT_PROTOTYPES
//#include <GL/gl.h>
//#include <GL/glext.h>
//#include "Common/GL/GLExtensions/GLExtensions.h"

//#include "Common/GL/GLInterfaceBase.h"
//#include "Common/GL/GLUtil.h"

cothread_t emuthread;
cothread_t mainthread;

bool core_stop_request = false;

retro_log_printf_t log_cb = NULL;
retro_video_refresh_t video_cb = NULL;
static retro_input_poll_t poll_cb = NULL;
retro_input_state_t input_cb = NULL;
retro_audio_sample_batch_t audio_batch_cb = NULL;
retro_environment_t environ_cb = NULL;
struct retro_perf_callback perf_cb;

struct retro_rumble_interface rumble;
struct retro_hw_render_callback hw_render;
#ifdef PERF_TEST
#define RETRO_PERFORMANCE_INIT(name) \
   retro_perf_tick_t current_ticks;\
   static struct retro_perf_counter name = {#name};\
   if (!name.registered) perf_cb.perf_register(&(name));\
   current_ticks = name.total

#define RETRO_PERFORMANCE_START(name) perf_cb.perf_start(&(name))
#define RETRO_PERFORMANCE_STOP(name) \
   perf_cb.perf_stop(&(name));\
   current_ticks = name.total - current_ticks;
#else
#define RETRO_PERFORMANCE_INIT(name)
#define RETRO_PERFORMANCE_START(name)
#define RETRO_PERFORMANCE_STOP(name)
#endif


void retro_set_environment(retro_environment_t cb)
{
   struct retro_log_callback log;

   environ_cb = cb;

   if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log))
      log_cb = log.log;
   else
      log_cb = NULL;

   environ_cb(RETRO_ENVIRONMENT_GET_PERF_INTERFACE, &perf_cb);
}

void retro_init(void)
{
   struct retro_log_callback log;
   enum retro_pixel_format xrgb888;
   static const struct retro_variable vars[] =
   {
      { "gbemu_dummy", "dummy; disabled|enabled" },
      { NULL, NULL },
   };

   if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log))
      log_cb = log.log;
   else
      log_cb = NULL;

   xrgb888 = RETRO_PIXEL_FORMAT_XRGB8888;
   environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &xrgb888);
   environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, (void *)vars);
   environ_cb(RETRO_ENVIRONMENT_GET_RUMBLE_INTERFACE, &rumble);
}

void retro_deinit(void)
{
#ifdef PERF_TEST
   perf_cb.perf_log();
#endif
}

static void check_variables(void)
{
   struct retro_variable var;

   var.key = "gbemu_dummy";
   var.value = NULL;

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      (void)strcmp(var.value, "enabled");
}


void retro_get_system_info(struct retro_system_info *info)
{
   info->need_fullpath = true;
   info->valid_extensions = "elf|dol|gcm|iso|tgc|wbfs|ciso|gcz|wad";
   info->library_version = "v0.01";
   info->library_name = "dolphin-emu";
   info->block_extract = true;
}

void retro_get_system_av_info(struct retro_system_av_info *info)
{
   info->geometry.base_width = 640;
   info->geometry.base_height = 448;
   info->geometry.max_width = 2048; // 640 * max scale
   info->geometry.max_height = 2048; // 528 * max scale
//   info->geometry.max_width = 640; // 640 * max scale
//   info->geometry.max_height = 528; // 528 * max scale
   info->geometry.aspect_ratio = 4.0 / 3.0;
//   info->timing.fps = 60.0 / 1.001;
   info->timing.fps = 60.0;
//   info->timing.fps = VideoInterface::GetTargetRefreshRate();
   info->timing.sample_rate = 32000;
}


static void init_descriptors(void)
{
   struct retro_input_descriptor desc[] =
   {
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "Left" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "Up" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "Down" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "Right" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "B" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "A" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "X" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "Y" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "L" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "R" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,    "Z" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },

      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_X, "Control Stick X" },
      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_Y, "Control Stick Y" },
      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X, "C Buttons X" },
      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y, "C Buttons Y" },
      { 0 },
   };

   environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);
}

void retro_reset(void)
{}
void Host_NotifyMapLoaded()
{
}
void Host_RefreshDSPDebuggerWindow()
{
}

void Host_Message(int Id)
{
   printf("message id: %i\n", Id);
}

void *Host_GetRenderHandle()
{
   return nullptr;
}

void Host_UpdateTitle(const std::string &title)
{
   printf("title : %s\n", title.c_str());
//   DEBUG_LINE();
}

void Host_UpdateDisasmDialog()
{
}

//static Common::Event updateMainFrameEvent;
void Host_UpdateMainFrame()
{
//   updateMainFrameEvent.Set();
}

void Host_RequestRenderWindowSize(int width, int height)
{
//   DEBUG_LINE();
}

void Host_SetStartupDebuggingParameters()
{
   SConfig &StartUp = SConfig::GetInstance();
   StartUp.bEnableDebugging = false;
   StartUp.bBootToPause = false;
}

bool Host_UIHasFocus()
{
   return false;
}

bool Host_RendererHasFocus()
{
   /* called on input poll */
   return true;
}

bool Host_RendererIsFullscreen()
{
   return false;
}

void Host_ConnectWiimote(int wm_idx, bool connect)
{
   //  if (Core::IsRunning() && SConfig::GetInstance().bWii &&
   //      !SConfig::GetInstance().m_bt_passthrough_enabled)
   //  {
   //    Core::QueueHostJob([=] {
   //      bool was_unpaused = Core::PauseAndLock(true);
   //      IOS::HLE::GetUsbPointer()->AccessWiiMote(wm_idx | 0x100)->Activate(connect);
   //      Host_UpdateMainFrame();
   //      Core::PauseAndLock(false, was_unpaused);
   //    });
   //  }
}

void Host_SetWiiMoteConnectionState(int _State)
{
}

void Host_ShowVideoConfig(void *, const std::string &)
{
}

void Host_YieldToUI()
{
}

void retro_run(void)
{
   bool updated = false;
   static int frames = 0;

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
      check_variables();

   poll_cb();

//   if(hw_render.context_type != RETRO_HW_CONTEXT_NONE)
//   {
//      OGL::FramebufferManager::SetXFBFramebuffer(hw_render.get_current_framebuffer());
//      if(!OGL::FramebufferManager::get_efbFramebuffer().empty())
//         OGL::FramebufferManager::get_efbFramebuffer()[0] = hw_render.get_current_framebuffer();
//   }

   RETRO_PERFORMANCE_INIT(dolphin_main_func);
   RETRO_PERFORMANCE_START(dolphin_main_func);

   co_switch(emuthread);


   RETRO_PERFORMANCE_STOP(dolphin_main_func);

   frames++;
}

namespace Core
{
void EmuThread();
}

void emuthread_entry(void);
void emuthread_entry(void)
{
   Core::EmuThread();
}

static void context_reset(void)
{
}

bool retro_load_game(const struct retro_game_info *game)
{
   init_descriptors();
   check_variables();

   printf("game info\n");
   printf("path : %s\n", game->path);
   printf("size : %lu\n", game->size);
   fflush(stdout);

   UICommon::SetUserDirectory("");  // Auto-detect user folder
   UICommon::Init();

#if 0
   /* enable VIDEO debug logging to stdout */
   LogManager::GetInstance()->AddListener(LogTypes::VIDEO, LogListener::CONSOLE_LISTENER);
   LogManager::GetInstance()->SetLogLevel(LogTypes::VIDEO, LogTypes::LDEBUG);
   LogManager::GetInstance()->SetEnable(LogTypes::VIDEO, true);
#endif

#ifdef DEBUG
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


//   SConfig::m_strVideoBackend = "Software Renderer";

   if(SConfig::GetInstance().m_strVideoBackend == "OGL")
   {
      printf("SConfig::GetInstance().m_strVideoBackend == \"OGL\"\n");
      fflush(stdout);
#ifdef CORE
      hw_render.context_type = RETRO_HW_CONTEXT_OPENGL_CORE;
      hw_render.version_major = 3;
      hw_render.version_minor = 1;
#else
      hw_render.context_type = RETRO_HW_CONTEXT_OPENGL;
#endif
      hw_render.context_reset = context_reset;
      hw_render.depth = true;
      hw_render.stencil = true;
      hw_render.bottom_left_origin = true;
      hw_render.cache_context = true;
      environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &hw_render);
   }
   else
   {
      hw_render.context_type = RETRO_HW_CONTEXT_NONE;
      printf("SConfig::GetInstance().m_strVideoBackend != \"OGL\"\n");
      fflush(stdout);
   }

   core_stop_request = false;

   if (!BootManager::BootCore(game->path))
   {
      fprintf(stderr, "Could not boot %s\n", game->path);
      return 1;
   }
   mainthread = co_active();
   emuthread = co_create(0x400000, emuthread_entry);

   return true;
}

bool retro_load_game_special(unsigned game_type,
                             const struct retro_game_info *info, size_t num_info)
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

unsigned retro_get_region(void)
{
   return RETRO_REGION_NTSC;
}

void retro_set_video_refresh(retro_video_refresh_t cb)
{
   video_cb = cb;
}

void retro_set_audio_sample(retro_audio_sample_t cb)
{}

void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb)
{
   audio_batch_cb = cb;
}

void retro_set_input_poll(retro_input_poll_t cb)
{
   poll_cb = cb;
}

void retro_set_input_state(retro_input_state_t cb)
{
   input_cb = cb;
}

void retro_set_controller_port_device(unsigned port, unsigned device) {}

unsigned retro_api_version()
{
   return RETRO_API_VERSION;
}

void *retro_get_memory_data(unsigned id)
{
   //   switch (id & RETRO_MEMORY_MASK)
   //   {
   //   case RETRO_MEMORY_SAVE_RAM:
   //      return NULL;
   //   }

   return NULL;
}

size_t retro_get_memory_size(unsigned id)
{
   switch (id & RETRO_MEMORY_MASK)
   {
   case RETRO_MEMORY_SAVE_RAM:
      return 0;
   }

   return 0;
}
size_t retro_serialize_size(void)
{
   return 0;
}

bool retro_serialize(void *data, size_t size)
{
   (void)data;
   return false;
}
bool retro_unserialize(const void *data, size_t size)
{
   (void)data;
   return false;
}

void retro_cheat_reset(void)
{
}

void retro_cheat_set(unsigned index, bool enabled, const char *code)
{
}
