#pragma once

#include "quantum.h"
#include "led.h"

/* GH60 LEDs
 *   GPIO pads
 *   0 F7 WASD LEDs
 *   1 F6 ESC LED
 *   2 F5 FN LED
 *   3 F4 POKER Arrow LEDs
 *   B2 Capslock LED
 *   B0 not connected
 */
static inline void gh60_caps_led_on(void)      { setPinOutput(B2); writePinLow(B2); }
static inline void gh60_poker_leds_on(void)    { setPinOutput(F4); writePinLow(F4); }
static inline void gh60_fn_led_on(void)        { setPinOutput(F5); writePinLow(F5); }
static inline void gh60_esc_led_on(void)       { setPinOutput(F6); writePinLow(F6); }
static inline void gh60_wasd_leds_on(void)     { setPinOutput(F7); writePinLow(F7); }

static inline void gh60_caps_led_off(void)     { setPinInput(B2); }
static inline void gh60_poker_leds_off(void)   { setPinInput(F4); }
static inline void gh60_fn_led_off(void)       { setPinInput(F5); }
static inline void gh60_esc_led_off(void)      { setPinInput(F6); }
static inline void gh60_wasd_leds_off(void)    { setPinInput(F7); }

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */


/* ANSI variant. No extra keys for ISO */
#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,      K0E, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,      \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D,      \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D,      \
    K40, K41, K42,                     K47,      K49, K4A,      K4C, K4D       \
) { \
    { K00, K01,   K02, K03,   K04,   K05,   K06,   K07, K08,   K09, K0A, K0B,   K0C,   KC_NO, K0E  }, \
    { K10, K11,   K12, K13,   K14,   K15,   K16,   K17, K18,   K19, K1A, K1B,   K1C,   K1D,   KC_NO  }, \
    { K20, K21,   K22, K23,   K24,   K25,   K26,   K27, K28,   K29, K2A, K2B,   KC_NO, K2D,   KC_NO  }, \
    { K30, KC_NO, K32, K33,   K34,   K35,   K36,   K37, K38,   K39, K3A, K3B,   KC_NO, K3D,   KC_NO }, \
    { K40, K41,   K42, KC_NO, KC_NO, KC_NO, KC_NO, K47, KC_NO, K49, K4A, KC_NO, K4C,   K4D,    KC_NO }  \
}


