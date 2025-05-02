#pragma once

#include <Arduino.h>
#include <lvgl.h>

// Color palette
extern lv_color_t PALETTE_BLACK;
extern lv_color_t PALETTE_WHITE;
extern lv_color_t PALETTE_GREY;
extern lv_color_t PALETTE_DARK_GREY;
extern lv_color_t PALETTE_AMBER;
extern lv_color_t PALETTE_RED;
extern lv_color_t PALETTE_GREEN;

// UI design attributes (const = internal linkage, no need for extern)
const int BACKLIGHT_INTRO_TIME  = 3000;
const int TRANSITION_FADE_TIME  = 1000;
const int NOTIFIER_SPIN_TIME    = 6000;

// Meter parts
typedef struct struct_icon_parts {
    float min;
    float max;
    float alert;
    float warning;
    bool flag_when;
    char unit[4];
} struct_icon_parts;

// Buttons
typedef struct struct_buttons {
    uint8_t flag;
    uint8_t button;
    uint8_t press_type;
} struct_buttons;

// Channels
typedef struct struct_set_channel {
    uint8_t flag;
    uint8_t channel_id;
} struct_set_channel;

// Global state
extern uint8_t dimmer_lv;
extern uint8_t current_brightness;

// Display IDs
#define GAUGE_SMALL_SPEEDO     0
#define GAUGE_SMALL_LEVELS     1
#define GAUGE_SMALL_LOCATION   2

// ESPNow flags
#define FLAG_CANBUS            0
#define FLAG_GPS               1
#define FLAG_BUTTONS           2
#define FLAG_OIL_PRESSURE      3
#define FLAG_STARTUP           4
#define FLAG_SET_CHANNEL       5
#define FLAG_FUEL              6
#define FLAG_ONLINE            7

// Button IDs
#define BUTTON_SETTING         0
#define BUTTON_MODE            1
#define BUTTON_BRIGHTNESS_UP   2
#define BUTTON_BRIGHTNESS_DOWN 3

// Click event types
#define CLICK_EVENT_CLICK      0
#define CLICK_EVENT_DOUBLE     1
#define CLICK_EVENT_HOLD       2
