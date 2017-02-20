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
#include "Core/HW/WiimoteEmu/Attachment/Nunchuk.h"

#include <libretro.h>
#include "common.h"

#define RETRO_DEVICE_WIIMOTE           ((1 << 8) | RETRO_DEVICE_JOYPAD)
#define RETRO_DEVICE_WIIMOTE_SW        ((2 << 8) | RETRO_DEVICE_JOYPAD)
#define RETRO_DEVICE_WIIMOTE_NC        ((3 << 8) | RETRO_DEVICE_JOYPAD)
#define RETRO_DEVICE_WIIMOTE_CC        ((4 << 8) | RETRO_DEVICE_JOYPAD)
#define RETRO_DEVICE_WIIMOTE_CC_PRO    ((5 << 8) | RETRO_DEVICE_JOYPAD)

retro_input_state_t input_cb;
struct retro_rumble_interface rumble;

static unsigned connected_wiimote_type[MAX_BBMOTES];

typedef struct
{
   unsigned retro;
   unsigned value;
} keymap;

static const keymap bindmap_gc[] =
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
static struct retro_input_descriptor input_desc_gc[] =
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
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Start" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "Select" },

   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_X, "Control Stick X" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_Y, "Control Stick Y" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X, "C Buttons X" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y, "C Buttons Y" },
   { 0 },
};

static const keymap bindmap_wiimote[] =
{
   { RETRO_DEVICE_ID_JOYPAD_LEFT,   WiimoteEmu::Wiimote::PAD_LEFT },
   { RETRO_DEVICE_ID_JOYPAD_RIGHT,  WiimoteEmu::Wiimote::PAD_RIGHT },
   { RETRO_DEVICE_ID_JOYPAD_DOWN,   WiimoteEmu::Wiimote::PAD_DOWN },
   { RETRO_DEVICE_ID_JOYPAD_UP,     WiimoteEmu::Wiimote::PAD_UP },
   { RETRO_DEVICE_ID_JOYPAD_START,  WiimoteEmu::Wiimote::BUTTON_PLUS },
   { RETRO_DEVICE_ID_JOYPAD_Y,      WiimoteEmu::Wiimote::BUTTON_TWO },
   { RETRO_DEVICE_ID_JOYPAD_X,      WiimoteEmu::Wiimote::BUTTON_ONE },
   { RETRO_DEVICE_ID_JOYPAD_B,      WiimoteEmu::Wiimote::BUTTON_B },
   { RETRO_DEVICE_ID_JOYPAD_A,      WiimoteEmu::Wiimote::BUTTON_A },
   { RETRO_DEVICE_ID_JOYPAD_SELECT, WiimoteEmu::Wiimote::BUTTON_MINUS },
   { RETRO_DEVICE_ID_JOYPAD_R3,     WiimoteEmu::Wiimote::BUTTON_HOME },
};

static struct retro_input_descriptor input_desc_wiimote[] =
{
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,     "Left" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,       "Up" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,     "Down" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT,    "Right" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,        "B" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,        "A" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,        "1" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,        "2" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "+" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "-" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R3,       "Home" },
   { 0 },
};

static const keymap bindmap_wiimote_sideways[] =
{
   { RETRO_DEVICE_ID_JOYPAD_LEFT,   WiimoteEmu::Wiimote::PAD_UP },
   { RETRO_DEVICE_ID_JOYPAD_RIGHT,  WiimoteEmu::Wiimote::PAD_DOWN },
   { RETRO_DEVICE_ID_JOYPAD_DOWN,   WiimoteEmu::Wiimote::PAD_LEFT },
   { RETRO_DEVICE_ID_JOYPAD_UP,     WiimoteEmu::Wiimote::PAD_RIGHT },
   { RETRO_DEVICE_ID_JOYPAD_START,  WiimoteEmu::Wiimote::BUTTON_PLUS },
   { RETRO_DEVICE_ID_JOYPAD_Y,      WiimoteEmu::Wiimote::BUTTON_B },
   { RETRO_DEVICE_ID_JOYPAD_X,      WiimoteEmu::Wiimote::BUTTON_A },
   { RETRO_DEVICE_ID_JOYPAD_B,      WiimoteEmu::Wiimote::BUTTON_ONE },
   { RETRO_DEVICE_ID_JOYPAD_A,      WiimoteEmu::Wiimote::BUTTON_TWO },
   { RETRO_DEVICE_ID_JOYPAD_SELECT, WiimoteEmu::Wiimote::BUTTON_MINUS },
   { RETRO_DEVICE_ID_JOYPAD_R3,     WiimoteEmu::Wiimote::BUTTON_HOME },
};

