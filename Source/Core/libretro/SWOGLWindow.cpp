/* override for SWOGLWindow.cpp used by the software renderer */

#include <memory>

#include "Core/Core.h"
#include "Common/GL/GLInterfaceBase.h"
#include "Common/GL/GLUtil.h"
#include "Common/Logging/Log.h"

#include "VideoBackends/Software/SWOGLWindow.h"

#include <libco.h>
#include "libretro.h"
extern cothread_t mainthread;
extern retro_video_refresh_t video_cb;
extern bool core_stop_request;

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
   if(!text.empty())
      printf("SWOGLWindow::PrintText : %s\n", text.c_str());
}

void SWOGLWindow::ShowImage(const u8* data, int stride, int width, int height, float aspect)
{
   video_cb(data, width, height, stride);
   if (Core::IsRunning() && !core_stop_request)
      co_switch(mainthread);
}

int SWOGLWindow::PeekMessages()
{
   return 0;
}
