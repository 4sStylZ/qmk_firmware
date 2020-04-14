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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6464
#define DEVICE_VER      0x0001
#define MANUFACTURER    4sStylZ and others makers
#define PRODUCT         ASK10
#define DESCRIPTION     QMK keyboard firmware for ASK10 handwired

#define TAPPING_TERM 175

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

// ROWS: Top to bottom, COLS: Left to right
#define MATRIX_ROW_PINS { B1, B3, B2, B6, B5 }
#define MATRIX_COL_PINS { F6, F7, F5, F4 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
