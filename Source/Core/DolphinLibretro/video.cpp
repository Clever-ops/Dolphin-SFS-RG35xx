
#include <memory>
#include <sstream>
#include <vector>

#include <libco.h>
#include <libretro.h>

#include "Common/GL/GLInterfaceBase.h"
#include "Common/GL/GLUtil.h"
#include "Common/Logging/Log.h"
#include "Core/ConfigManager.h"
#include "Core/Core.h"
#include "DolphinLibretro/main.h"
#include "DolphinLibretro/video.h"
#include "VideoBackends/Null/Render.h"
#include "VideoBackends/Software/SWOGLWindow.h"
#include "VideoCommon/RenderBase.h"
#include "VideoCommon/VideoConfig.h"

#include "retroGL.h"
#ifdef HAVE_VULKAN
#include "libretro_vulkan.h"
#endif
namespace Libretro
{
struct retro_hw_render_callback hw_render;
const struct retro_hw_render_interface_vulkan* vulkan;

retro_video_refresh_t video_cb;

static void context_reset(void)
{
  fprintf(stderr, "Context reset!\n");
#ifdef HAVE_VULKAN
  if (hw_render.context_type == RETRO_HW_CONTEXT_VULKAN)
  {
    if (!environ_cb(RETRO_ENVIRONMENT_GET_HW_RENDER_INTERFACE, (void**)&vulkan) || !vulkan)
    {
      fprintf(stderr, "Failed to get HW rendering interface!\n");
      return;
    }

    if (vulkan->interface_version != RETRO_HW_RENDER_INTERFACE_VULKAN_VERSION)
    {
      fprintf(stderr, "HW render interface mismatch, expected %u, got %u!\n",
              RETRO_HW_RENDER_INTERFACE_VULKAN_VERSION, vulkan->interface_version);
      vulkan = NULL;
      return;
    }
  }
#endif
}

static void context_destroy(void)
{
  fprintf(stderr, "Context destroy!\n");
  if (hw_render.context_type == RETRO_HW_CONTEXT_VULKAN)
  {
    vulkan = NULL;
  }
}
#ifdef HAVE_VULKAN
static const VkApplicationInfo* get_application_info(void)
{
  static const VkApplicationInfo info = {
      VK_STRUCTURE_TYPE_APPLICATION_INFO, NULL, "dolphin-emu-vulkan", 0, "dolphin-emu-vulkan", 0,
      VK_MAKE_VERSION(1, 0, 18),
  };
  return &info;
}
#endif
void init_video()
{
  environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &options.renderer);
  if (options.renderer.value == std::string("Hardware"))
  {
#ifdef HAVE_OPENGL_CORE
    hw_render.context_type = RETRO_HW_CONTEXT_OPENGL_CORE;
    hw_render.version_major = 3;
    hw_render.version_minor = 1;
#else
    hw_render.context_type = RETRO_HW_CONTEXT_OPENGL;
#endif
    hw_render.context_reset = context_reset;
    hw_render.context_destroy = context_destroy;
    hw_render.depth = true;
    hw_render.stencil = true;
    hw_render.bottom_left_origin = true;
    hw_render.cache_context = true;
    if (environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &hw_render))
    {
      SConfig::GetInstance().m_strVideoBackend = "OGL";
      return;
    }
#ifdef HAVE_VULKAN
    hw_render.context_type = RETRO_HW_CONTEXT_VULKAN;
    hw_render.version_major = VK_MAKE_VERSION(1, 0, 18);
    hw_render.version_minor = 0;
    hw_render.context_reset = context_reset;
    hw_render.context_destroy = context_destroy;
    hw_render.cache_context = true;

    if (environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &hw_render))
    {
      static const struct retro_hw_render_context_negotiation_interface_vulkan iface = {
          RETRO_HW_RENDER_CONTEXT_NEGOTIATION_INTERFACE_VULKAN,
          RETRO_HW_RENDER_CONTEXT_NEGOTIATION_INTERFACE_VULKAN_VERSION, get_application_info, NULL,
      };
      environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER_CONTEXT_NEGOTIATION_INTERFACE, (void*)&iface);

      SConfig::GetInstance().m_strVideoBackend = "Vulkan";
      return;
    }
#endif
  }
  hw_render.context_type = RETRO_HW_CONTEXT_NONE;
  if (options.renderer.value == std::string("Software"))
    SConfig::GetInstance().m_strVideoBackend = "Software Renderer";
  else
    SConfig::GetInstance().m_strVideoBackend = "Null";
}
}  // namespace Libretro

