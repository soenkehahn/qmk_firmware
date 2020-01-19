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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LAYER_1] = LAYOUT_planck_grid(
    KC_TAB     , KC_X              , KC_V   , KC_L   , KC_C       , KC_W  , KC_K  , KC_H       , KC_G   , KC_F   , KC_Q   , XXXXXXX          ,
    MO(LAYER_3), KC_U              , KC_I   , KC_A   , KC_E       , KC_O  , KC_S  , KC_N       , KC_R   , KC_T   , KC_D   , LT(LAYER_3, KC_Y),
    KC_LSFT    , LT(LAYER_4, DE_UE), DE_OE  , DE_AE  , KC_P       , KC_Z  , KC_B  , KC_M       , KC_COMM, KC_DOT , KC_J   , KC_RSFT          ,
    RGB_TOG    , KC_LCTL           , KC_LGUI, KC_LALT, XXXXXXX    , KC_SPC, KC_SPC, MO(LAYER_4), KC_LGUI, KC_RCTL, XXXXXXX, RGB_MOD
),
[LAYER_3] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC, KC_EXLM, KC_LABK, KC_RABK, KC_EQL , KC_AMPR, XXXXXXX,
    XXXXXXX, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR, KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_COLN, KC_AT  ,
    XXXXXXX, KC_HASH, KC_DLR , KC_PIPE, KC_TILD, KC_GRV , KC_PLUS, KC_PERC, KC_DQUO, KC_QUOT, KC_SCLN, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC , KC_SPC , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
[LAYER_4] = LAYOUT_planck_grid(
    XXXXXXX, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL , KC_PGDN, XXXXXXX, KC_7   , KC_8   , KC_9   , XXXXXXX, XXXXXXX,
    XXXXXXX, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END , XXXXXXX, KC_4   , KC_5   , KC_6   , XXXXXXX, XXXXXXX,
    XXXXXXX, KC_ESC , KC_TAB , XXXXXXX, KC_ENT , XXXXXXX, XXXXXXX, KC_1   , KC_2   , KC_3   , XXXXXXX, XXXXXXX,
    RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_0   , KC_0   , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
)
};
