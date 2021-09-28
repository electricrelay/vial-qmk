#include QMK_KEYBOARD_H

enum layer_names {
  _BL,
  _FL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BL] = LAYOUT(
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    \
   KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     \
   KC_LSFT, KC_J,    KC_I,    KC_P,    KC_L,    KC_K,     \
   KC_Y,  KC_LCTL, KC_LALT, KC_LGUI, KC_H,   KC_SPC  \
),
[_FL] = LAYOUT( \
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    \
   KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     \
   KC_V,  KC_LCTL, KC_LALT, KC_LGUI, KC_V,   KC_SPC  \
)
};
