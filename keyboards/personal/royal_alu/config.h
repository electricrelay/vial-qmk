/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED // GEEKhack
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0000
#define MANUFACTURER    Pikatea
#define PRODUCT         Royal_Alu

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define VIAL_KEYBOARD_UID {0x6D, 0x7F, 0x48, 0x45, 0x57, 0x1A, 0x77, 0x5E}

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *         ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
 #define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
// Rev A B2
  #define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B6, D4, B1, F7, B5, B4, D7, D6, B3, B2 }

// Rev B/C
//#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B6, D4, B1, B7, B5, B4, D7, D6, B3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 25

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

// #define LED_CAPS_LOCK_PIN
// #define LED_PIN_ON_STATE 0

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO

/*
 * Magic Key Options
 *
 * Magic keys are hotkey commands that allow control over firmware functions of
 * the keyboard. They are best used in combination with the HID Listen program,
 * found here: https://www.pjrc.com/teensy/hid_listen.html
 *
 * The options below allow the magic key functionality to be changed. This is
 * useful if your keyboard/keypad is missing keys and you want magic key support.
 *
 */

/* control how magic key switches layers */
//#define MAGIC_KEY_SWITCH_LAYER_WITH_FKEYS true
//#define MAGIC_KEY_SWITCH_LAYER_WITH_NKEYS true
//#define MAGIC_KEY_SWITCH_LAYER_WITH_CUSTOM false

/* override magic key keymap */
//#define MAGIC_KEY_SWITCH_LAYER_WITH_FKEYS
//#define MAGIC_KEY_SWITCH_LAYER_WITH_NKEYS
//#define MAGIC_KEY_SWITCH_LAYER_WITH_CUSTOM
//#define MAGIC_KEY_HELP1     H
//#define MAGIC_KEY_HELP2     SLASH
//#define MAGIC_KEY_DEBUG     D
//#define MAGIC_KEY_DEBUG_MATRIX  X
//#define MAGIC_KEY_DEBUG_KBD   K
//#define MAGIC_KEY_DEBUG_MOUSE  M
//#define MAGIC_KEY_VERSION    V
//#define MAGIC_KEY_STATUS     S
//#define MAGIC_KEY_CONSOLE    C
//#define MAGIC_KEY_LAYER0_ALT1  ESC
//#define MAGIC_KEY_LAYER0_ALT2  GRAVE
//#define MAGIC_KEY_LAYER0     0
//#define MAGIC_KEY_LAYER1     1
//#define MAGIC_KEY_LAYER2     2
//#define MAGIC_KEY_LAYER3     3
//#define MAGIC_KEY_LAYER4     4
//#define MAGIC_KEY_LAYER5     5
//#define MAGIC_KEY_LAYER6     6
//#define MAGIC_KEY_LAYER7     7
//#define MAGIC_KEY_LAYER8     8
//#define MAGIC_KEY_LAYER9     9
//#define MAGIC_KEY_BOOTLOADER   PAUSE
//#define MAGIC_KEY_LOCK      CAPS
//#define MAGIC_KEY_EEPROM     E
//#define MAGIC_KEY_NKRO      N
//#define MAGIC_KEY_SLEEP_LED   Z

/*
 * Feature disable options
 * These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
