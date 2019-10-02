#include QMK_KEYBOARD_H

// Implement Super-alt↯tab
// See https://docs.qmk.fm/#/feature_macros?id=super-alt↯tab
bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

// Defining all the custom keycodes.
enum custom_keycodes {
  ALT_TAB = SAFE_RANGE
};

const uint16_t PROGMEM lock_combo[] = {KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {COMBO(lock_combo, LGUI(KC_O))};

// Define the keycodes for one qwerty layer and one Fn layer.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty
   * TODO ascii art preview
   *
   * Hidden features : 
   *  - Left Shift is also Home on a single tap.
   *  - Left Ctrl is also End on a single tap.
   *  - Right Shift is also page-up on a single tap.
   *  - Right Ctrl is also page-down on a single tap.
   *  - Press JKLM for Windows + L (Session lock)
   */
  [0] = LAYOUT( \
    KC_GESC, KC_Q   , KC_W   , KC_E , KC_R , KC_T   , KC_Y  , KC_U  , KC_I   , KC_O   , KC_P   , KC_LBRC , KC_RBRC, KC_BSPC,
    MO(1)  , KC_A   , KC_S   , KC_D , KC_F , KC_G   , KC_H  , KC_J  , KC_K   , KC_L   , KC_SCLN, KC_QUOT , KC_NUHS, KC_ENT ,
    KC_LSPO, KC_NUBS, KC_Z   , KC_X , KC_C , KC_V   , KC_B  , KC_N  , KC_M   , KC_COMM, KC_DOT , KC_SLSH , KC_RSPC, MO(1)  ,
    KC_LCPO, KC_LGUI, KC_LALT, MO(2),        KC_SPC , KC_SPC,         KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, KC_RALT, KC_RCPC
  ),

  /* 1: second layer for media keys and many advanced features ç
   * TODO ascii art preview
   */
  [1] = LAYOUT( \
    KC_TAB , KC_1        , KC_2        , KC_3        , KC_4      , KC_5      , KC_6      , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_DEL ,
    _______, KC_F1       , KC_F2       , KC_F3       , KC_F4     , KC_F5     , KC_F6     , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______,
    _______, LSFT(KC_DEL), LCTL(KC_INS), LSFT(KC_INS), KC_MUTE   , KC_VOLD   , KC_VOLU   , _______, KC_HOME, KC_END , RESET  , _______, _______, _______,
    _______, _______     , _______     , _______     ,             _______   , _______   ,          _______, _______, _______, _______, _______, _______
  ),

  [2] = LAYOUT( \
    LALT(KC_F4), LSFT(KC_1), LSFT(KC_2)  , LSFT(KC_3)  , LSFT(KC_4)  , LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0) , LSFT(KC_MINS), LSFT(KC_EQL), _______,
    _______    , _______   , LSFT(KC_DEL), LCTL(KC_INS), LSFT(KC_INS), _______   , _______   , LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), KC_KP_PLUS , _______      , _______     , _______,
    _______    , _______   , KC_MUTE     , KC_VOLD     , KC_VOLU     , _______   , _______   , _______   , LSFT(KC_1), LSFT(KC_2), LSFT(KC_3) , KC_KP_ENTER  , _______     , _______,
    _______    , _______   , _______     , _______     ,               _______   , _______   ,             LSFT(KC_0), _______   , KC_V       , _______      , _______     , _______
  )
};

// Set the unicode input mode for using UC.
void matrix_init_user(void) {
  set_unicode_input_mode(UC_LNX);
}

// Processing all the key pressed.
// Alt+tab.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // Depending keycodes…
  switch (keycode) { // This will do most of the grunt work with the keycodes.
    case ALT_TAB:
      if (record->event.pressed) {
        if (!is_alt_tab_active) {
          is_alt_tab_active = true;
          register_code(KC_LALT);
        }
        alt_tab_timer = timer_read();
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
  }
  return true;
}

void matrix_scan_user(void) {     // The very important timer.
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 750) {
      unregister_code(KC_LALT);
      is_alt_tab_active = false;
    }
  }
}
