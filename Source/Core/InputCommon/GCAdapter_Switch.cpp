// Copyright 2014 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.
// SWITCH TODO: IMPLEMENT

#include <algorithm>
#include <array>
#include <mutex>

#include "Common/Event.h"
#include "Common/Flag.h"
#include "Common/Logging/Log.h"
#include "Common/Thread.h"
#include "Core/ConfigManager.h"
#include "Core/Core.h"
#include "Core/CoreTiming.h"
#include "Core/HW/SI/SI.h"
#include "Core/HW/SystemTimers.h"

#include "InputCommon/GCAdapter.h"
#include "InputCommon/GCPadStatus.h"

namespace GCAdapter
{

void Init()
{

}


void Shutdown()
{
}

void StartScanThread()
{
}

void StopScanThread()
{
}

GCPadStatus Input(int chan)
{
  GCPadStatus pad = {};
  return pad;
}

void Output(int chan, u8 rumble_command)
{
}

bool IsDetected()
{
  return true;
}
bool IsDriverDetected()
{
  return true;
}
bool DeviceConnected(int chan)
{
  return true;
}

bool UseAdapter()
{
  return true;
}

void ResetRumble()
{
}

void SetAdapterCallback(std::function<void(void)> func)
{
}

}  // end of namespace GCAdapter
