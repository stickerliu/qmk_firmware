/* Copyright 2019 ashpil
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
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 * The first section contains "names" for physical keys of the keyboard
 * and defines their position on the board.
 * The second section defines position of the keys on the switch matrix
 * (where COLUMNS and ROWS crosses). */

#define LAYOUT( \
    K02,      K23, K24, K14, K04, K06, K08, K19, K29, K26, K36, K3B, K3C,   K3F, K4F, K6E, \
    \
    K22, K32, K33, K34, K35, K25, K27, K37, K38, K39, K3A, K2A, K28, K16,   K2C, K2E, K2D,   K6B, K6C, K6D, K7D, \
    K12, K42, K43, K44, K45, K15, K17, K47, K48, K49, K4A, K1A, K18, K56,   K2B, K3E, K3D,   K4B, K4C, K4D, K4E, \
    K13, K52, K53, K54, K55, K05, K07, K57, K58, K59, K5A, K0A, K6A, K66,                    K1B, K1C, K1D, \
    K11, K03, K62, K63, K64, K65, K75, K77, K67, K68, K69, K7A,      K61,        K0E,        K5B, K5C, K5D, K5E, \
    K20,      K0F,                K76,                     K7F,      K60,   K7E, K7B, K7C,   K0C,      K0D       \
) \
{ \
 { KC_NO, KC_NO, K02,   K03,   K04,   K05, K06,   K07, K08,   KC_NO, K0A,   KC_NO, K0C, K0D, K0E,   K0F   }, \
 { KC_NO, K11,   K12,   K13,   K14,   K15, K16,   K17, K18,   K19,   K1A,   K1B,   K1C, K1D, KC_NO, KC_NO }, \
 { K20,   KC_NO, K22,   K23,   K24,   K25, K26,   K27, K28,   K29,   K2A,   K2B,   K2C, K2D, K2E,   KC_NO }, \
 { KC_NO, KC_NO, K32,   K33,   K34,   K35, K36,   K37, K38,   K39,   K3A,   K3B,   K3C, K3D, K3E,   K3F   }, \
 { KC_NO, KC_NO, K42,   K43,   K44,   K45, KC_NO, K47, K48,   K49,   K4A,   K4B,   K4C, K4D, K4E,   K4F   }, \
 { KC_NO, KC_NO, K52,   K53,   K54,   K55, K56,   K57, K58,   K58,   K5A,   K5B,   K5C, K5D, K5E,   KC_NO }, \
 { K60,   K61,   K62,   K63,   K64,   K65, K66,   K67, K68,   K69,   K6A,   K6B,   K6C, K6D, K6E,   KC_NO }, \
 { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K75, K76,   K77, KC_NO, KC_NO, K7A,   K7B,   K7C, K7D, K7E,   K7F   }  \
}
