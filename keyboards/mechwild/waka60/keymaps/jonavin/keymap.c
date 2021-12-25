/* Copyright 2021 Jonavin Eng @Jonavin
 *
 *****  NOTE this keymap uses userspace jonavin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

 #include QMK_KEYBOARD_H
 #include "jonavin.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_GESC,    KC_1,      KC_2,    KC_3,     KC_4,       KC_5,             KC_6,       KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TAB,     KC_Q,      KC_W,    KC_E,     KC_R,       KC_T,             KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        TT(_RAISE), KC_A,      KC_S,    KC_D,     KC_F,       KC_G,             KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,    KC_Z,      KC_X,    KC_C,     KC_V,       KC_B,   KC_MUTE,  KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SFTUP,KC_SFTENT,
        KC_LCTL,    KC_LGUI,   KC_LALT, MO(_FN1), KC_LOWERSPC,KC_SPC, KC_SPC,   KC_RAISESPC,KC_SPC,  KC_RCTRL,KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_FN1] = LAYOUT(
        KC_ESC,     KC_F1,     KC_F2,   KC_F3,    KC_F4,      KC_F5,            KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_INS,
        KC_TRNS,    KC_F11,    KC_F12,  KC_TRNS,  KC_TRNS,    KC_TRNS,          KC_TRNS,    KC_PSCR, KC_SLCK, KC_PAUS, KC_NO,   RESET,
        KC_TRNS,    AU_TOG,    MU_TOG,  KC_TRNS,  KC_TRNS,    KC_TRNS,          KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,    KC_NO,     MU_MOD,  KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_NLCK,    KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS,
        KC_TRNS,    KC_WINLCK, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END
    ),
    [_LOWER] = LAYOUT(
        KC_TILD,    KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,          KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG,
        KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,          KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI,
        KC_TRNS,    KC_MINS,   KC_EQL,  KC_NO,    KC_NO,      KC_TRNS,          KC_TRNS,    KC_QUES, KC_SLSH, KC_PIPE, KC_BSLS, RGB_HUD,
        KC_TRNS,    KC_UNDS,   KC_PLUS, KC_NO,    KC_LBRC,    KC_RBRC, KC_TRNS, KC_LCBR,    KC_RCBR, KC_NO,   KC_NO,   RGB_MOD, KC_TRNS,
        KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, RGB_SPD, RGB_RMOD,RGB_SPI
    ),
    [_RAISE] = LAYOUT(
        KC_GRV,     KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,          KC_TRNS,    KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_NO,
        EEP_RST,    KC_HOME,   KC_UP,   KC_END,   KC_PGUP,    KC_NO,            KC_TAB,     KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PMNS,
        TT(_RAISE), KC_LEFT,   KC_DOWN, KC_RGHT,  KC_PGDN,    KC_NO,            KC_NO,      KC_P1,   KC_P2,   KC_P3,   KC_NO,   KC_PAST,
        KC_TRNS,    KC_NO,     KC_DEL,  KC_INS,   KC_NO,      KC_NO,   KC_TRNS, KC_P0,      KC_00,   KC_NO,   KC_PDOT, CT_PGUP, KC_TRNS,
        KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,  KC_BSPC,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, CT_HOME, CT_PGDN, CT_END
    )
};
