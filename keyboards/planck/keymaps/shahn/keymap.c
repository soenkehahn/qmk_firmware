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
  LAYER_1,
  LAYER_3,
  LAYER_4
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  BACKLIT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LAYER_1] = LAYOUT_planck_grid(
    XXXXXXX    , KC_X   , KC_V   , KC_L   , KC_C       , KC_W  , KC_K  , KC_H       , KC_G   , KC_F   , KC_Q    , MO(LAYER_3),
    MO(LAYER_3), KC_U   , KC_I   , KC_A   , KC_E       , KC_O  , KC_S  , KC_N       , KC_R   , KC_T   , KC_D    , KC_Y       ,
    KC_LSFT    , DE_UE  , DE_OE  , DE_AE  , KC_P       , KC_Z  , KC_B  , KC_M       , KC_COMM, KC_DOT , KC_J    , KC_RSFT    ,
    RGB_TOG    , XXXXXXX, XXXXXXX, KC_LGUI, MO(LAYER_4), KC_SPC, KC_SPC, MO(LAYER_4), KC_LGUI, XXXXXXX, XXXXXXX , MO(LAYER_3)
),
[LAYER_3] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, KC_UNDS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
[LAYER_4] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, KC_BSPC, KC_UP,   KC_DEL , XXXXXXX, XXXXXXX, KC_7   , KC_8   , KC_9   , XXXXXXX, XXXXXXX,
    XXXXXXX, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END , XXXXXXX, KC_4   , KC_5   , KC_6   , XXXXXXX, XXXXXXX,
    XXXXXXX, KC_ESC , XXXXXXX, XXXXXXX, KC_ENT , XXXXXXX, XXXXXXX, KC_1   , KC_2   , KC_3   , XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_0   , KC_0   , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
)
};
