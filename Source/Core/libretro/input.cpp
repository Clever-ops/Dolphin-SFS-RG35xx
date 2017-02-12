#include <array>
#include <cassert>

#include "Core/Host.h"
#include "Core/HW/GCPad.h"
#include "Common/Common.h"
#include "Common/CommonTypes.h"
#include "InputCommon/GCPadStatus.h"
#include "Core/HW/Wiimote.h"
#include "Core/HW/WiimoteEmu/WiimoteEmu.h"
#include "Core/HW/WiimoteEmu/Attachment/Classic.h"



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


GCPadStatus Pad::GetStatus(int pad_num)
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
   //   DEBUG_VAR(pad_num);
   GCPadStatus pad = {};

   /* limit to 1 Player for now */
   if (pad_num > 0)
      return pad;

   unsigned i;

   for (i = 0; i < (sizeof(bindmap) / sizeof(*bindmap)); i++)
      pad.button |= input_cb(pad_num, RETRO_DEVICE_JOYPAD, 0, bindmap[i].retro) ? bindmap[i].gc : 0;

   // set analog A/B analog to full or w/e, prolly not needed
   if (pad.button & PAD_BUTTON_A)
      pad.analogA = 0xFF;

   if (pad.button & PAD_BUTTON_B)
      pad.analogB = 0xFF;

   pad.stickX = (0x8000 + input_cb(pad_num, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT,
                                   RETRO_DEVICE_ID_ANALOG_X)) >> 8;
   pad.stickY = (0x7FFF - input_cb(pad_num, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT,
                                   RETRO_DEVICE_ID_ANALOG_Y)) >> 8;
   pad.substickX = (0x8000 + input_cb(pad_num, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT,
                                      RETRO_DEVICE_ID_ANALOG_X)) >> 8;
   pad.substickY = (0x7FFF - input_cb(pad_num, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT,
                                      RETRO_DEVICE_ID_ANALOG_Y)) >> 8;

   if (pad.button & PAD_TRIGGER_L)
      pad.triggerLeft  = 0xFF;

   if (pad.button & PAD_TRIGGER_R)
      pad.triggerRight = 0xFF;

   return pad;
}

void Pad::Rumble(const int pad_num, const ControlState strength)
{
   /* todo: determine actual range used by caller */

   if (pad_num > 0)
      return;

   uint16_t str;

   if (strength < 0.0)
      str = 0;
   else if (strength > 1.0)
      str = 0xFFFF;
   else
      str = 0xFFFF * strength;

   rumble.set_rumble_state(pad_num, RETRO_RUMBLE_WEAK, str);
   rumble.set_rumble_state(pad_num, RETRO_RUMBLE_STRONG, str);
}

bool Pad::GetMicButton(const int pad_num)
{
   //   return input_cb(pad_num, RETRO_DEVICE_JOYPAD, 0,  RETRO_DEVICE_ID_JOYPAD_L2);
   return false;
}

/* stubs */
ControllerEmu::ControlGroup *Pad::GetGroup(int pad_num, PadGroup group)
{
   return nullptr;
}

void Pad::Shutdown()
{
}

void Pad::Initialize()
{
}

void Pad::LoadConfig()
{
}

InputConfig *Pad::GetConfig()
{
   return nullptr;
}

/* classic controller */

