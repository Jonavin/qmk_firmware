/* Copyright 2022 Jonavin Eng @Jonavin
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
        _______,    KC_F11,    KC_F12,  _______,  _______,    _______,          _______,    KC_PSCR, KC_SLCK, KC_PAUS, KC_NO,   RESET,
        _______,    AU_TOG,    MU_TOG,  _______,  _______,    _______,          _______,    _______, _______, _______, _______, _______,
        _______,    KC_NO,     MU_MOD,  _______,  _______,    _______, _______, KC_NLCK,    _______, _______, _______, KC_PGUP, _______,
        _______,    KC_WINLCK, _______, _______,  _______,    _______, _______, _______,    _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
    [_LOWER] = LAYOUT(
        KC_TILD,    _______,   _______, _______,  _______,    _______,          _______,    _______, _______, _______, _______, RGB_TOG,
        _______,    _______,   _______, _______,  _______,    _______,          _______,    _______, _______, _______, _______, RGB_HUI,
        _______,    KC_MINS,   KC_EQL,  KC_NO,    KC_NO,      _______,          _______,    KC_QUES, KC_SLSH, KC_PIPE, KC_BSLS, RGB_HUD,
        _______,    KC_UNDS,   KC_PLUS, KC_NO,    KC_LBRC,    KC_RBRC, _______, KC_LCBR,    KC_RCBR, KC_NO,   KC_NO,   RGB_MOD, _______,
        _______,    _______,   _______, _______,  _______,    _______, _______, _______,    _______, _______, RGB_SPD, RGB_RMOD,RGB_SPI
    ),
    [_RAISE] = LAYOUT(
        KC_GRV,     _______,   _______, _______,  _______,    _______,          _______,    KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_NO,
        EEP_RST,    KC_HOME,   KC_UP,   KC_END,   KC_PGUP,    KC_NO,            KC_TAB,     KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PMNS,
        TT(_RAISE), KC_LEFT,   KC_DOWN, KC_RGHT,  KC_PGDN,    KC_NO,            KC_NO,      KC_P1,   KC_P2,   KC_P3,   KC_NO,   KC_PAST,
        _______,    KC_NO,     KC_DEL,  KC_INS,   KC_NO,      KC_NO,   _______, KC_P0,      KC_00,   KC_NO,   KC_PDOT, CT_PGUP, _______,
        _______,    _______,   _______, _______,  KC_BSPC,    _______, _______, _______,    _______, _______, CT_HOME, CT_PGDN, CT_END
    )
};

#ifdef RGBLIGHT_ENABLE

    enum custom_rgblight_layers
    {
        _rgbCAPSLOCK,
        _rgbNUMLOCK,
        _rgbWINLOCK,
        _rgbFN,
        _rgbLOWER,
        _rgbRAISE
    };

    // Optional RGB Light Mapping Zones {LED Posiiton, Number of LEDs, Colour}
    const rgblight_segment_t PROGMEM _rgb_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {2, 1, HSV_RED}
    );
    const rgblight_segment_t PROGMEM _rgb_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {1, 1, HSV_BLUE}
    );    const rgblight_segment_t PROGMEM _rgb_winlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {1, 1, HSV_RED}
    );
    const rgblight_segment_t PROGMEM _rgb_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, HSV_PURPLE}
    );
    // Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
    const rgblight_segment_t PROGMEM _rgb_lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, HSV_YELLOW}
    );

    const rgblight_segment_t PROGMEM _rgb_raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, HSV_GREEN}
    );

    const rgblight_segment_t* const PROGMEM _rgb_layers[] = RGBLIGHT_LAYERS_LIST(
        _rgb_capslock_layer,
        _rgb_numlock_layer,
        _rgb_winlock_layer,
        _rgb_fn_layer,
        _rgb_lower_layer,
        _rgb_raise_layer
    );

    bool led_update_user(led_t led_state) {
        rgblight_set_layer_state(_rgbCAPSLOCK, led_state.caps_lock);
        rgblight_set_layer_state(_rgbWINLOCK, keymap_config.no_gui);
        #ifdef INVERT_NUMLOCK_INDICATOR
            rgblight_set_layer_state(_rgbNUMLOCK, !led_state.num_lock);   // inverse numlock indicator override
        #else
            rgblight_set_layer_state(_rgbNUMLOCK, led_state.num_lock);   // normal, light LED when numlock on
        #endif // INVERT_NUMLOCK_INDICATOR
        return false;
    }

    layer_state_t layer_state_set_user(layer_state_t state) {
        rgblight_set_layer_state(_rgbFN, layer_state_cmp(state, _FN1));
        rgblight_set_layer_state(_rgbLOWER, layer_state_cmp(state, _LOWER));
        rgblight_set_layer_state(_rgbRAISE, layer_state_cmp(state, _RAISE));
        return state;
    }

    void keyboard_post_init_keymap(void) {
        rgblight_layers = _rgb_layers;
    }
#endif // RGBLIGHT_ENABLE
