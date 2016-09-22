#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default - Model M SSK - Mac Layout
     * NOTE: ESC key broken, temporary fix until bolt mod
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.     ,-----------.
     * |F1 |   | ` |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|     |Pwr|Slp|Wak|
     * `---'   `---------------' `---------------' `---------------' `-----------'     `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   \   | |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bcksp| |Del|End|PgD| |  7|  8|  9|   |
     * |-----------------------------------------------------------| `-----------' |-----------|  +|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
     * | Alt |   | Gui |         Space         | Gui |   |   | Alt | |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    KEYMAP(
    F1 ,GRV,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,     DEL, END, PGDN,    P7,  P8,  P9,
    LCTL,A,   S,   D,   F, FN0,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          UP,           P1,  P2,  P3,
    LALT,LALT,LGUI,          SPC,                     RGUI,RALT,APP, RALT,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    /* 1: Layer 1 - Vim Arrows and F keys
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |   |   |Esc|   |   |   |Hom|Up |End|Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |Lef|Dow|Up |Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |PgU|PgD|`  |~  |   |Men|          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,BRK,
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TRNS,TRNS,TRNS,ESC, TRNS,TRNS,TRNS,HOME,TRNS, END, PSCR,SLCK,PAUS,INS,      DEL, END, PGDN,    P7,  P8,  P9,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     TRNS,                        P4,  P5,  P6,  PPLS,
    TRNS,TRNS,TRNS,TRNS,TRNS,PGUP, PGDN,GRV, FN1, TRNS,APP,           TRNS,          UP,           P1,  P2,  P3,
    TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
};

const action_t PROGMEM fn_actions[] = {
  [0]  = ACTION_LAYER_TAP_KEY(1, KC_G),
  [1]  = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde
};
