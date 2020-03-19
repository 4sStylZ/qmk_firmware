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

// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
// Schematic overview : https://i.imgur.com/HYbUScM.png
#define LAYOUT( \
  k00, k01, k02, k03, \
  k10, k11, k12, k13, \
  k20, k21, k22, k23, \
  k30, k31, k32,      \
     k41,   k42, k43  \
) { \
  {k00  , k01, k02, k03  }, \
  {k10  , k11, k12, k13  }, \
  {k20  , k21, k22, k23  }, \
  {k30  , k31, k32, KC_NO}, \
  {KC_NO, k41, k42, k43  } \
}
