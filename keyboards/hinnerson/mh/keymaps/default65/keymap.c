#include QMK_KEYBOARD_H
#include "rev1.h"
#include "keymap_swedish.h"

// extern keymap_config_t keymap_config;

#define _DEFAULT 0
#define _MOUSE 1
#define _MOVE 2

// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_65(
//┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐          //┌────────┬────────┬────────┬────────┬────────┬────────┬─────────────────┬────────┐
   KC_GESC, KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_6,                 KC_7,    KC_8,    KC_9,    KC_0,   SE_PLUS,  KC_EQL,      KC_BSPC,     KC_HOME, \
//|────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┘      //┌───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬────────────┬────────|
    KC_TAB,       KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   SE_AA,  SE_QUOT,              KC_END,  \
//|─────────────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┐        //└─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┐          |────────|
    KC_CAPS,        KC_A,    KC_S,    KC_D,     KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L,  SE_OSLH,  SE_AE,  SE_APOS,   KC_ENT,  KC_PGUP, \
//|──────────┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┐      //└───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴────────┴─┬────────|────────|
    KC_LSFT,  SE_LESS,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M,  KC_COMM, KC_DOT,  SE_MINS,     KC_RSFT,     KC_UP,  KC_PGDN, \
//|──────────|────────┴─┬──────┴───┬────┴─────┬──┴────────┴────────|          //|────────┴────────┴──────┬─┴──────┬─┴──────┬─┴──────┬────────|────────|────────|
    KC_LCTL,   KC_LGUI,   KC_LALT,   MO(_MOVE), LT(_MOUSE, KC_SPC),                 LT(_MOVE, KC_SPC),    KC_ALGR, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
//└──────────┴──────────┴──────────┴──────────┴────────────────────┘          //└────────────────────────┴────────┴────────┴────────┴────────┴────────┴────────|
  ),

  [_MOUSE] = LAYOUT_65(
//┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐          //┌────────┬────────┬────────┬────────┬────────┬────────┬─────────────────┬────────┐
    KC_GESC, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,               KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      KC_DEL,      _______, \
//|────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┘      //┌───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬────────────┬────────|
      _______,   _______, _______, _______, _______, _______,              _______, KC_WH_U, KC_MS_U, KC_WH_D, KC_WH_U, _______, _______,              _______, \
//|─────────────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┐        //└─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┐          |────────|
    _______,       _______, KC_ACL0, KC_ACL1, KC_ACL2, _______,              KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______,  _______,  KC_WH_U, \
//|──────────┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┐      //└───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴────────┴─┬────────|────────|
    _______,  KC_LCTL, _______, _______, _______, _______, _______,              KC_BTN2, KC_BTN3, _______, _______, KC_RCTL,    _______,     _______, KC_WH_D, \
//|──────────|────────┴─┬──────┴───┬────┴─────┬──┴────────┴────────|          //|────────┴────────┴──────┬─┴──────┬─┴──────┬─┴──────┬────────|────────|────────|
    _______,  _______,   _______,    _______,       KC_BTN1,                            KC_BTN1,          _______, _______, _______, _______, _______, _______
//└──────────┴──────────┴──────────┴──────────┴────────────────────┘          //└────────────────────────┴────────┴────────┴────────┴────────┴────────┴────────|
  ),

  [_MOVE] = LAYOUT_65(
//┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐          //┌────────┬────────┬────────┬────────┬────────┬────────┬─────────────────┬────────┐
    KC_GESC, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,               KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      KC_DEL,      _______, \
//|────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┘      //┌───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬────────────┬────────|
      _______,   _______, KC_HOME,  KC_UP,   KC_DEL, _______,               _______, KC_HOME,  KC_UP,   KC_END, KC_DEL, _______, _______,              _______, \
//|─────────────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┐        //└─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┬──────┴─┐          |────────|
    _______,       _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,               _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, _______, _______,  _______,  _______, \
//|──────────┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┐      //└───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴────────┴─┬────────|────────|
    _______,  KC_LCTL, _______, _______, _______, _______, _______,              _______, _______, _______, _______, KC_RCTL,    _______,     _______, _______, \
//|──────────|────────┴─┬──────┴───┬────┴─────┬──┴────────┴────────|          //|────────┴────────┴──────┬─┴──────┬─┴──────┬─┴──────┬────────|────────|────────|
    _______,  _______,   _______,    _______,       KC_ENT,                             KC_ENT,           _______, _______, _______, _______, _______, _______
//└──────────┴──────────┴──────────┴──────────┴────────────────────┘          //└────────────────────────┴────────┴────────┴────────┴────────┴────────┴────────|
  )
};
