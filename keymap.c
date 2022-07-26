#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_combo.h"

enum custom_keycodes {
    ELPS = ML_SAFE_RANGE,
    QMKLS,
    FRMWR,
    FLWHD,
    QWRT,
    SLCTALL,
    UNDO,
    COPY,
    CUT,
    PASTE,
};

const uint16_t PROGMEM keymaps[] [MATRIX_ROWS] [MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_DLR,             KC_9,               KC_5,               KC_1,               KC_3,               KC_7,              TG(3),               TG(3),               KC_6,               KC_2,               KC_0,               KC_4,               KC_8,               KC_NO,
    LALT_T(KC_Z),       LCTL_T(KC_X),       KC_G,               KC_L,               KC_C,               KC_B,              LGUI(KC_GRV),        KC_MPLY,             LT(0,KC_MINUS),     KC_U,               KC_O,               KC_Y,               LCTL_T(KC_K),       LALT_T(KC_Q),
    OSL(1),             KC_R,               KC_S,               KC_N,               KC_D,               KC_W,              LT(0,KC_LBRC),       LT(0,KC_RBRC),       LALT(KC_BSPC),      KC_A,               KC_E,               KC_I,               KC_H,               OSL(1),
    LSFT_T(KC_GRV),     LGUI_T(KC_J),       KC_F,               KC_M,               KC_P,               KC_V,                                                        KC_QUES,            KC_COMM,            KC_QUOTE,           KC_DOT,             LGUI_T(KC_DQUO),    LSFT_T(KC_SLSH),
    KC_HOME,            KC_END,             KC_LEFT,            KC_RIGHT,           LT(4,KC_BSPC),                         MEH_T(KC_ESC),       HYPR_T(TG(1)),                           LT(4,KC_DEL),       KC_DOWN,            KC_UP,              KC_NO,              KC_MPLY,
                                                                                    LT(3,KC_T),         KC_ENTER,          KC_NO,               QWRT,                KC_TAB,             LT(3,KC_SPC)
  ),

  [1] = LAYOUT_moonlander(
    KC_NO,              KC_PERC,            KC_TILD,            KC_PIPE,            KC_CIRC,            KC_LABK,           TG(3),               KC_TRNS,             KC_RABK,            KC_EQUAL,           KC_ASTR,            KC_PLUS,            KC_AMPR,            KC_NO,
    LSFT(KC_Z),         LSFT(KC_X),         LSFT(KC_G),         LSFT(KC_L),         LSFT(KC_C),         LSFT(KC_B),        KC_TRNS,             KC_TRNS,             KC_UNDS,            LSFT(KC_U),         LSFT(KC_O),         LSFT(KC_Y),         LSFT(KC_K),         LSFT(KC_Q),
    OSL(0),             LSFT(KC_R),         LSFT(KC_S),         LSFT(KC_N),         LSFT(KC_D),         LSFT(KC_W),        KC_LCBR,             KC_RCBR,             LALT(KC_BSPC),      LSFT(KC_A),         LSFT(KC_E),         LSFT(KC_I),         LSFT(KC_H),         OSL(0),
    KC_AT,              LSFT(KC_J),         LSFT(KC_F),         LSFT(KC_M),         LSFT(KC_P),         LSFT(KC_V),                                                  KC_EXLM,            KC_SCLN,          KC_LPRN,            LSFT(KC_SCLN),      KC_RPRN,            LALT_T(KC_BSLS),
    KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_HASH,                               KC_TRNS,             KC_TRNS,                                 ELPS,               KC_PGDOWN,          KC_PGUP,            KC_NO,              KC_TRNS,
                                                                                    LSFT(KC_T),         LSFT(KC_ENTER),    KC_NO,               KC_NO,               LSFT(KC_TAB),       KC_NO
  ),

  [2] = LAYOUT_moonlander(
    KC_EQUAL,           KC_1,               KC_2,               KC_3,               KC_4,               KC_5,              TO(0),               KC_NO,               KC_6,               KC_7,               KC_8,               KC_9,               KC_0,               KC_MINUS,
    KC_DEL,             KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,              KC_NO,               KC_NO,               KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,               KC_BSLASH,
    KC_ESC,             KC_A,               KC_S,               KC_D,               KC_F,               KC_G,              KC_LBRC,             KC_RBRC,             KC_H,               KC_J,               KC_K,               KC_L,               KC_SCOLON,          KC_QUOTE,
    KC_LSFT,            KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,                                                        KC_N,               KC_M,               KC_COMMA,           KC_DOT,             KC_SLASH,           KC_RSFT,
    KC_NO,              KC_NO,              KC_LEFT,            KC_RIGHT,           LT(4,KC_BSPC),                         KC_NO,               KC_NO,                                   LT(4,KC_DEL),       KC_DOWN,            KC_UP,              KC_NO,              KC_NO,
                                                                                    TO(0),              KC_ENTER,          KC_NO,               TO(0),               KC_TAB,             LT(3,KC_SPC)
  ),

  [3] = LAYOUT_moonlander(
    KC_TRNS,            KC_F9,              KC_F5,              KC_F1,              KC_F3,              KC_F7,             TO(0),               TG(4),               KC_F6,              KC_F2,              KC_F10,             KC_F4,              KC_F8,              KC_F11,
    KC_TAB,             KC_NO,              KC_NO,              KC_AT,              KC_GRV,             KC_NO,             TO(0),               KC_DLR,              KC_KP_MINUS,        KC_KP_7,            KC_KP_8,            KC_KP_9,            KC_PAST,            KC_F12,
    KC_BSPC,            UNDO,               SLCTALL,            CUT,                COPY,               PASTE,             KC_TRNS,             KC_TRNS,             KC_BSPC,            KC_KP_4,            KC_KP_5,            KC_KP_6,            KC_KP_DOT,          KC_KP_COMMA,
    KC_LCBR,            KC_RCBR,            KC_LBRC,            KC_RBRC,            KC_LPRN,            KC_RPRN,                                                     KC_TAB,             KC_KP_1,            KC_KP_2,            KC_KP_3,            KC_KP_PLUS,         KC_KP_SLASH,
    TO(0),              KC_BSLS,            KC_LGUI,            KC_NO,              KC_BSPC,                               TO(0),               KC_TAB,                                  KC_KP_0,            KC_DOWN,            KC_UP,              KC_LEFT,            KC_RIGHT,
                                                                                    OSL(4),             KC_ENTER,          KC_NO,               KC_EQUAL,            KC_TAB,             KC_SPC
  ),

  [4] = LAYOUT_moonlander(
    KC_HASH,            KC_9,               KC_5,               KC_1,               KC_3,               KC_7,              TO(0),               TG(3),               KC_6,               KC_2,               KC_0,               KC_4,               KC_8,               KC_AT,
    LALT_T(KC_Z),       KC_X,               KC_G,               KC_L,               KC_C,               KC_B,              LGUI(KC_GRV),        TG(3),               KC_MINUS,           KC_U,               KC_O,               KC_Y,               KC_K,               LALT_T(KC_Q),
    OSL(1),             KC_R,               KC_S,               KC_N,               KC_D,               KC_W,              LT(0,KC_LBRC),       LT(0,KC_RBRC),       LALT(KC_BSPC),      KC_A,               KC_E,               KC_I,               KC_H,               OSL(1),
    LCTL_T(KC_Z),       LGUI_T(KC_J),       KC_F,               KC_M,               KC_P,               KC_V,                                                        KC_QUES,            QMKLS,              FRMWR,              FLWHD,              LSFT_T(KC_DQUO),    LALT_T(KC_SLSH),
    LALT_T(KC_HOME),    LSFT_T(KC_END),     KC_LEFT,            KC_RIGHT,           KC_BSPC,                               MEH_T(KC_ESC),       HYPR_T(TG(1)),                           KC_DEL,             KC_DOWN,            KC_UP,              LGUI_T(KC_NO),      LCTL_T(KC_MPLY),
                                                                                    LT(3,KC_T),         KC_ENTER,          KC_NO,               KC_TAB,              KC_TAB,             LT(3,KC_SPC)
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][4] = {

    [0] = { {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255}, {171,252,255} },

    [1] = { {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255} },

    [2] = { {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255}, {82,252,255} },

    [3] = { {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255}, {82,25,255} },

    [4] = { {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255}, {243,255,255} },
};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        case ELPS:
        if (record->event.pressed) {
            SEND_STRING (SS_LALT(";"));
        }

        break;
        case QMKLS:
        if (record->event.pressed) {
            SEND_STRING ("cd Documents/qmk_firmware");
        }

        break;
        case FRMWR:
        if (record->event.pressed) {
            SEND_STRING ("qmk compile -kb moonlander -km FlowHD");
        }

        break;
        case FLWHD:
        if (record->event.pressed) {
            SEND_STRING ("cd keyboards/moonlander/keymaps/FlowHD");
        }

        break;
        case QWRT:
        if (record->event.pressed) {
            SEND_STRING (SS_TAP(X_ESC));
            layer_invert(2);
            return false;
        }

        break;
        case SLCTALL:
        if (record->event.pressed) {
            tap_code16(LGUI(KC_A)); // Select All 
            return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case UNDO:
        if (record->event.pressed) {
            tap_code16(LGUI(KC_Z)); // Send Cmd-Z for Undo 
            return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case COPY:
        if (record->event.pressed) {
            tap_code16(LGUI(KC_C)); // Send Cmd-C for Copy
            return false;
        }
        return true;             // Return true for normal processing of tap keycode
    
        break;
        case CUT:
        if (record->event.pressed) {
            tap_code16(LGUI(KC_X)); // Send Cmd-X for Cut 
            return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break; 
        case PASTE:
        if (record->event.pressed) {
            tap_code16(LGUI(KC_V)); // Send Cmd-V for Paste
            return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case LT(0,KC_LBRC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN); // Hold [ to send (
                return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case LT(0,KC_RBRC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN); // Hold ] to send )
                return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case LGUI_T(KC_DQUO):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DQUO); // Left Command Key on Hold
                return false;        // Return false to ignore further processing of key
        }
        return true;             // Return true for normal processing of tap keycode

        break;
        case LT(0,KC_MINUS):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_MPLY); // Hold ? to send Play/Pause 
                return false;
        }
        return true;             // Return true for normal processing of tap keycode

        break;
    }
    return true;
}
