/*
Copyright 2020 ipetepete

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
#define VENDOR_ID       0x4B50 // "KP"
#define PRODUCT_ID      0xEF8E
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pikatea
#define PRODUCT         KP69 Handwire 2021

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 161

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B0, A7, A6, A5, A4 }
#define MATRIX_COL_PINS { B10, B1, A3, A2, A1, A0, B9, B8, B7, B6, B5, B4, B3, A15, A10, A8 }

#define DIODE_DIRECTION COL2ROW

#define VIAL_KEYBOARD_UID {0x2B, 0x51, 0x62, 0x43, 0x3E, 0xF5, 0x39, 0xED}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13}

#define ENCODERS_PAD_A { B14 }
#define ENCODERS_PAD_B { B15 }
#define ENCODER_RESOLUTION 4
