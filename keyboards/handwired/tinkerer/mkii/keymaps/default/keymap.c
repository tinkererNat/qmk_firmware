#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _GAME,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_all(
        KC_ESC,  KC_LGUI, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PSCR, KC_INS,
        KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, KC_HOME,
        KC_CAPS, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,           KC_PGDN, KC_END,
        KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,                   KC_UP,   KC_DEL,
        KC_LCTL, MO(_FN), KC_LALT,                   KC_SPC,                       KC_RALT, MO(_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    /* Game */
    [_GAME] = LAYOUT_all(
        KC_ESC,  KC_LGUI, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_MUTE, KC_VOLD, KC_VOLU,
        KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PSCR, KC_INS,
        KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, KC_HOME,
        KC_F15, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,           KC_PGDN, KC_END,
        KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,                   KC_UP,   KC_DEL,
        KC_LCTL, MO(_FN), KC_LALT,                   KC_SPC,                       KC_RALT, MO(_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_FN] = LAYOUT_all(
        RESET, KC_TRNS, TG(_GAME), KC_TRNS, KC_SLEP, KC_WAKE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NK_TOGG, KC_TRNS, RGB_TOG, RGB_VAD, RGB_VAI,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPD, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          RGB_RMOD, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          RGB_SAI, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD, RGB_SAD, RGB_HUI
    )
};
