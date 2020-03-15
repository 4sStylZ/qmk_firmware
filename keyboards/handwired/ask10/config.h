/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
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

#define MATRIX_ROW_PINS { PB1, PB3, PB2, PB6, PB5 }
#define MATRIX_COL_PINS { PF6, PF7, PD1, PD0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
