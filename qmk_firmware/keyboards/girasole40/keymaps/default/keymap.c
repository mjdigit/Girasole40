// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
  DRGSCRL = QK_KB_0, // Set drag scroll mode
};

enum keymap_layers {
  _BASE0,
  _LOWER0,
  _UPPER0,
  _SPEC0,
  _BASE1,
  _LOWER1,
  _UPPER1,
  _SPEC1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE0] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_Q           , KC_W          , KC_E          , KC_R          , KC_T                                                                  , KC_Y          , KC_U          , KC_I          , KC_O          , KC_P          ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_A           , KC_S          , KC_D          , KC_F          , KC_G                                                                  , KC_H          , KC_J          , KC_K          , KC_L          , KC_ENT        ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    LCTL_T(KC_Z)   , LSFT_T(KC_X)  , KC_C          , KC_V          , KC_B                                                                  , KC_N          , KC_M          , KC_COMM       , RSFT_T(KC_DOT),RCTL_T(KC_SLSH),
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_LGUI            , KC_LALT       , LT(1, KC_LNG2)    , KC_SPC            , MS_BTN1       , MS_BTN2       , MS_BTN3           , LT(2, KC_LNG1)    , KC_APP        , KC_NO
  ),
  [_LOWER0] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_F2          , KC_F3         , KC_F4         , KC_F5         , KC_F6                                                                 , KC_F7         , KC_F8         , KC_F9         , KC_F10        , KC_F11        ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_1           , KC_2          , KC_3          , KC_4          , KC_5                                                                  , KC_6          , KC_7          , KC_8          , KC_9          , KC_0          ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    LCTL_T(KC_BSPC),LSFT_T(KC_LEFT), KC_DOWN       , KC_UP         , KC_RGHT                                                               , KC_GRV        , KC_QUOT       , KC_LBRC       ,RSFT_T(KC_RBRC),RCTL_T(KC_BSLS),
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_TRNS            , KC_TRNS       , KC_TRNS           , KC_TRNS           , KC_TRNS       , KC_TRNS       , KC_TRNS           , KC_TRNS           , KC_TRNS       , DF(_BASE1)
  ),
  [_UPPER0] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_HOME       , KC_PGUP       , KC_PSCR       , KC_SCRL       , KC_PAUS       ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , DRGSCRL       , KC_NO                                                                 , KC_LEFT       , KC_DOWN       , KC_UP         , KC_RGHT       , KC_BSPC       ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_LCTL        , KC_LSFT       , KC_NO         , KC_NO         , KC_NO                                                                 , KC_END        , KC_PGDN       , KC_DEL        , KC_NO         , KC_INS        ,
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_TRNS            , KC_TRNS       , KC_TRNS           , LALT(KC_GRAVE)    , MS_WHLD       , MS_WHLU       , KC_TRNS           , KC_TRNS           , KC_TRNS       , KC_NO
  ),
  [_SPEC0] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_NO         , KC_NO         , KC_NO         , KC_NO         , KC_NO         ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_NO         , KC_NO         , KC_NO         , KC_NO         , KC_NO         ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_NO         , KC_NO         , KC_NO         , KC_NO         , KC_NO         ,
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_NO              , KC_NO         , KC_NO             , KC_NO             , KC_NO         , KC_NO         , KC_NO             , KC_NO             , KC_NO         , KC_NO
  ),
  [_BASE1] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_Q           , KC_W          , KC_E          , KC_R          , KC_T                                                                  , KC_Y          , KC_U          , KC_I          , KC_O          , KC_P          ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_A           , KC_S          , KC_D          , KC_F          , KC_G                                                                  , KC_H          , KC_J          , KC_K          , KC_L          , KC_ENT        ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    LCTL_T(KC_Z)   , LSFT_T(KC_X)  , KC_C          , KC_V          , KC_B                                                                  , KC_N          , KC_M          , KC_COMM       , RSFT_T(KC_DOT),RCTL_T(KC_SLSH),
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_LALT            , KC_LGUI       , LT(5, KC_LNG2)    , KC_SPC            , MS_BTN1       , MS_BTN2       , MS_BTN3           , LT(6, KC_LNG1)    , KC_RGUI       , KC_NO
  ),
  [_LOWER1] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_F2          , KC_F3         , KC_F4         , KC_F5         , KC_F6                                                                 , KC_F7         , KC_F8         , KC_F9         , KC_F10        , KC_F11        ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_1           , KC_2          , KC_3          , KC_4          , KC_5                                                                  , KC_6          , KC_7          , KC_8          , KC_9          , KC_0          ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    LCTL_T(KC_BSPC),LSFT_T(KC_LEFT), KC_DOWN       , KC_UP         , KC_RGHT                                                               , KC_GRV        , KC_QUOT       , KC_LBRC       ,RSFT_T(KC_RBRC),RCTL_T(KC_BSLS),
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_TRNS            , KC_TRNS       , KC_TRNS           , KC_TRNS           , KC_TRNS       , KC_TRNS       , KC_TRNS           , KC_TRNS           , KC_TRNS       , DF(_BASE0)
  ),
  [_UPPER1] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_HOME       , KC_PGUP       , KC_PSCR       , KC_SCRL       , KC_PAUS       ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , DRGSCRL       , KC_NO                                                                 , KC_LEFT       , KC_DOWN       , KC_UP         , KC_RGHT       , KC_BSPC       ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_LCTL        , KC_LSFT       , KC_NO         , KC_NO         , KC_NO                                                                 , KC_END        , KC_PGDN       , KC_DEL        , KC_NO         , KC_INS        ,
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_TRNS            , KC_TRNS       , KC_TRNS           , LCTL(KC_SPC)      , MS_WHLD       , MS_WHLU       , KC_TRNS           , KC_TRNS           , KC_TRNS       , KC_NO
  ),
  [_SPEC1] = LAYOUT(
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_NO         , KC_NO         , KC_NO         , KC_NO         , KC_NO         ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_NO         , KC_NO         , KC_NO         , KC_NO         , KC_NO         ,
    //    ---------|---------------|---------------|---------------|---------------|                                                        ---------------|---------------|---------------|---------------|---------------|
    KC_NO          , KC_NO         , KC_NO         , KC_NO         , KC_NO                                                                 , KC_NO         , KC_NO         , KC_NO         , KC_NO         , KC_NO         ,
    //             |-------------------|---------------|-------------------|-------------------|---------------|---------------|-------------------|-------------------|---------------|-------------------|
                    KC_NO              , KC_NO         , KC_NO             , KC_NO             , KC_NO         , KC_NO         , KC_NO             , KC_NO             , KC_NO         , KC_NO
  ),
};

