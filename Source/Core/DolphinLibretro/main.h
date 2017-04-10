
#pragma once

#include <libco.h>
#include <libretro.h>

namespace Libretro
{
extern bool core_stop_request;
extern cothread_t emuthread;
extern cothread_t mainthread;
extern retro_environment_t environ_cb;
extern retro_log_printf_t log_cb;

void check_variables(void);

struct Options
{
  retro_variable renderer;
  retro_variable _null;
};
extern Options options;
}
