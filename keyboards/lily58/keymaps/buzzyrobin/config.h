/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

// Underglow
#undef RGBLED_NUM
#define RGBLED_NUM 5   // Number of LEDs

// NOTE: we are mirroring RGBs, not having independent two sets of them.
//#define RGBLIGHT_SPLIT
//#define RGBLED_SPLIT { 3, 3 } // How many per side

#define RGBLIGHT_ANIMATIONS // Enable access to animations

#define RGBLIGHT_SLEEP // Turn off LEDs when sleeping

#define RGBLIGHT_LIMIT_VAL 200 // 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE 201 // magenta according to https://docs.qmk.fm/#/feature_rgblight?id=colors
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_DEFAULT_SPD 0

// TODO: do we want this?
//#define RGBLIGHT_LAYERS
