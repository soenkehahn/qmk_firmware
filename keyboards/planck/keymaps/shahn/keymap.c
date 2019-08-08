/* Copyright 2015-2017 Jack Humbert
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
#include "keymap_german.h"

enum planck_layers {
  _QWERTY,
  LAYER_4
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  BACKLIT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_planck_grid(
    KC_TAB , KC_X   , KC_V   , KC_L   , KC_C   , KC_W  , KC_K  , KC_H       , KC_G   , KC_F   , KC_Q   , KC_BSPC,
    KC_ESC , KC_U   , KC_I   , KC_A   , KC_E   , KC_O  , KC_S  , KC_N       , KC_R   , KC_T   , KC_D   , KC_QUOT,
    KC_LSFT, DE_UE  , DE_OE  , DE_AE  , KC_P   , KC_Z  , KC_B  , KC_M       , KC_COMM, KC_DOT , KC_SLSH, KC_ENT,
    RGB_TOG, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX, KC_SPC, KC_SPC, MO(LAYER_4), KC_LGUI, KC_DOWN, KC_UP  , KC_RGHT
),
[LAYER_4] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, KC_BSPC, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
)
};
