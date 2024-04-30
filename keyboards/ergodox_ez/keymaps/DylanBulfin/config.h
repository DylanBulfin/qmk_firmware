/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef IGNORE_MOD_TAP_INTERRUPT
#define RETRO_TAPPING

#define PERMISSIVE_HOLD

#define ACHORDION_STREAK

#define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_RIGHT_CTRL
#define MODS_TO_NEUTRALIZE { MOD_LGUI, MOD_LALT }

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"j6J4Z/xwnaW"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT

