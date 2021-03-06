/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0001
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0100
#define MANUFACTURER    Hinnerson
#define PRODUCT         MH
#define DESCRIPTION     Split 65 percent staggered keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6}
#define MATRIX_COL_PINS { B6, D5, C7, B5, B4, D7, D6, D4}
#define MATRIX_ROW_PINS_RIGHT { F4, D4, E6, D7, B4}
#define MATRIX_COL_PINS_RIGHT { F5, F6, F7, B1, B3, B2, B6, B5}

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

//#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define MASTER_LEFT

#define C6_AUDIO

/* ws2812 RGB LED */
#define RGB_DI_PIN D2
#define RGBLED_NUM 3    // Number of LEDs
#define RGBLED_SPLIT { 1, 3 }
