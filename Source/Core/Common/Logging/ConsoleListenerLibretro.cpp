// Copyright 2015 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#include <cstdio>
#include <cstring>

#include "Common/Logging/ConsoleListener.h"
#include "Common/Logging/Log.h"
#include "DolphinLibretro/main.h"

ConsoleListener::ConsoleListener()
{
}

ConsoleListener::~ConsoleListener()
{
}

void ConsoleListener::Log(LogTypes::LOG_LEVELS level, const char* text)
{
#ifdef _WIN32
  printf("%s", text);
  return;
#else
  switch (level)
  {
  case LogTypes::LOG_LEVELS::LDEBUG:
    Libretro::log_cb(RETRO_LOG_DEBUG, text);
    break;
  case LogTypes::LOG_LEVELS::LWARNING:
    Libretro::log_cb(RETRO_LOG_WARN, text);
    break;
  case LogTypes::LOG_LEVELS::LERROR:
    Libretro::log_cb(RETRO_LOG_ERROR, text);
    break;
  default:
    Libretro::log_cb(RETRO_LOG_INFO, text);
    break;
  }
#endif
}
