#pragma once

#include "quantum.h"

#ifdef KEYBOARD_HINNERSON_MH_NUM_REV1
    #include "rev1.h"
#endif

// Used to create a keymap using only KC_ prefixed keys
#define LAYOUT_kc( \
    K00, K01, K02, K03, \
    K10, K11, K12, K13, \
    K20, K21, K22, \
    K30, K31, K32, \
    K40,      K42, K43  \
    ) \
    LAYOUT( \
        { K00,   K01,   K02,   K03 }, \
        { K10,   K11,   K12,   K13 }, \
        { K20,   K21,   K22 }, \
        { K30,   K31,   K32 }, \
        { K40,   K42,   K43 } \
    )