static struct retro_input_descriptor input_desc_wiimote_sideways[] =
{
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,     "Up" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,       "Right" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,     "Left" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT,    "Down" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,        "1" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,        "2" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,        "A" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,        "B" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "+" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "-" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R3,       "Home" },
   { 0 },
};

static const keymap bindmap_wiimote_wiimote_nunchuk_wm[] =
{
   { RETRO_DEVICE_ID_JOYPAD_LEFT,   WiimoteEmu::Wiimote::PAD_LEFT },
   { RETRO_DEVICE_ID_JOYPAD_UP,     WiimoteEmu::Wiimote::PAD_UP },
   { RETRO_DEVICE_ID_JOYPAD_DOWN,   WiimoteEmu::Wiimote::PAD_DOWN },
   { RETRO_DEVICE_ID_JOYPAD_RIGHT,  WiimoteEmu::Wiimote::PAD_RIGHT },
   { RETRO_DEVICE_ID_JOYPAD_B,      WiimoteEmu::Wiimote::BUTTON_B },
   { RETRO_DEVICE_ID_JOYPAD_A,      WiimoteEmu::Wiimote::BUTTON_A },
   { RETRO_DEVICE_ID_JOYPAD_L,      WiimoteEmu::Wiimote::BUTTON_MINUS },
   { RETRO_DEVICE_ID_JOYPAD_R,      WiimoteEmu::Wiimote::BUTTON_PLUS },
   { RETRO_DEVICE_ID_JOYPAD_START,  WiimoteEmu::Wiimote::BUTTON_ONE },
   { RETRO_DEVICE_ID_JOYPAD_SELECT, WiimoteEmu::Wiimote::BUTTON_TWO },
   { RETRO_DEVICE_ID_JOYPAD_R3,     WiimoteEmu::Wiimote::BUTTON_HOME },
};

static const keymap bindmap_wiimote_wiimote_nunchuk_nc[] =
{
   { RETRO_DEVICE_ID_JOYPAD_X,      WiimoteEmu::Nunchuk::BUTTON_C },
   { RETRO_DEVICE_ID_JOYPAD_Y,      WiimoteEmu::Nunchuk::BUTTON_Z },
};

static struct retro_input_descriptor input_desc_wiimote_nunchuk[] =
{
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,     "Left" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,       "Up" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,     "Down" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT,    "Right" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,        "B" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,        "A" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,        "C" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,        "Z" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,        "-" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,        "+" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "1" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,   "2" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R3,       "Home" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_X, "Nunchuk Stick X" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_Y, "Nunchuk Stick Y" },
   { 0 },
};

static const keymap bindmap_cc[] =
{
   { RETRO_DEVICE_ID_JOYPAD_RIGHT,  WiimoteEmu::Classic::PAD_RIGHT },
   { RETRO_DEVICE_ID_JOYPAD_DOWN,   WiimoteEmu::Classic::PAD_DOWN },
   { RETRO_DEVICE_ID_JOYPAD_L,      WiimoteEmu::Classic::TRIGGER_L },
   { RETRO_DEVICE_ID_JOYPAD_SELECT, WiimoteEmu::Classic::BUTTON_MINUS },
   { RETRO_DEVICE_ID_JOYPAD_R3,     WiimoteEmu::Classic::BUTTON_HOME },
   { RETRO_DEVICE_ID_JOYPAD_START,  WiimoteEmu::Classic::BUTTON_PLUS },
   { RETRO_DEVICE_ID_JOYPAD_R,      WiimoteEmu::Classic::TRIGGER_R },
   { RETRO_DEVICE_ID_JOYPAD_L2,     WiimoteEmu::Classic::BUTTON_ZL },
   { RETRO_DEVICE_ID_JOYPAD_B,      WiimoteEmu::Classic::BUTTON_B },
   { RETRO_DEVICE_ID_JOYPAD_Y,      WiimoteEmu::Classic::BUTTON_Y },
   { RETRO_DEVICE_ID_JOYPAD_X,      WiimoteEmu::Classic::BUTTON_X },
   { RETRO_DEVICE_ID_JOYPAD_A,      WiimoteEmu::Classic::BUTTON_A },
   { RETRO_DEVICE_ID_JOYPAD_L2,     WiimoteEmu::Classic::BUTTON_ZR },
   { RETRO_DEVICE_ID_JOYPAD_LEFT,   WiimoteEmu::Classic::PAD_LEFT },
   { RETRO_DEVICE_ID_JOYPAD_UP,     WiimoteEmu::Classic::PAD_UP },
};
static struct retro_input_descriptor input_desc_wiimote_cc[] =
{
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,   "Left" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,     "Up" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,   "Down" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT,  "Right" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,      "B" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,      "A" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,      "X" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,      "Y" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,      "L" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,      "R" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,     "ZL" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,     "ZR" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R3,     "Home" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,  "+" },
   { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "-" },

   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_X, "Left Stick X" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT , RETRO_DEVICE_ID_ANALOG_Y, "Left Stick Y" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X, "Right Stick X" },
   { 0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y, "Right Stick Y" },
   { 0 },
};

