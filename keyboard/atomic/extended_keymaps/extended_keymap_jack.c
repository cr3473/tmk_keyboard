#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = { /* Qwerty */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL   },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL   },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 2u ────────────┐                                                                                                  ┌─ 2u ────────────┐
// │   X             │                                                                                                  │   X             │
// └─────────────────┘                                                                                                  └─────────────────┘
  { KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,  KC_PGUP  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 2u ────────────┐                                                                                         ┌─ 2u ────────────┐
// │   X             │                                                                                         │   X             │
// └─────────────────┘                                                                                         └─────────────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,  KC_PGDN  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
//                                                                                                    ┌─ 2u ────────────┐
//                                                                                                    │   X             │
//                                                                                                    └─────────────────┘
// ┌─ 2u ────────────┐                                                                                         ┌─ 2u ────────────┐
// │   X             │                                                                                         │   X             │
// └─────────────────┘                                                                                         └─────────────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_LCTL, KC_LGUI, KC_LALT, KC_LGUI, KC_LCTL,  KC_SPC,  KC_SPC,  KC_RALT, KC_RGUI,  KC_RALT, FUNC(1), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 1.25u ──┬ 1.25u ───┬─── 1.25u ┬─── 1.25u ─┬─ 2u ────────────┬─ 1.25u ──┬─ 1.25u ──┬─── 1.25u ┬──── 1.25u ┐
// │   X      │ X        │        X │      X    │   X             │   X      │ X        │        X │      X    │
// └──────────┴──────────┴──────────┴───────────┴─────────────────┴──────────┴──────────┴──────────┴───────────┘
//                                                                ┌─ 2u ────────────┐
//                                                                │   X             │
//                                                                └─────────────────┘
//                                  ┌───────────────────── 6.25u ────────────────────────────┐
//                                  │                        X                               │
//                                  └────────────────────────────────────────────────────────┘
//                       ┌─────────────────────── 6.25u ──────────────────────────┬─ 1.25u ──┬─ 1.25u ──┬─ 1.25u ──┬─── 1.25u ┬── 1.25u ──┐
//                       │                          X                             │     X    │   X      │ X        │        X │      X    │
//                       └────────────────────────────────────────────────────────┴──────────┴──────────┴──────────┴──────────┴───────────┘
 },
 [1] = { /* Colemak */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL   },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL   },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 2u ────────────┐                                                                                                  ┌─ 2u ────────────┐
// │   X             │                                                                                                  │   X             │
// └─────────────────┘                                                                                                  └─────────────────┘
  { KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O, KC_QUOT, KC_ENT,  KC_ENT,  KC_PGUP  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 2u ────────────┐                                                                                         ┌─ 2u ────────────┐
// │   X             │                                                                                         │   X             │
// └─────────────────┘                                                                                         └─────────────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,  KC_PGDN  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
//                                                                                                    ┌─ 2u ────────────┐
//                                                                                                    │   X             │
//                                                                                                    └─────────────────┘
// ┌─ 2u ────────────┐                                                                                         ┌─ 2u ────────────┐
// │   X             │                                                                                         │   X             │
// └─────────────────┘                                                                                         └─────────────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_LCTL, KC_LGUI, KC_LALT, KC_LGUI, KC_LCTL,  KC_SPC,  KC_SPC,  KC_RALT, KC_RGUI,  KC_RALT, FUNC(1), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 1.25u ──┬ 1.25u ───┬─── 1.25u ┬─── 1.25u ─┬─ 2u ────────────┬─ 1.25u ──┬─ 1.25u ──┬─── 1.25u ┬──── 1.25u ┐
// │   X      │ X        │        X │      X    │   X             │   X      │ X        │        X │      X    │
// └──────────┴──────────┴──────────┴───────────┴─────────────────┴──────────┴──────────┴──────────┴───────────┘
//                                                                ┌─ 2u ────────────┐
//                                                                │   X             │
//                                                                └─────────────────┘
//                                  ┌───────────────────── 6.25u ────────────────────────────┐
//                                  │                        X                               │
//                                  └────────────────────────────────────────────────────────┘
//                       ┌─────────────────────── 6.25u ──────────────────────────┬─ 1.25u ──┬─ 1.25u ──┬─ 1.25u ──┬─── 1.25u ┬── 1.25u ──┐
//                       │                          X                             │     X    │   X      │ X        │        X │      X    │
//                       └────────────────────────────────────────────────────────┴──────────┴──────────┴──────────┴──────────┴───────────┘
 },

 [2] = { /* Qwerty */
  { KC_GRV,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_BSPC, KC_DEL   },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL   },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 2u ────────────┐                                                                                                  ┌─ 2u ────────────┐
// │   X             │                                                                                                  │   X             │
// └─────────────────┘                                                                                                  └─────────────────┘
  { KC_ESC,  FUNC(3),    FUNC(4),    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,  KC_PGUP  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 2u ────────────┐                                                                                         ┌─ 2u ────────────┐
// │   X             │                                                                                         │   X             │
// └─────────────────┘                                                                                         └─────────────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,  KC_PGDN  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
//                                                                                                    ┌─ 2u ────────────┐
//                                                                                                    │   X             │
//                                                                                                    └─────────────────┘
// ┌─ 2u ────────────┐                                                                                         ┌─ 2u ────────────┐
// │   X             │                                                                                         │   X             │
// └─────────────────┘                                                                                         └─────────────────┘
//                                                                                                                      ┌─ 2u ────────────┐
//                                                                                                                      │   X             │
//                                                                                                                      └─────────────────┘
  { KC_LCTL, KC_LGUI, KC_LALT, KC_LGUI, KC_LCTL,  KC_SPC,  KC_SPC,  KC_RALT, KC_RGUI,  KC_RALT, FUNC(1), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT  },
// ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
// │        │        │        │        │        │        │        │        │        │        │        │        │        │        │        │
// └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
// ┌─ 1.25u ──┬ 1.25u ───┬─── 1.25u ┬─── 1.25u ─┬─ 2u ────────────┬─ 1.25u ──┬─ 1.25u ──┬─── 1.25u ┬──── 1.25u ┐
// │   X      │ X        │        X │      X    │   X             │   X      │ X        │        X │      X    │
// └──────────┴──────────┴──────────┴───────────┴─────────────────┴──────────┴──────────┴──────────┴───────────┘
//                                                                ┌─ 2u ────────────┐
//                                                                │   X             │
//                                                                └─────────────────┘
//                                  ┌───────────────────── 6.25u ────────────────────────────┐
//                                  │                        X                               │
//                                  └────────────────────────────────────────────────────────┘
//                       ┌─────────────────────── 6.25u ──────────────────────────┬─ 1.25u ──┬─ 1.25u ──┬─ 1.25u ──┬─── 1.25u ┬── 1.25u ──┐
//                       │                          X                             │     X    │   X      │ X        │        X │      X    │
//                       └────────────────────────────────────────────────────────┴──────────┴──────────┴──────────┴──────────┴───────────┘
 }
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(2),
    [3] = ACTION_DEFAULT_LAYER_SET(0),
    [4] = ACTION_DEFAULT_LAYER_SET(1),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) 
{
  // MACRODOWN only works in this function
    switch(id) {
      case 0:
        return MACRODOWN(T(CM_T), END);
      break;
    } 
    return MACRO_NONE;
};
