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

// Layer shorthand
#define _QW 0
#define _FN 1

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
  [_QW] = LAYOUT(
    MO(_FN)    , KC_MINUS  , KC_9      , KC_0,
    LSFT(KC_7) , LSFT(KC_8), LSFT(KC_9), KC_8,
    LSFT(KC_4) , LSFT(KC_5), LSFT(KC_6), KC_7,
    LSFT(KC_1) , LSFT(KC_2), LSFT(KC_3),
    LSFT(KC_0),        KC_V, KC_ENT
  ),
  [_FN] = LAYOUT(
    _______, RESET  , KC_9    , KC_BSPC,
    KC_DEL , _______ , _______, KC_PGUP,
    KC_HOME, KC_UP  , KC_END  , KC_PGDN,
    KC_LEFT, KC_DOWN, KC_RIGHT,
    KC_LCTL,       KC_LALT    , KC_ENT
  ),
};