void retro_set_video_refresh(retro_video_refresh_t cb)
{
  Libretro::video_cb = cb;
}

/* Null Render.cpp */

namespace Null
{
// Init functions
Renderer::Renderer() : ::Renderer(1, 1)
{
  g_Config.bRunning = true;
  UpdateActiveConfig();
}

Renderer::~Renderer()
{
  g_Config.bRunning = false;
  UpdateActiveConfig();
}

void Renderer::RenderText(const std::string& text, int left, int top, u32 color)
{
  NOTICE_LOG(VIDEO, "RenderText: %s", text.c_str());
}

TargetRectangle Renderer::ConvertEFBRectangle(const EFBRectangle& rc)
{
  TargetRectangle result;
  result.left = rc.left;
  result.top = rc.top;
  result.right = rc.right;
  result.bottom = rc.bottom;
  return result;
}

void Renderer::SwapImpl(u32, u32, u32, u32, const EFBRectangle&, u64, float)
{
  if (Libretro::core_stop_request)
    return;
  Libretro::video_cb(NULL, 512, 512, 512 * 4);
  co_switch(Libretro::mainthread);
  UpdateActiveConfig();
}

}  // namespace Null

/* retroGL interface*/
void cInterfaceRGL::Swap()
{
  if (Libretro::core_stop_request)
    return;

  Libretro::video_cb(RETRO_HW_FRAME_BUFFER_VALID, s_backbuffer_width, s_backbuffer_height, 0);
  co_switch(Libretro::mainthread);
  s_backbuffer_width = g_renderer->GetTargetWidth();
  s_backbuffer_height = g_renderer->GetTargetHeight();
}

void cInterfaceRGL::SwapInterval(int Interval)
{
  return;
}

void* cInterfaceRGL::GetFuncAddress(const std::string& name)
{
  void* addr = (void*)Libretro::hw_render.get_proc_address(name.c_str());
  //   printf("get_proc_address(\"%s\") --> 0x%08lX\n", name.c_str(), (uintptr_t)addr);
  return addr;
}

bool cInterfaceRGL::Create(void* window_handle, bool core)
{
  s_opengl_mode = GLInterfaceMode::MODE_OPENGL;
/* doesn't seem to be used anyhwere */
#ifdef CORE
  m_core = true;
#else
  m_core = false;
#endif
  s_backbuffer_width = 512;
  s_backbuffer_height = 512;

  return true;
}

std::unique_ptr<cInterfaceBase> cInterfaceRGL::CreateSharedContext()
{
  std::unique_ptr<cInterfaceBase> context = std::make_unique<cInterfaceRGL>();

  if (!context->Create(this))
    return nullptr;

  return context;
}

bool cInterfaceRGL::Create(cInterfaceBase* main_context)
{
//   cInterfaceRGL *egl_context = static_cast<cInterfaceRGL *>(main_context);

/* doesn't seem to be used anyhwere */
#ifdef CORE
  m_core = true;
#else
  m_core = false;
#endif
  m_is_shared = true;
  s_backbuffer_width = 512;
  s_backbuffer_height = 512;
  s_opengl_mode = GLInterfaceMode::MODE_OPENGL;
  return true;
}

bool cInterfaceRGL::MakeCurrent()
{
  return true;
}

void cInterfaceRGL::UpdateHandle(void* window_handle)
{
}

void cInterfaceRGL::UpdateSurface()
{
  MakeCurrent();
}

bool cInterfaceRGL::ClearCurrent()
{
  return true;
}

void cInterfaceRGL::Shutdown()
{
}

/* override for SWOGLWindow.cpp used by the software renderer */

std::unique_ptr<SWOGLWindow> SWOGLWindow::s_instance;

void SWOGLWindow::Init(void* window_handle)
{
}

void SWOGLWindow::Shutdown()
{
}

void SWOGLWindow::Prepare()
{
}

void SWOGLWindow::PrintText(const std::string& text, int x, int y, u32 color)
{
  if (!text.empty())
    printf("SWOGLWindow::PrintText : %s\n", text.c_str());
}

void SWOGLWindow::ShowImage(const u8* data, int stride, int width, int height, float aspect)
{
  Libretro::video_cb(data, width, height, stride);
  if (Core::IsRunning() && !Libretro::core_stop_request)
    co_switch(Libretro::mainthread);
}

int SWOGLWindow::PeekMessages()
{
  return 0;
}
