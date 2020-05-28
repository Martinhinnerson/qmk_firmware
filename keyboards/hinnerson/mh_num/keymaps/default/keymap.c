#include QMK_KEYBOARD_H
#include "rev1.h"
//#include "keymap_swedish.h"

#define _DEFAULT 0
#define _RGB  1
#define _MOUSE 2

typedef union {
  uint32_t raw;
  struct {
    bool     rgb_layer_change :1;
  };
} user_config_t;

user_config_t user_config;



  const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_NUM(
//┌────────┬────────┬────────┬────────┐
   LT(_MOUSE, KC_CALC), KC_PSLS, KC_PAST, KC_PMNS,\
//|────────|────────|────────|────────|
    KC_P7,   KC_P8,   KC_P9,  KC_PPLS,\
//|────────|────────|────────|        |
    KC_P4,   KC_P5,   KC_P6,\
//|────────|────────|────────|────────|
    KC_P1,   KC_P2,   KC_P3,\
//|─────────────────|────────|        |
    LT(_RGB, KC_P0), KC_PDOT,  KC_ENT
//└─────────────────┴────────┴────────┘
  ),
  [_RGB] = LAYOUT_NUM(
//┌────────┬────────┬────────┬────────┐
   RGB_M_SW, RGB_TOG, RGB_RMOD,RGB_MOD,\
//|────────|────────|────────|────────|
   RGB_HUI, RGB_SAI, RGB_VAI, RGB_M_T,\
//|────────|────────|────────|        |
   RGB_HUD, RGB_SAD, RGB_VAD,\
//|────────|────────|────────|────────|
   RGB_M_P, RGB_M_B, RGB_M_R,\
//|─────────────────|────────|        |
       XXXXXXX,     RGB_M_SN, RGB_M_K
//└─────────────────┴────────┴────────┘
  ),
  [_MOUSE] = LAYOUT_NUM(
//┌────────┬────────┬────────┬────────┐
   TO(_DEFAULT),XXXXXXX, XXXXXXX, XXXXXXX,\
//|────────|────────|────────|────────|
   KC_WH_U, KC_MS_U, KC_WH_D, XXXXXXX,\
//|────────|────────|────────|        |
   KC_MS_L, KC_MS_D, KC_MS_R,\
//|────────|────────|────────|────────|
   KC_BTN3, KC_WBAK, KC_WFWD,\
//|─────────────────|────────|        |
        KC_BTN1,     KC_BTN2,  KC_ENT
//└─────────────────┴────────┴────────┘
  )
};