void retro_set_input_state(retro_input_state_t cb)
{
   input_cb = cb;
}

void retro_set_controller_port_device(unsigned port, unsigned device)
{
   if (port < MAX_BBMOTES)
   {
      connected_wiimote_type[port] = device;

      retro_input_descriptor *desc;

      switch (device)
      {
      case RETRO_DEVICE_WIIMOTE:
         desc = input_desc_wiimote;
         break;

      case RETRO_DEVICE_WIIMOTE_SW:
         desc = input_desc_wiimote_sideways;
         break;

      case RETRO_DEVICE_WIIMOTE_NC:
         desc = input_desc_wiimote_nunchuk;
         break;

      case RETRO_DEVICE_WIIMOTE_CC:
      case RETRO_DEVICE_WIIMOTE_CC_PRO:
         desc = input_desc_wiimote_cc;
         break;

      default:
         desc = input_desc_gc;
      }

      retro_input_descriptor *desc_tmp = desc;

      while (desc_tmp->description)
         (desc_tmp++)->port = port;

      Libretro::environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);
   }
}

void Libretro::init_input(void)
{
   environ_cb(RETRO_ENVIRONMENT_GET_RUMBLE_INTERFACE, &rumble);
}


void Libretro::init_descriptors(void)
{
   static const struct retro_controller_description wiimote_desc[] =
   {
      { "WiiMote",                          RETRO_DEVICE_WIIMOTE },
      { "WiiMote (sideways)",               RETRO_DEVICE_WIIMOTE_SW },
      { "WiiMote + Nunchuk",                RETRO_DEVICE_WIIMOTE_NC },
      { "WiiMote + Classic Controller",     RETRO_DEVICE_WIIMOTE_CC },
      { "WiiMote + Classic Controller Pro", RETRO_DEVICE_WIIMOTE_CC_PRO },
   };


   static const struct retro_controller_info ports[] =
   {
      { wiimote_desc, sizeof(wiimote_desc) / sizeof(*wiimote_desc) },
      { wiimote_desc, sizeof(wiimote_desc) / sizeof(*wiimote_desc) },
      { wiimote_desc, sizeof(wiimote_desc) / sizeof(*wiimote_desc) },
      { wiimote_desc, sizeof(wiimote_desc) / sizeof(*wiimote_desc) },
      { 0 },
   };

   environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void *)ports);
}


GCPadStatus Pad::GetStatus(int pad_num)
{
   //   DEBUG_VAR(pad_num);
   GCPadStatus pad = {};

   unsigned i;

   for (i = 0; i < (sizeof(bindmap_gc) / sizeof(*bindmap_gc)); i++)
      pad.button |= input_cb(pad_num, RETRO_DEVICE_JOYPAD, 0,
                             bindmap_gc[i].retro) ? bindmap_gc[i].value : 0;

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

void Classic::GetState(u8 *const data)
{
   wm_classic_extension *const ccdata = (wm_classic_extension *)data;
   //  memset(ccdata, 0, sizeof(*ccdata));

   ccdata->bt.hex = 0;

   int pad_num;

   for (pad_num = 0; pad_num < MAX_BBMOTES && this != classic_controllers_map[pad_num]; pad_num++);

   if (pad_num >= MAX_BBMOTES)
      return;

   if ((connected_wiimote_type[pad_num] == RETRO_DEVICE_WIIMOTE_CC) ||
         (connected_wiimote_type[pad_num] == RETRO_DEVICE_WIIMOTE_CC_PRO))
   {
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

      for (unsigned i = 0; i < (sizeof(bindmap_cc) / sizeof(*bindmap_cc)); i++)
         ccdata->bt.hex |= input_cb(pad_num, RETRO_DEVICE_JOYPAD, 0,
                                    bindmap_cc[i].retro) ? bindmap_cc[i].value : 0;

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

   }

   //    flip button bits
   ccdata->bt.hex ^= 0xFFFF;
}

bool Classic::IsButtonPressed() const
{
   int pad_num;

   for (pad_num = 0; pad_num < MAX_BBMOTES && this != classic_controllers_map[pad_num]; pad_num++);

   if (pad_num > 0)
      return false;

   for (unsigned i = 0; i < (sizeof(bindmap_cc) / sizeof(*bindmap_cc)); i++)
      if (input_cb(pad_num, RETRO_DEVICE_JOYPAD, 0, bindmap_cc[i].retro))
         return true;

   return false;
}

ControllerEmu::ControlGroup *Classic::GetGroup(ClassicGroup group)
{
   return nullptr;
}
}
