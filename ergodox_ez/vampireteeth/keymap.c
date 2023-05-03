#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    QWERTY,  // default layer
    DVORAK,
    NONNUMSYMB, // non-number-shifted symbols
    ARITH, // numbers and arithmerics symbols
    NAVI, // navigation
    MDIA,  // media keys
    GAME,
    MOUSE
};

enum custom_keycodes {
#ifdef ORYX_CONFIGURATOR
    VRSN = EZ_SAFE_RANGE,
#else
    VRSN = SAFE_RANGE,
#endif
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[QWERTY] = LAYOUT_ergodox_pretty(
  // left hand
  TT(MOUSE),             KC_1,                 KC_2,                    KC_3,             KC_4,                KC_5,           KC_NO,                KC_NO,          KC_6,                KC_7,                KC_8,           KC_9,            KC_0,                    KC_NO,
  KC_TAB,                KC_Q,                 KC_W,                    KC_E,             KC_R,                KC_T,           KC_NO,                KC_NO,          KC_Y,                KC_U,                KC_I,           KC_O,            KC_P,                    KC_BSPC,
  KC_ESC,                KC_A,                 KC_S,                    KC_D,             LT(NONNUMSYMB,KC_F), LT(ARITH,KC_G),                                       LT(ARITH,KC_H),      LT(NONNUMSYMB,KC_J), KC_K,           KC_L,            KC_SCLN,                 KC_QUOT,
  SFT_T(KC_TAB),         CTL_T(KC_Z),          GUI_T(KC_X),             ALT_T(KC_C),      KC_V,                KC_B,           ALL_T(KC_NO),         MEH_T(KC_NO),   KC_N,                KC_M,                ALT_T(KC_COMM), GUI_T(KC_DOT),   CTL_T(KC_SLSH),          SFT_T(KC_ENT),
  TT(MDIA),              KC_LCTL,              KC_LGUI,                 KC_LALT,          TG(NAVI),                                                                  KC_LEFT,             KC_DOWN,             KC_UP,          KC_RIGHT,        TT(GAME),

                                                                                                           ALT_T(KC_APP), KC_LGUI,                   KC_LALT, CTL_T(KC_ESC),
                                                                                                                          KC_HOME,                   KC_PGUP,
                                                                                                 LSFT_T(KC_SPC),  KC_TAB, KC_END,                    KC_PGDN, KC_TAB, RSFT_T(KC_SPC)
),


[DVORAK] = LAYOUT_ergodox_pretty(
  // left hand
  TT(MOUSE),             KC_1,                 KC_2,                    KC_3,             KC_4,                KC_5,           KC_NO,                KC_NO,          KC_6,                KC_7,                KC_8,           KC_9,            KC_0,                    KC_NO,
  KC_TAB,                KC_QUOT,              KC_COMM,                 KC_DOT,           KC_P,                KC_Y,           KC_NO,                KC_NO,          KC_F,                KC_G,                KC_C,           KC_R,            KC_L,                    KC_BSPC,
  KC_ESC,                KC_A,                 KC_O,                    KC_E,             LT(NONNUMSYMB,KC_U), LT(ARITH,KC_I),                                       LT(ARITH,KC_D),      LT(NONNUMSYMB,KC_H), KC_T,           KC_N,            KC_S,                    KC_SLSH,
  SFT_T(KC_TAB),         CTL_T(KC_SCLN),       GUI_T(KC_Q),             ALT_T(KC_J),      KC_K,                KC_X,           ALL_T(KC_NO),         MEH_T(KC_NO),   KC_B,                KC_M,                ALT_T(KC_W),    GUI_T(KC_V),     CTL_T(KC_Z),             SFT_T(KC_ENT),
  TT(MDIA),              KC_LCTL,              KC_LGUI,                 KC_LALT,          TG(NAVI),                                                                  KC_LEFT,             KC_DOWN,             KC_UP,          KC_RIGHT,        TT(GAME),

                                                                                                           ALT_T(KC_APP), KC_LGUI,                   KC_LALT, CTL_T(KC_ESC),
                                                                                                                          KC_HOME,                   KC_PGUP,
                                                                                                 LSFT_T(KC_SPC),  KC_TAB, KC_END,                    KC_PGDN, KC_TAB, RSFT_T(KC_SPC)
),


[NONNUMSYMB] = LAYOUT_ergodox_pretty(
  // left hand
  KC_TRNS,        KC_TRNS,           KC_TRNS,        KC_TRNS,          KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_GRV ,        KC_EQL ,           KC_MINS,        KC_LBRC,          KC_RBRC,        KC_TILD,        KC_TRNS,        KC_TRNS,        KC_TILD,        KC_LBRC,        KC_RBRC,        KC_MINS,        KC_EQL ,        KC_TRNS,
  KC_TRNS,        KC_PLUS,           KC_UNDS,        KC_LCBR,          KC_RCBR,        KC_GRV ,                                        KC_GRV ,        KC_LCBR,        KC_RCBR,        KC_UNDS,        KC_PLUS,        KC_TRNS,
  KC_TRNS,        KC_BSLS,           KC_PIPE,        KC_LPRN,          KC_RPRN,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_LPRN,        KC_RPRN,        KC_PIPE,        KC_BSLS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,           KC_TRNS,        KC_TRNS,          KC_TRNS,                                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,

                                                                        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,
                                                                                        KC_TRNS,            KC_TRNS,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS
),

[ARITH] = LAYOUT_ergodox_pretty(
  // left hand
  KC_TRNS,        KC_TRNS,           KC_TRNS,        KC_TRNS,          KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_GRV ,        KC_EQL ,           KC_AMPR,        KC_ASTR,          KC_LPRN,        KC_RPRN,        KC_TRNS,        KC_TRNS,        KC_0   ,        KC_7   ,        KC_8   ,        KC_9   ,        KC_EQL ,        KC_TRNS,
  KC_TRNS,        KC_PLUS,           KC_DLR ,        KC_PERC,          KC_CIRC,        KC_RPRN,                                        KC_0   ,        KC_4   ,        KC_5   ,        KC_6   ,        KC_PLUS,        KC_TRNS,
  KC_TRNS,        KC_SLSH,           KC_EXLM,        KC_AT  ,          KC_HASH,        KC_RPRN,        KC_TRNS,        KC_TRNS,        KC_0   ,        KC_1   ,        KC_2   ,        KC_3   ,        KC_SLSH,        KC_TRNS,
  KC_TRNS,        KC_TRNS,           KC_TRNS,        KC_TRNS,          KC_TRNS,                                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,

                                                                        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,
                                                                                        KC_TRNS,            KC_TRNS,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS
),

[NAVI] = LAYOUT_ergodox_pretty(
  // left hand
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_PGDN,        KC_PGUP,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        MO(MOUSE),      KC_TRNS,                                        KC_LEFT,        KC_DOWN,        KC_UP  ,        KC_RIGHT,       KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                                                        KC_TRNS,      DF(QWERTY),     DF(DVORAK),     KC_TRNS,        KC_TRNS,

                                                                        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,
                                                                                        KC_TRNS,            KC_TRNS,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS
),

[MDIA] = LAYOUT_ergodox_pretty(
  // left hand
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2,                                         KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS,


                                     RGB_MOD,        KC_TRNS,            RGB_TOG,        RGB_M_P,
                                                     KC_TRNS,            KC_TRNS,
                     RGB_VAD,        RGB_VAI,        KC_TRNS,            KC_TRNS,        RGB_HUD,        RGB_HUI
),

[GAME] = LAYOUT_ergodox_pretty(
  // left hand
  KC_DEL,           KC_1,                KC_2,                    KC_3,             KC_4,              KC_5,    KC_NO,                KC_NO,        KC_6,         KC_7,           KC_8,           KC_9,          KC_0,                    KC_NO,
  KC_TAB,           KC_Q,                KC_W,                    KC_E,             KC_R,              KC_T,    KC_NO,                KC_NO,        KC_Y,         KC_U,           KC_I,           KC_O,          KC_P,                    KC_BSPC,
  CTL_T(KC_ESC),    KC_A,                KC_S,                    KC_D,             KC_F,              KC_G,                                        KC_H,         KC_J,           KC_K,           KC_L,          KC_SCLN,                 CTL_T(KC_QUOT),
  SFT_T(KC_TAB),    CTL_T(KC_Z),         GUI_T(KC_X),             ALT_T(KC_C),      KC_V,              KC_B,    ALL_T(KC_NO),         MEH_T(KC_NO), KC_N,         KC_M,           ALT_T(KC_COMM), GUI_T(KC_DOT), CTL_T(KC_SLSH),          SFT_T(KC_ENT),
  KC_TRNS,          KC_LCTL,             KC_LGUI,                 KC_LALT,          OSL(NONNUMSYMB),                                                              OSL(NONNUMSYMB),KC_RALT,        KC_RGUI,       KC_RCTL,                 KC_TRNS,

                                                                             ALT_T(KC_APP), KC_LGUI,                   KC_LALT, CTL_T(KC_ESC),
                                                                                            KC_HOME,                   KC_PGUP,
                                                                           KC_SPC,  KC_TAB, KC_END,                    KC_PGDN, KC_TAB, KC_SPC
),

[MOUSE] = LAYOUT_ergodox_pretty(
  // left hand
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_WH_L,        KC_WH_D,        KC_WH_U,        KC_WH_R,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                        KC_MS_L,        KC_MS_D,        KC_MS_U,        KC_MS_R,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                                                        KC_TRNS,        DF(QWERTY),     DF(DVORAK),     KC_TRNS,        KC_TRNS,

                                                                        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,
                                                                                        KC_TRNS,            KC_TRNS,
                                                        KC_MS_BTN1,     KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_MS_BTN2
),
/*
[TRNS] = LAYOUT_ergodox_pretty(
  // left hand
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
  KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,

                                                                        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,
                                                                                        KC_TRNS,            KC_TRNS,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,        KC_TRNS
),
*/

};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
        }
    }
    return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};
