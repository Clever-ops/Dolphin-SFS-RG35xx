#include <libretro.h>

size_t retro_serialize_size(void)
{
  return 0;
}

bool retro_serialize(void* data, size_t size)
{
  (void)data;
  return false;
}
bool retro_unserialize(const void* data, size_t size)
{
  (void)data;
  return false;
}
