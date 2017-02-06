// Copyright 2015 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#include "Common/Logging/Log.h"

#include "VideoBackends/Null/Render.h"

#include "VideoCommon/VideoConfig.h"

#ifdef __LIBRETRO__
#include <libco.h>
#include <libretro.h>
#include "Core/Core.h"
extern cothread_t mainthread;
extern retro_video_refresh_t video_cb;
extern bool core_stop_request;
#endif

namespace Null
{
// Init functions
Renderer::Renderer()
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
#ifdef __LIBRETRO__
   video_cb(NULL, 512, 512, 512 * 4);
   if(Core::IsRunning() && !core_stop_request)
      co_switch(mainthread);
#endif
   UpdateActiveConfig();
}

}  // namespace Null
