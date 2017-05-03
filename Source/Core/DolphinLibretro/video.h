
#pragma once

#include <libretro.h>
#ifdef HAVE_VULKAN
#include <libretro_vulkan.h>
#endif
namespace Libretro
{
void init_video(void);

extern retro_video_refresh_t video_cb;
extern struct retro_hw_render_callback hw_render;
#ifdef HAVE_VULKAN
extern const struct retro_hw_render_interface_vulkan* vulkan;
#endif
}