namespace WiimoteEmu
{
constexpr std::array<u8, 6> classic_id{{0x00, 0x00, 0xa4, 0x20, 0x01, 0x01}};

// Classic Controller calibration
constexpr std::array<u8, 0x10> classic_calibration{{
      0xff, 0x00, 0x80, 0xff, 0x00, 0x80, 0xff, 0x00, 0x80, 0xff, 0x00, 0x80, 0x00, 0x00, 0x51, 0xa6,
   }};

static Classic *classic_controllers_map[MAX_BBMOTES];
static int current_mote_id;

Classic::Classic(ExtensionReg &reg) : Attachment(_trans("Classic"), reg)
{
   // Set up register
   m_calibration = classic_calibration;
   m_id = classic_id;

   /* this is a temporary hack as there is no way to get the parent wiimote's id
    * without changing the Attachment interface, which prevents automatic button mapping.
    * todo: either implement the necessary change in the Attachment class constructor,
    * or move all input handling to the WiimoteEmu::Wiimote class itself. */

   classic_controllers_map[current_mote_id] = this;
   current_mote_id ++;

   if (current_mote_id > MAX_BBMOTES)
      current_mote_id = 0;
}

typedef struct
{
   unsigned retro;
   unsigned cc;
} keymap;

static const keymap bindmap[] =
{
   { RETRO_DEVICE_ID_JOYPAD_RIGHT,  Classic::PAD_RIGHT },
   { RETRO_DEVICE_ID_JOYPAD_DOWN,   Classic::PAD_DOWN },
   { RETRO_DEVICE_ID_JOYPAD_L,      Classic::TRIGGER_L },
   { RETRO_DEVICE_ID_JOYPAD_SELECT, Classic::BUTTON_MINUS },
   { RETRO_DEVICE_ID_JOYPAD_R3,     Classic::BUTTON_HOME },
   { RETRO_DEVICE_ID_JOYPAD_START,  Classic::BUTTON_PLUS },
   { RETRO_DEVICE_ID_JOYPAD_R,      Classic::TRIGGER_R },
   { RETRO_DEVICE_ID_JOYPAD_L2,     Classic::BUTTON_ZL },
   { RETRO_DEVICE_ID_JOYPAD_B,      Classic::BUTTON_B },
   { RETRO_DEVICE_ID_JOYPAD_Y,      Classic::BUTTON_Y },
   { RETRO_DEVICE_ID_JOYPAD_X,      Classic::BUTTON_X },
   { RETRO_DEVICE_ID_JOYPAD_A,      Classic::BUTTON_A },
   { RETRO_DEVICE_ID_JOYPAD_L2,     Classic::BUTTON_ZR },
   { RETRO_DEVICE_ID_JOYPAD_LEFT,   Classic::PAD_LEFT },
   { RETRO_DEVICE_ID_JOYPAD_UP,     Classic::PAD_UP },
};

void Classic::GetState(u8 *const data)
{
   wm_classic_extension *const ccdata = (wm_classic_extension *)data;
   //  memset(ccdata, 0, sizeof(*ccdata));

   ccdata->bt.hex = 0;

   int pad_num;

   for (pad_num = 0; pad_num < MAX_BBMOTES && this != classic_controllers_map[pad_num]; pad_num++);

   /* limit to 1 Player for now */
   if (pad_num > 0)
      return;

   ccdata->regular_data.lx = (0x8000 + input_cb(pad_num, RETRO_DEVICE_ANALOG,
                              RETRO_DEVICE_INDEX_ANALOG_LEFT,
                              RETRO_DEVICE_ID_ANALOG_X)) >> 10;
   ccdata->regular_data.ly = (0x7FFF - input_cb(pad_num, RETRO_DEVICE_ANALOG,
                              RETRO_DEVICE_INDEX_ANALOG_LEFT,
                              RETRO_DEVICE_ID_ANALOG_Y)) >> 10;

   {
      u8 x_, y_;
      x_ = (0x8000 + input_cb(pad_num, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT,
                              RETRO_DEVICE_ID_ANALOG_X)) >> 11;
      y_ = (0x7FFF - input_cb(pad_num, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT,
                              RETRO_DEVICE_ID_ANALOG_Y)) >> 11;

      ccdata->rx1 = x_;
      ccdata->rx2 = x_ >> 1;
      ccdata->rx3 = x_ >> 3;
      ccdata->ry = y_;
   }

   ccdata->bt.hex = 0;

   for (unsigned i = 0; i < (sizeof(bindmap) / sizeof(*bindmap)); i++)
      ccdata->bt.hex |= input_cb(pad_num, RETRO_DEVICE_JOYPAD, 0, bindmap[i].retro) ? bindmap[i].cc : 0;

   //    // triggers
   //    {
   //      ControlState trigs[2] = {0, 0};
   //      u8 lt, rt;
   //      m_triggers->GetState(&ccdata->bt.hex, classic_trigger_bitmasks.data(), trigs);

   //      lt = static_cast<u8>(trigs[0] * Classic::LEFT_TRIGGER_RANGE);
   //      rt = static_cast<u8>(trigs[1] * Classic::RIGHT_TRIGGER_RANGE);

   //      ccdata->lt1 = lt;
   //      ccdata->lt2 = lt >> 3;
   //      ccdata->rt = rt;
   //    }
   //  if (pad.button & PAD_TRIGGER_L)
   //     pad.triggerLeft  = 0xFF;

   //  if (pad.button & PAD_TRIGGER_R)
   //     pad.triggerRight = 0xFF;

   //    flip button bits
   ccdata->bt.hex ^= 0xFFFF;
}

bool Classic::IsButtonPressed() const
{
   int pad_num;

   for (pad_num = 0; pad_num < MAX_BBMOTES && this != classic_controllers_map[pad_num]; pad_num++);

   /* limit to 1 Player for now */
   if (pad_num > 0)
      return false;

   for (unsigned i = 0; i < (sizeof(bindmap) / sizeof(*bindmap)); i++)
      if (input_cb(pad_num, RETRO_DEVICE_JOYPAD, 0, bindmap[i].retro))
         return true;

   return false;
}

ControllerEmu::ControlGroup *Classic::GetGroup(ClassicGroup group)
{
   return nullptr;
}
}
