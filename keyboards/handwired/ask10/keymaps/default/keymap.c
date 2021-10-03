/*
 *           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                    Version 2, December 2004
 *
 * Copyright (C) 2020 4sStylZ <4sstylz@protonmail.ch>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 *  0. You just DO WHAT THE FUCK YOU WANT TO.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* 0
 * ┌──────┬──────┬──────┬──────┐
 * │ # Lk │  =   │   /  │   *  │
 * ├──────┼──────┼──────┼──────┤
 * │  7   │  8   │  9   │   -  │
 * ├──────┼──────┼──────┼──────┤
 * │  4   │  5   │  6   │   +  │
 * ├──────┼──────┼──────┼──────┤
 * │  1   │  2   │  3   │      │
 * ├──────┴──────┼──────┤ Entr │
 * │      0      │   .  │      │
 * └─────────────┴──────┴──────┘
 */
  [0] = LAYOUT(
    RESET, KC_PEQL,  KC_PSLS, KC_PAST,
    KC_P7, KC_P8  ,  KC_P9  , KC_PMNS,
    KC_P4, KC_P5  ,  KC_P6  , KC_PPLS,
    KC_P1, KC_P2  ,  KC_P3  ,
        KC_P0,        KC_PDOT , KC_PENT
  ),
};
