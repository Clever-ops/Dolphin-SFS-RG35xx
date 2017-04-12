
#pragma once

#include <libco.h>
#include <libretro.h>
#include <string>

namespace Libretro
{
struct Options
{
  retro_variable renderer;
  retro_variable fastmem;
  retro_variable pal60;
  retro_variable progressive_scan;
};

extern Options options;
extern bool core_stop_request;
extern cothread_t emuthread;
extern cothread_t mainthread;
extern retro_environment_t environ_cb;
extern retro_log_printf_t log_cb;
extern std::string sys_dir;

static inline bool get_variable(void* data)
{
  return environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, data);
}

void check_variables(void);
}
