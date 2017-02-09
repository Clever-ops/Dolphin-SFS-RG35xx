
#pragma once

#include <libretro.h>
#include <libco.h>

namespace Libretro
{
void init_video(void);
void init_descriptors();
void init_input(void);
void check_variables(void);

extern retro_environment_t environ_cb;
extern retro_log_printf_t log_cb;
extern bool core_stop_request;

extern cothread_t emuthread;
extern cothread_t mainthread;

extern struct retro_hw_render_callback hw_render;
}
