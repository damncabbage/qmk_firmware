#include QMK_KEYBOARD_H

// my fingers are tired
#define XXXX XXXXXXX
#define ____ _______

enum layer_number {
  _QWERTY = 0,
  _LEFT,
  _RIGHT,
  _BOTH,
};

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | `    |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  +   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |LCtrl | LGUI |LEFT  | /Enter  /       \Space \  |RIGHT  |BackSP| LAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
// TODO: check RBG_HUI
/*
[_QWERTY] = LAYOUT( \
  KC_GRV,  KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
  KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_PLUS, \
  KC_ESC,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, \
                     KC_LCTRL, KC_LGUI, MO(_LEFT), KC_ENT,     KC_SPC, MO(_RIGHT), KC_BSPC, KC_LALT \
),
*/
[_QWERTY] = LAYOUT( \
  /* TODO: consider TAB, LSFT, LCTRL on the left col, and putting ESC on LEFT+RIGHT */
  XXXX,    XXXX,  XXXX,  XXXX,  XXXX,  XXXX,             XXXX,  XXXX,  XXXX,    XXXX,   XXXX,    XXXX, \
  KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,             KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_BSPC, \
  KC_ESC,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,             KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, XXXX, XXXX, KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_LALT, \
                 XXXX, KC_LCTRL, MO(_LEFT), KC_ENT, KC_SPC, MO(_RIGHT), KC_LGUI, XXXX \
),
[_LEFT] = LAYOUT( \
  XXXX,     XXXX,    XXXX,  XXXX,    XXXX,   XXXX,                XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX, \
  KC_GRV,   KC_1,    KC_2,  KC_3,    KC_4,   KC_5,                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
  XXXX,     XXXX,    XXXX,  XXXX,    XXXX,   XXXX,    XXXX, XXXX, XXXX,    XXXX,    XXXX,    KC_LBRC, KC_RBRC, KC_EQL, \
  XXXX,     XXXX,    XXXX,  XXXX,    XXXX,   XXXX,    XXXX, XXXX, XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    KC_BSLS, \
                                    XXXX, ____, ____, ____, ____,  ____, ____, XXXX \
),
[_RIGHT] = LAYOUT( \
  XXXX,   XXXX,    XXXX,  XXXX,    XXXX,   XXXX,              XXXX,    XXXX,    XXXX,   XXXX,    XXXX,    XXXX, \
  XXXX,   KC_F1,   KC_F2, KC_F3,   KC_F4,  KC_F5,             KC_F6,   KC_F7,   KC_F8,  KC_F9,   KC_F10,  KC_F11, \
  XXXX,   XXXX,    XXXX,  XXXX,    XXXX,   XXXX,              KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, XXXX,    XXXX, \
  XXXX,   XXXX,    XXXX,  XXXX,    XXXX,   XXXX,  XXXX, XXXX, XXXX,    XXXX,    XXXX,   XXXX,    XXXX,    XXXX, \
                                XXXX, ____, ____, ____, ____, ____, ____, XXXX \
),
[_BOTH] = LAYOUT( \
  XXXX,    XXXX,    XXXX,    XXXX,    XXXX,  XXXX,             XXXX,  XXXX,  XXXX,    XXXX,   XXXX,    XXXX, \
  RGB_TOG, RBG_HUI, RGB_SAI, RGB_VAI, XXXX,  XXXX,             XXXX,  XXXX,  XXXX,    XXXX,   XXXX,    XXXX, \
  XXXX,    RGB_HUD, RGB_SAD, RGB_VAD, XXXX,  XXXX,             XXXX,  XXXX,  XXXX,    XXXX,   XXXX,    XXXX, \
  XXXX,    XXXX,    XXXX,    XXXX,    XXXX,  XXXX, XXXX, XXXX, XXXX,  XXXX,  XXXX,    XXXX,   XXXX,    XXXX, \
                                 XXXX, ____, ____, ____, ____, ____, ____, XXXX \
)
};
/* clang-format on */

layer_state_t layer_state_set_user(layer_state_t state) {
  layer_state_t new_state = update_tri_layer_state(state, _LEFT, _RIGHT, _BOTH);
  switch (get_highest_layer(new_state)) {
    case _LEFT:
        rgblight_sethsv(HSV_GOLD);
        break;
    case _RIGHT:
        rgblight_sethsv(HSV_CYAN);
        break;
    case _BOTH:
        rgblight_sethsv(HSV_TURQUOISE);
        break;
    default: // for any other layers, or the default layer
        rgblight_sethsv(HSV_MAGENTA);
        break;
  }
  return new_state;
}

// SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

#define ANIM_FRAMES (2)
#define ANIM_FRAME_DIMENSIONS (512)

uint8_t current_frame = 0;

static void advance_animation(void) {
  current_frame = (current_frame + 1) % ANIM_FRAMES;
}

// NOTE: PEACHEY APPROVED THIS. IF THERE ARE BUGS, IT'S THEIR FAULT.
static void render_bongo_cat(void) {
  // All the bongocat animations !!!
  static const char PROGMEM animation[ANIM_FRAMES][ANIM_FRAME_DIMENSIONS] = {
      {0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   128, 128, 0,  0,   0,   0,   0,   128, 64,
       64,  32, 32,  32,  32,  16,  16,  16,  16, 8,   4,   2,   1,   1,   2,
       12,  48, 64,  128, 0,   0,   0,   0,   0,  0,   0,   248, 248, 248, 248,
       0,   0,  0,   0,   0,   128, 128, 0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   128, 128, 128, 0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   30,  225, 0,
       0,   1,  1,   2,   2,   129, 128, 128, 0,  0,   128, 128, 0,   0,   0,
       0,   0,  0,   0,   0,   0,   128, 0,   48, 48,  0,   0,   1,   1,   2,
       4,   8,  16,  32,  67,  135, 7,   1,   0,  184, 188, 190, 159, 95,  95,
       79,  76, 32,  32,  32,  32,  16,  16,  16, 16,  8,   8,   8,   8,   8,
       4,   4,  4,   4,   4,   2,   2,   2,   2,  1,   1,   1,   1,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   128, 112, 12,  3,   0,  0,   24,  6,   5,   152, 153,
       132, 67, 124, 65,  65,  64,  64,  32,  33, 34,  18,  17,  17,  17,  9,
       8,   8,  8,   8,   4,   4,   8,   8,   16, 16,  16,  16,  16,  17,  15,
       1,   61, 124, 252, 252, 252, 252, 252, 60, 12,  0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   128, 128, 128, 128,
       128, 64, 64,  64,  64,  64,  32,  32,  32, 32,  32,  16,  16,  16,  16,
       16,  8,  8,   8,   8,   8,   4,   4,   4,  4,   4,   2,   3,   2,   2,
       1,   1,  1,   1,   1,   1,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   1,   3,   3,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0},
      {0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   128, 128, 0,  0,   0,   0,   0,   128, 64,
       64,  32,  32,  32,  32,  16,  16,  16,  16, 8,   4,   2,   1,   1,   2,
       12,  48,  64,  128, 0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   128, 128, 128, 0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   30,  225, 0,
       0,   1,   1,   2,   2,   1,   0,   0,   0,  0,   128, 128, 0,   0,   0,
       0,   0,   0,   0,   0,   0,   128, 0,   48, 48,  0,   0,   1,   225, 26,
       6,   9,   49,  53,  1,   138, 124, 0,   0,  128, 128, 128, 128, 64,  64,
       64,  64,  32,  32,  32,  32,  16,  16,  16, 16,  8,   8,   8,   8,   8,
       4,   4,   4,   4,   4,   2,   2,   2,   2,  1,   1,   1,   1,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   128, 112, 12,  3,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   1,   1,   0,   64,  160, 33, 34,  18,  17,  17,  17,  9,
       8,   8,   8,   8,   4,   4,   4,   4,   4,  4,   2,   2,   2,   1,   1,
       1,   1,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   128, 128, 128, 128,
       128, 64,  64,  64,  64,  64,  32,  32,  32, 32,  32,  16,  16,  16,  16,
       16,  8,   8,   8,   8,   8,   4,   4,   4,  4,   4,   2,   3,   122, 122,
       121, 121, 121, 121, 57,  49,  2,   2,   4,  4,   8,   8,   8,   136, 136,
       135, 128, 0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
       0,   0},
  };
  oled_write_raw_P(animation[current_frame], ANIM_FRAME_DIMENSIONS);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);

void oled_task_user(void) {
  render_bongo_cat();
}
#endif  // OLED_DRIVER_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_DRIVER_ENABLE
    advance_animation();
#endif
  //#ifdef RGBLIGHT_ENABLE
  //  oled_write_ln(read_layer_state(), false);
  //  oled_write_ln(read_keylog(), false);
  //  oled_write_ln(read_keylogs(), false);
  //#endif
  }
  return true;
}

//#ifdef RGBLIGHT_ENABLE
//void keyboard_post_init_user(void) {
//  rgblight_sethsv(RGBLIGHT_DEFAULT_HUE);
//}
//#endif // RGBLIGHT_ENABLE
