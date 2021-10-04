/*
 *           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                    Version 2, December 2004
 *
 * Copyright (C) 2019 4sStylZ <4sstylz@protonmail.ch>
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

void setDefaultDisplay(void) {
    _delay_ms(10);
    rgblight_setrgb_at(180, 100, 0, 0);
    _delay_ms(10);
    rgblight_setrgb_at(200, 100, 0, 1);
    _delay_ms(10);
    rgblight_setrgb_at(220, 100, 0, 2);
    _delay_ms(10);
    rgblight_setrgb_at(220, 100, 0, 3);
    _delay_ms(10);
    rgblight_setrgb_at(200, 100, 0, 4);
    _delay_ms(10);
    rgblight_setrgb_at(180, 100, 0, 5);
    _delay_ms(10);
    rgblight_setrgb_at(180, 100, 0, 6);
    _delay_ms(10);
    rgblight_setrgb_at(200, 100, 0, 7);
    _delay_ms(10);
    rgblight_setrgb_at(220, 100, 0, 8);
    _delay_ms(10);
    rgblight_setrgb_at(220, 100, 0, 9);
    _delay_ms(10);
    rgblight_setrgb_at(200, 100, 0, 10);
    _delay_ms(10);
    rgblight_setrgb_at(180, 100, 0, 11);

}

void setFNDisplay(void) {
    _delay_ms(10);
    rgblight_setrgb_at(145, 100, 0, 0);
    _delay_ms(10);
    rgblight_setrgb_at(160, 100, 0, 1);
    _delay_ms(10);
    rgblight_setrgb_at(175, 100, 0, 2);
    _delay_ms(10);
    rgblight_setrgb_at(175, 100, 0, 3);
    _delay_ms(10);
    rgblight_setrgb_at(160, 100, 0, 4);
    _delay_ms(10);
    rgblight_setrgb_at(145, 100, 0, 5);
    _delay_ms(10);
    rgblight_setrgb_at(145, 100, 0, 6);
    _delay_ms(10);
    rgblight_setrgb_at(160, 100, 0, 7);
    _delay_ms(10);
    rgblight_setrgb_at(175, 100, 0, 8);
    _delay_ms(10);
    rgblight_setrgb_at(175, 100, 0, 9);
    _delay_ms(10);
    rgblight_setrgb_at(160, 100, 0, 10);
    _delay_ms(10);
    rgblight_setrgb_at(145, 100, 0, 11);
}
