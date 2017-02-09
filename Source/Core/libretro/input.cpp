

#include "Core/HW/GCPadEmu.h"
#include "Common/Common.h"
#include "Common/CommonTypes.h"
#include "Core/Host.h"

#include <libretro.h>

#include "common.h"

retro_input_state_t input_cb;
struct retro_rumble_interface rumble;

void retro_set_input_state(retro_input_state_t cb)
{
   input_cb = cb;
}

void retro_set_controller_port_device(unsigned port, unsigned device) {}

void Libretro::init_input(void)
{
   environ_cb(RETRO_ENVIRONMENT_GET_RUMBLE_INTERFACE, &rumble);
}
void Libretro::init_descriptors(void)
{
   struct retro_input_descriptor desc[] =
   {
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "Left" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "Up" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "Down" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "Right" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "B" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "A" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "X" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "Y" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "L" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "R" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,    "Z" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },

      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_X, "Control Stick X" },
      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_Y, "Control Stick Y" },
      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X, "C Buttons X" },
      { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y, "C Buttons Y" },
      { 0 },
   };

   environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);   
}


GCPad::GCPad(const unsigned int index) : m_index(index)
{
}

std::string GCPad::GetName() const
{
   /* needed ? */
   return std::string("GCPad") + char('1' + m_index);
}

ControllerEmu::ControlGroup *GCPad::GetGroup(PadGroup group)
{
   return nullptr;
}

GCPadStatus GCPad::GetInput() const
{
   typedef struct
   {
      unsigned retro;
      unsigned gc;
   } keymap;

   static const keymap bindmap[] =
   {
      { RETRO_DEVICE_ID_JOYPAD_LEFT,   PAD_BUTTON_LEFT },
      { RETRO_DEVICE_ID_JOYPAD_RIGHT,  PAD_BUTTON_RIGHT },
      { RETRO_DEVICE_ID_JOYPAD_DOWN,   PAD_BUTTON_DOWN },
      { RETRO_DEVICE_ID_JOYPAD_UP,     PAD_BUTTON_UP },
      { RETRO_DEVICE_ID_JOYPAD_R2,     PAD_TRIGGER_Z },
      { RETRO_DEVICE_ID_JOYPAD_R,      PAD_TRIGGER_R },
      { RETRO_DEVICE_ID_JOYPAD_L,      PAD_TRIGGER_L },
      { RETRO_DEVICE_ID_JOYPAD_A,      PAD_BUTTON_A },
      { RETRO_DEVICE_ID_JOYPAD_B,      PAD_BUTTON_B },
      { RETRO_DEVICE_ID_JOYPAD_X,      PAD_BUTTON_X },
      { RETRO_DEVICE_ID_JOYPAD_Y,      PAD_BUTTON_Y },
      { RETRO_DEVICE_ID_JOYPAD_START,  PAD_BUTTON_START },

   };

   auto lock = ControllerEmu::GetStateLock(); /* needed ? */
   //   DEBUG_VAR(m_index);
   GCPadStatus pad = {};

   /* limit to 1 Player for now */
   if (m_index > 0)
      return pad;

   unsigned i;

   for (i = 0; i < (sizeof(bindmap) / sizeof(*bindmap)); i++)
      pad.button |= input_cb(m_index, RETRO_DEVICE_JOYPAD, 0, bindmap[i].retro) ? bindmap[i].gc : 0;

   // set analog A/B analog to full or w/e, prolly not needed
   if (pad.button & PAD_BUTTON_A)
      pad.analogA = 0xFF;

   if (pad.button & PAD_BUTTON_B)
      pad.analogB = 0xFF;

   pad.stickX = (0x8000 + input_cb(m_index, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT,
                                   RETRO_DEVICE_ID_ANALOG_X)) >> 8;
   pad.stickY = (0x7FFF - input_cb(m_index, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT,
                                   RETRO_DEVICE_ID_ANALOG_Y)) >> 8;
   pad.substickX = (0x8000 + input_cb(m_index, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT,
                                      RETRO_DEVICE_ID_ANALOG_X)) >> 8;
   pad.substickY = (0x7FFF - input_cb(m_index, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT,
                                      RETRO_DEVICE_ID_ANALOG_Y)) >> 8;

   if (pad.button & PAD_TRIGGER_L)
      pad.triggerLeft  = 0xFF;
   if (pad.button & PAD_TRIGGER_R)
      pad.triggerRight = 0xFF;

   return pad;
}

void GCPad::SetOutput(const ControlState strength)
{
   /* todo: determine actual range used by caller */

   if (m_index > 0)
      return;

   uint16_t str;

   if (strength < 0.0)
      str = 0;
   else if (strength > 1.0)
      str = 0xFFFF;
   else
      str = 0xFFFF * strength;

   rumble.set_rumble_state(m_index, RETRO_RUMBLE_WEAK, str);
   rumble.set_rumble_state(m_index, RETRO_RUMBLE_STRONG, str);
}

void GCPad::LoadDefaults(const ControllerInterface &ciface)
{
}

bool GCPad::GetMicButton() const
{
   //   return input_cb(m_index, RETRO_DEVICE_JOYPAD, 0,  RETRO_DEVICE_ID_JOYPAD_L2);
   return false;
}
