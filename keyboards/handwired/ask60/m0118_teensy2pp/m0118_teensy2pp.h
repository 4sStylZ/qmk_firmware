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

#include "quantum.h"

/* Alps64 physical definition macro */
#define LAYOUT( \
     k00, k01, k02  , k03, k04  , k05  , k06  , k07  , k08  , k09, k010, k011, k012, k013 , \
     k10, k11, k12  , k13, k14  , k15  , k16  , k17  , k18  , k19, k110, k111, k112, K113 , \
     k20, k21, k22  , k23, k24  , k25  , k26  , k27  , k28  , k29, k210, k211, k212,        \
     k30, k31, k32  , k33, k34  , k35  , k36  , k37  , k38  , k39, k310, k311, k312, K313 , \
     k40, k41,        K43,                             k46  ,      k410, k411, k412, k413   \
) { \
    {k00, k01, k02  , k03, k04  , k05  , k06  , k07  , k08  , k09, k010, k011, k012, k013 }, \
    {k10, k11, k12  , k13, k14  , k15  , k16  , k17  , k18  , k19, k110, k111, k112, K113 }, \
    {k20, k21, k22  , k23, k24  , k25  , k26  , k27  , k28  , k29, k210, k211, k212, KC_NO}, \
    {k30, k31, k32  , k33, k34  , k35  , k36  , k37  , k38  , k39, k310, k311, k312, K313 }, \
    {k40, k41, KC_NO, K43, KC_NO, KC_NO, KC_NO, KC_NO, k46, KC_NO, k410, k411, k412, k413 }, \
}
