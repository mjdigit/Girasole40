#pragma once

#define TAPPING_TERM 220
#define PERMISSIVE_HOLD

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define VIAL_KEYBOARD_UID {0xFB, 0x86, 0x83, 0x8C, 0x67, 0x61, 0x82, 0x81}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 9}

// The Vial GUI can edit up to 16 combos. Seven defaults are installed when
// EEPROM is initialized; the remaining entries start empty.
#define VIAL_COMBO_ENTRIES 16
