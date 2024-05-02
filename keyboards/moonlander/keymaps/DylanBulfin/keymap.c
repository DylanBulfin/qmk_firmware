#include QMK_KEYBOARD_H
#include "version.h"
#include "features/achordion.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_TRANSPARENT, KC_TRANSPARENT, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_TRANSPARENT, KC_LEFT_CTRL, MT(MOD_LALT, KC_A), MT(MOD_LGUI, KC_R), MT(MOD_LCTL, KC_S), MT(MOD_LSFT, KC_T), KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_M, MT(MOD_LSFT, KC_N), MT(MOD_LCTL, KC_E), MT(MOD_LGUI, KC_I), MT(MOD_LALT, KC_O), KC_QUOTE, KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_TRANSPARENT, TG(5), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT, KC_LEFT_GUI, KC_LEFT_ALT, KC_LEFT_CTRL, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(2, KC_BSPC), LT(3, KC_ENTER), KC_ESCAPE, KC_LEFT_SHIFT, LT(4, KC_TAB), LT(1, KC_SPACE)),
    [1] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAI, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, KC_TRANSPARENT, KC_HOME, KC_PGDN, KC_PAGE_UP, KC_END, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT, KC_LEFT_GUI, KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_NO, RGB_TOG, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT, KC_LEFT_GUI, KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SCLN, KC_4, KC_5, KC_6, KC_EQUAL, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE, KC_1, KC_2, KC_3, KC_BSLS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                            KC_MINUS, KC_0),
    [3] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT, KC_LEFT_GUI, KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_COLN, KC_CIRC, KC_PERC, KC_DLR, KC_PLUS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                            KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS, KC_RPRN),
    [4] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12, KC_F7, KC_F8, KC_F9, KC_DELETE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11, KC_F4, KC_F5, KC_F6, KC_CAPS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT, KC_LEFT_CTRL, KC_LEFT_GUI, KC_LEFT_ALT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [5] = LAYOUT_moonlander(KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT, KC_TRANSPARENT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LEFT_CTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE, KC_TRANSPARENT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211},
           {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}},

    [1] = {{0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},
           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}},

    [2] = {{74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206},
           {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}},

    [3] = {{212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255},
           {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}},

    [4] = {{139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201},
           {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}},

    [5] = {{41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255},
           {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}},
};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (rawhid_state.rgb_control) {
        return false;
    }
    if (keyboard_config.disable_layer_led) {
        return false;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        case 5:
            set_layer_color(5);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return true;
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    if (IS_QK_LAYER_TAP(tap_hold_keycode)) {
        return 0;
    }

    return 1000; // Otherwise use a timeout of 1000 ms
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_N):
        case MT(MOD_LCTL, KC_E):
        case MT(MOD_LGUI, KC_I):
        case LT(2, KC_BSPC):
        case LT(4, KC_TAB):
            return 150;
        default:
            return 0;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_achordion(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case RGB_SLD:
            if (rawhid_state.rgb_control) {
                return false;
            }
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}

void matrix_scan_user(void) {
    achordion_task();
}
