/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

enum layers { MAC_BASE, MAC_FN, WIN_BASE, WIN_FN, NUMPAD};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [MAC_BASE] = LAYOUT_ansi_87(KC_ESC, KC_BRID, KC_BRIU, KC_MCTL, KC_LNPD, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_SNAP, KC_CALC, RGB_MOD, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_LCTL, KC_LOPTN, KC_LCMMD, KC_SPC, KC_RCMMD, KC_ROPTN, MO(MAC_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_87(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, BT_HST1, BT_HST2, BT_HST3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BAT_LVL, NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [WIN_BASE] = LAYOUT_ansi_87(
            KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_CALC, RGB_MOD, 
            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, 
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, 
            KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, 
            KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, MO(WIN_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_87(
            KC_TRNS, KC_BRID, KC_BRIU, KC_TASK, KC_FILE, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, RGB_TOG, 
            KC_TRNS, BT_HST1, BT_HST2, BT_HST3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
            RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
            KC_TRNS, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BAT_LVL, NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, TG(NUMPAD), KC_TRNS, KC_TRNS, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [NUMPAD] = LAYOUT_ansi_87(
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUMLOCK, KC_KP_7, KC_KP_8, KC_KP_9, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_4, KC_KP_5, KC_KP_6, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_1, KC_KP_2, KC_KP_3, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_0, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    const uint8_t hue_increment = 30;
    RGB get_modified_rgb(uint8_t iH = 0, uint8_t iS = 0, uint8_t iB = 0) {
        HSV hsv = rgb_matrix_get_hsv();
        hsv.h += iH;
        hsv.s += iS;
        hsv.v += iB;
        return hsv_to_rgb(hsv);
    }
    
    RGB rgb = get_modified_rgb(hue_increment);

    // CAPS LOCK Indicator
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color_all(rgb.r, rgb.g, rgb.b);
    }

    // WIN_FN LEDS
    if (layer_state_is(WIN_FN)) {
        rgb_matrix_set_color(17, rgb.r, rgb.g, rgb.b); // Bluetooth 1
        rgb_matrix_set_color(18, rgb.r, rgb.g, rgb.b); // Bluetooth 2
        rgb_matrix_set_color(19, rgb.r, rgb.g, rgb.b); // Bluetooth 3
        rgb_matrix_set_color(68, rgb.r, rgb.g, rgb.b); // "b" key
        rgb_matrix_set_color(73, rgb.r, rgb.g, rgb.b); // "/" key

        // RGB Mode
        RGB mode1 = get_modified_rgb(30);
        RGB mode2 = get_modified_rgb(30, 70);
        rgb_matrix_set_color(34, mode1.r, mode1.g, mode1.b); // "q" key
        rgb_matrix_set_color(51, mode2.r, mode2.g, mode2.b); // "a" key
        
        // Hue
        RGB hue1 = get_modified_rgb(50);
        RGB hue2 = get_modified_rgb(50, 70);
        rgb_matrix_set_color(35, hue1.r, hue1.g, hue1.b); // "w" key
        rgb_matrix_set_color(52, hue2.r, hue2.g, hue2.b); // "s" key
        
        // Sat
        RGB sat1 = get_modified_rgb(70);
        RGB sat2 = get_modified_rgb(70, 70);
        rgb_matrix_set_color(36, sat1.r, sat1.g, sat1.b); // "e" key
        rgb_matrix_set_color(53, sat2.r, sat2.g, sat2.b); // "d" key

        // Bri
        RGB bri1 = get_modified_rgb(90);
        RGB bri2 = get_modified_rgb(90, 70);
        rgb_matrix_set_color(37, bri1.r, bri1.g, bri1.b); // "r" key
        rgb_matrix_set_color(54, bri2.r, bri2.g, bri2.b); // "f" key

        // Speed
        RGB speed1 = get_modified_rgb(120);
        RGB speed2 = get_modified_rgb(120, 70);
        rgb_matrix_set_color(38, speed1.r, speed1.g, speed1.b); // "t" key
        rgb_matrix_set_color(55, speed2.r, speed2.g, speed2.b); // "g" key
    }

    // NUM LOCK Indicator in NUMPAD layer and numpad highlight
    if (layer_state_is(NUMPAD)) {
        if (host_keyboard_led_state().num_lock) {
            rgb_matrix_set_color(12, RGB_GREEN);
        } else {
            rgb_matrix_set_color(12, RGB_RED);
        }

        uint8_t layer = get_highest_layer(layer_state);
        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index <= led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                }
            }
        }
    }
}