const uint16_t PROGMEM combo_Q_W[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_A_S[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo_O_P[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_L_ENT[] = {KC_L, KC_ENT, COMBO_END};
const uint16_t PROGMEM combo_F2_F3[] = {KC_F2, KC_F3, COMBO_END};
const uint16_t PROGMEM combo_F10_F11[] = {KC_F10, KC_F11, COMBO_END};
const uint16_t PROGMEM combo_9_0[] = {KC_9, KC_0, COMBO_END};

combo_t key_combos[] = {
  COMBO(combo_Q_W, KC_ESC),
  COMBO(combo_A_S, KC_TAB),
  COMBO(combo_O_P, KC_MINS),
  COMBO(combo_L_ENT, KC_SCLN),
  COMBO(combo_F2_F3, KC_F1),
  COMBO(combo_F10_F11, KC_F12),
  COMBO(combo_9_0, KC_EQL),
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
#if CONSOLE_ENABLE
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;
#endif
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RCTL_T(KC_SLSH):
    case RSFT_T(KC_DOT):
    case LSFT_T(KC_X):
    case LCTL_T(KC_Z):
    case LSFT_T(KC_LEFT):
    case LCTL_T(KC_BSPC):
      return TAPPING_TERM + 100;
    default:
      return TAPPING_TERM;
  }
}

#define SCROLL_DEVISOR 20.0
static float scroll_accumulated_h = 0;
static float scroll_accumulated_v = 0;

static bool drag_scrolling = false;

#define PROCESS_OVERRIDE_BEHAVIOR false
#define PROCESS_USUAL_BEHAVIOR    true
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case DRGSCRL:
    drag_scrolling = record->event.pressed? true: false;
    break;
  default:
    break;
  }

  return PROCESS_USUAL_BEHAVIOR;
}

report_mouse_t pointing_device_task_kb(report_mouse_t mouse_report) {
  int16_t cur_x = mouse_report.x;
  int16_t cur_y = mouse_report.y;
  int16_t cur_h = mouse_report.h;
  int16_t cur_v = mouse_report.v;

  if (drag_scrolling) {
    scroll_accumulated_h += (float)cur_x / SCROLL_DEVISOR;
    scroll_accumulated_v += (float)cur_y / SCROLL_DEVISOR;
    cur_x = 0;
    cur_y = 0;
  } else {
    scroll_accumulated_h += (float)cur_h / SCROLL_DEVISOR;
    scroll_accumulated_v += (float)cur_v / SCROLL_DEVISOR;
  }

  mouse_report.x = cur_x;
  mouse_report.y = cur_y;
  mouse_report.h = (int8_t)scroll_accumulated_h;
  mouse_report.v = (int8_t)scroll_accumulated_v;

  scroll_accumulated_h -= (int8_t)scroll_accumulated_h;
  scroll_accumulated_v -= (int8_t)scroll_accumulated_v;
  
  return mouse_report;
}