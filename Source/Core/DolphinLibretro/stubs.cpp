
#include <libretro.h>

size_t retro_get_memory_size(unsigned id)
{
  //   switch (id & RETRO_MEMORY_MASK)
  //   {
  //   case RETRO_MEMORY_SAVE_RAM:
  //      return 0;
  //   }

  return 0;
}

void* retro_get_memory_data(unsigned id)
{
  //   switch (id & RETRO_MEMORY_MASK)
  //   {
  //   case RETRO_MEMORY_SAVE_RAM:
  //      return NULL;
  //   }

  return NULL;
}

void retro_cheat_reset(void)
{
}

void retro_cheat_set(unsigned index, bool enabled, const char* code)
{
}

#include "InputCommon/GCAdapter.h"

void GCAdapter::Init()
{
}
void GCAdapter::Shutdown()
{
}
void GCAdapter::ResetRumble()
{
}
bool GCAdapter::IsDetected()
{
  return false;
}

#include "Core/HW/SI/SI_DeviceGCAdapter.h"

namespace SerialInterface
{
CSIDevice_GCAdapter::CSIDevice_GCAdapter(SIDevices device, int _iDeviceNumber)
    : CSIDevice_GCController(device, _iDeviceNumber)
{
}

GCPadStatus CSIDevice_GCAdapter::GetPadStatus()
{
  GCPadStatus pad_status = {};

  return pad_status;
}

int CSIDevice_GCAdapter::RunBuffer(u8* buffer, int length)
{
  return CSIDevice_GCController::RunBuffer(buffer, length);
}
}

#include "Core/NetPlayProto.h"

NetSettings g_NetPlaySettings;
bool NetPlay::IsNetPlayRunning()
{
  return false;
}

#include "Core/NetPlayClient.h"

void NetPlayClient::SendTimeBase()
{
}

#include "Core/HW/EXI/EXI_DeviceIPL.h"

u64 ExpansionInterface::CEXIIPL::NetPlay_GetEmulatedTime()
{
  return 0;
}

#include "Core/ConfigManager.h"
#include "Core/HW/SI/SI_DeviceGCController.h"

namespace SerialInterface
{
int CSIDevice_GCController::NetPlay_InGamePadToLocalPad(int numPAD)
{
  return numPAD;
}

bool CSIDevice_GCController::NetPlay_GetInput(int numPAD, GCPadStatus* PadStatus)
{
  return false;
}

void CSIDevice_GCController::Rumble(int numPad, ControlState strength)
{
  SIDevices device = SConfig::GetInstance().m_SIDevice[numPad];

  if (SIDevice_IsGCController(device))
    Pad::Rumble(numPad, strength);
}
}

#include "Core/HW/WiimoteEmu/WiimoteEmu.h"

bool WiimoteEmu::Wiimote::NetPlay_GetWiimoteData(int wiimote, u8* data, u8 size, u8 reporting_mode)
{
  return false;
}
