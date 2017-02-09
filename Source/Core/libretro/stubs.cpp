#include <libretro.h>

size_t retro_get_memory_size(unsigned id)
{
   switch (id & RETRO_MEMORY_MASK)
   {
//   case RETRO_MEMORY_SAVE_RAM:
//      return 0;
   }

   return 0;
}

void *retro_get_memory_data(unsigned id)
{
   //   switch (id & RETRO_MEMORY_MASK)
   //   {
   //   case RETRO_MEMORY_SAVE_RAM:
   //      return NULL;
   //   }

   return NULL;
}

void retro_cheat_reset(void)
{
}

void retro_cheat_set(unsigned index, bool enabled, const char *code)
{
}
