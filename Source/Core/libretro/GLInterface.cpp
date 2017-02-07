
#include <memory>
#include <cstdlib>
#include <sstream>
#include <vector>

#include <libco.h>
#include <libretro.h>

#include "Core/Core.h"
#include "Common/Logging/Log.h"
#include "VideoCommon/RenderBase.h"
#include "Common/GL/GLInterfaceBase.h"
#include "Common/GL/GLUtil.h"

extern struct retro_hw_render_callback hw_render;
extern retro_video_refresh_t video_cb;
extern cothread_t mainthread;
extern bool core_stop_request;

class cInterfaceRGL : public cInterfaceBase
{
private:

   int screen_width;
   int screen_height;
protected:

public:
   void Swap() override;
   void SwapInterval(int interval) override;
   void SetMode(GLInterfaceMode mode) override
   {
      s_opengl_mode = mode;
   }
   void *GetFuncAddress(const std::string &name) override;
   bool Create(void *window_handle, bool core) override;
   bool Create(cInterfaceBase *main_context) override;
   bool MakeCurrent() override;
   bool ClearCurrent() override;
   void Shutdown() override;
   void UpdateHandle(void *window_handle) override;
   void UpdateSurface() override;
   std::unique_ptr<cInterfaceBase> CreateSharedContext() override;
};


void cInterfaceRGL::Swap()
{
   video_cb(RETRO_HW_FRAME_BUFFER_VALID, Renderer::GetTargetWidth(), Renderer::GetTargetHeight(), 0);

   if (Core::IsRunning() && !core_stop_request)
      co_switch(mainthread);

   /* probably not needed */
   glBindFramebuffer(GL_FRAMEBUFFER, hw_render.get_current_framebuffer());
}

void cInterfaceRGL::SwapInterval(int Interval)
{
   return;
}

void *cInterfaceRGL::GetFuncAddress(const std::string &name)
{
   void *addr = (void *)hw_render.get_proc_address(name.c_str());
   printf("get_proc_address(\"%s\") --> 0x%08lX\n", name.c_str(), (uintptr_t)addr);
   return addr;
}

bool cInterfaceRGL::Create(void *window_handle, bool core)
{
   s_opengl_mode = GLInterfaceMode::MODE_OPENGL;
   /* doesn't seem to be used anyhwere */
#ifdef CORE
   m_core = true;
#else
   m_core = false;
#endif

   return true;
}

std::unique_ptr<cInterfaceBase> cInterfaceRGL::CreateSharedContext()
{
   std::unique_ptr<cInterfaceBase> context = std::make_unique<cInterfaceRGL>();

   if (!context->Create(this))
      return nullptr;

   return context;
}

bool cInterfaceRGL::Create(cInterfaceBase *main_context)
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

void cInterfaceRGL::UpdateHandle(void *window_handle)
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

std::unique_ptr<cInterfaceBase> HostGL_CreateGLInterface()
{
   return std::make_unique<cInterfaceRGL>();
}
