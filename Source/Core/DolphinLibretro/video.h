
#pragma once

#include <libretro.h>
#include <libretro_vulkan.h>

namespace Libretro
{
void init_video(void);

extern struct retro_hw_render_callback hw_render;
extern const struct retro_hw_render_interface_vulkan* vulkan;
}
