#pragma once

#include "mh_num.h"

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_NUM( \
  A1, A2, A3, A4, \
  B1, B2, B3, B4, \
  C1, C2, C3,     \
  D1, D2, D3,     \
  E1,     E3, E4 \
  ) \
  { \
    { A1,   A2,      A3,   A4    }, \
    { B1,   B2,      B3,   B4    }, \
    { C1,   C2,      C3,   KC_NO }, \
    { D1,   D2,      D3,   KC_NO }, \
    { E1,   KC_NO,   E3,   E4    } \
  }

