#include <libretro.h>
#include "Common/ChunkFile.h"
#include "Core/Core.h"
#include "Core/State.h"

size_t retro_serialize_size(void)
{
  size_t size = 0;

  PointerWrap p((u8**)&size, PointerWrap::MODE_MEASURE);
  State::DoState(p);

  return size;
}

bool retro_serialize(void* data, size_t size)
{
   bool wasUnpaused = Core::PauseAndLock(true);
   if (wasUnpaused)
   {
      PointerWrap p((u8**)&data, PointerWrap::MODE_WRITE);
      State::DoState(p);
   }
   Core::PauseAndLock(false, wasUnpaused);

   return true;
}

bool retro_unserialize(const void* data, size_t size)
{
   bool wasUnpaused = Core::PauseAndLock(true);
   if (wasUnpaused)
   {
      PointerWrap p((u8**)&data, PointerWrap::MODE_READ);
      State::DoState(p);
   }
   Core::PauseAndLock(false, wasUnpaused);

   return true;
}
