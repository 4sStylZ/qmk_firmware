#include QMK_KEYBOARD_H

// Define the keycodes for one qwerty layer and one Fn layer.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty
   * TODO ascii art preview
   *
   * Hidden features : 
   *  - Left Shift is also Home on a single tap.
   *  - Left Ctrl is also End on a single tap.
   *  - Right Shift and Right FN are also page-up on a single tap.
   *  - Right Ctrl is also page-down on a single tap.
   */
  [0] = LAYOUT( \
    KC_GESC, KC_Q   , KC_W   , KC_E , KC_R , KC_T   , KC_Y  , KC_U  , KC_I   , KC_O   , KC_P   , KC_LBRC , KC_RBRC, KC_BSPC       ,
    MO(1)  , KC_A   , KC_S   , KC_D , KC_F , KC_G   , KC_H  , KC_J  , KC_K   , KC_L   , KC_SCLN, KC_QUOT , KC_NUHS, KC_ENT        ,
    KC_LSPO, KC_NUBS, KC_Z   , KC_X , KC_C , KC_V   , KC_B  , KC_N  , KC_M   , KC_COMM, KC_DOT , KC_SLSH , KC_RSPC, LT(1, KC_PGUP),
    KC_LCPO, KC_LGUI, KC_LALT, MO(2),        KC_SPC , KC_SPC,         KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, KC_RALT, KC_RCPC
  ),

  /* 1: second layer for media keys and many advanced features ç
   * TODO ascii art preview
   */
  [1] = LAYOUT( \
    KC_TAB     , LSFT(KC_1)  , LSFT(KC_2)  , LSFT(KC_3)  , LSFT(KC_4)  , LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), LSFT(KC_MINS), LSFT(KC_EQL), KC_DEL ,
    _______    , KC_F1       , KC_F2       , KC_F3       , KC_F4       , KC_F5     , KC_F6     , KC_F7     , KC_F8     , KC_F9     , KC_F10    , KC_F11       , KC_F12      , _______,
    _______    , _______     , KC_MUTE     , KC_VOLD     , KC_VOLU     , KC_PSCR   , _______   , _______   , KC_HOME   , KC_END    , RESET     , _______      , _______     , _______,
    _______    , _______     , _______     , _______     ,               _______   , _______   ,             _______   , _______   , _______   , _______      , _______     , _______
  ),

  [2] = LAYOUT( \
    LALT(KC_F4), KC_1        , KC_2        , KC_3        , KC_4        , KC_5      , KC_6      , KC_7      , KC_8      , KC_9      , KC_0      , KC_MINS      , KC_EQL      , _______,
    _______    , _______     , LSFT(KC_DEL), LCTL(KC_INS), LSFT(KC_INS), _______   , _______   , _______   , _______   , _______   , _______   , _______      , _______     , _______,
    _______    , _______     , KC_MUTE     , KC_VOLD     , KC_VOLU     , KC_PSCR   , _______   , _______   , _______   , _______   , _______   , _______      , _______     , _______,
    _______    , _______     , _______     , _______     ,               _______   , _______   ,             _______   , _______   , _______   , _______      , _______     , _______
  )
};
