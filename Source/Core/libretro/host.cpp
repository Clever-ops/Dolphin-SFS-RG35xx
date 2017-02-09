
#include <cstdlib>
#include <cstdio>
#include <memory>

#include "Core/Host.h"
#include "Core/ConfigManager.h"

#include "retroGL.h"

std::unique_ptr<cInterfaceBase> HostGL_CreateGLInterface()
{
   return std::make_unique<cInterfaceRGL>();
}


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
}

void Host_UpdateDisasmDialog()
{
}

void Host_UpdateMainFrame()
{
}

void Host_RequestRenderWindowSize(int width, int height)
{
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
