
#pragma once

#include <libretro.h>
#include <string>
#include <cstring>

namespace Libretro
{
struct Options
{
  retro_variable renderer;
  retro_variable fastmem;
  retro_variable pal60;
  retro_variable progressive_scan;
  retro_variable DSP_mode;
  retro_variable skip_efb_access_from_cpu;
  retro_variable efb_ignore_format_changes;
  retro_variable store_efb_copies_to_texture_only;
  retro_variable scaled_efb_copy;
};

extern Options options;
extern retro_environment_t environ_cb;
extern retro_log_printf_t log_cb;
extern std::string sys_dir;

static inline bool get_variable(void* data)
{
  return environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, data);
}

unsigned get_fbo_width(void);
unsigned get_fbo_height(void);

static inline bool operator == (const retro_variable& option, const char* value)
{
  return !std::strcmp(option.value, value);
}

bool should_override_efb_scale(void);
int efb_override_scale(void);
void check_variables(bool first_init);
void rescale_video(void);
}
