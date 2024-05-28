/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "features/achordion.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_ESC, KC_LCTL, LALT_T(KC_A), LGUI_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LGUI_T(KC_I), LALT_T(KC_O), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(5), LT(2, KC_BSPC), LT(3, KC_ENT), LSFT_T(KC_ESC), LT(1, KC_SPC), LT(4, KC_TAB)),
                                                              [1] = LAYOUT_split_3x6_3(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_END), LCTL(KC_HOME), KC_NO, KC_NO, QK_BOOT, KC_NO, KC_BSPC, KC_ENT, KC_NO, KC_NO, KC_NO),
                                                              [2] = LAYOUT_split_3x6_3(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, KC_NO, KC_QUOT, KC_4, KC_5, KC_6, KC_EQL, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_0, KC_NO),
                                                              [3] = LAYOUT_split_3x6_3(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, KC_NO, KC_DQUO, KC_CIRC, KC_PERC, KC_DLR, KC_PLUS, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_RPRN, KC_NO),
                                                              [4] = LAYOUT_split_3x6_3(KC_TAB, KC_F12, KC_F7, KC_F8, KC_F9, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_F11, KC_F4, KC_F5, KC_F6, KC_CAPS, KC_NO, KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_LSFT, KC_F10, KC_F1, KC_F2, KC_F3, QK_REP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(6), KC_BSPC, KC_ENT, KC_NO, KC_NO, KC_NO),
                                                              [5] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_NO, KC_NO, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LGUI), OSM(MOD_LALT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
                                                              [6] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_TRNS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_TRNS, KC_ENT, KC_BSPC, KC_SPC, TO(0), KC_NO)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_achordion(keycode, record)) {
        return false;
    }

    return true;
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211},

           {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}, {205, 228, 211}},

    [1] = {{0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245},

           {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}, {0, 245, 245}},

    [2] = {{74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206},

           {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}, {74, 255, 206}},

    [3] = {{212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255},

           {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}, {212, 230, 255}},

    [4] = {{139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201},

           {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}, {139, 230, 201}},

    [5] = {{41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255},

           {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}, {41, 255, 255}},
};
