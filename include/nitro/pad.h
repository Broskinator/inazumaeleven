// NitroSDK PAD (keys)
#ifndef NITRO_PAD_H
#define NITRO_PAD_H

#include "nitro/types.h"

#define REG_KEYINPUT (*(volatile u16 *)0x04000130)
#define HW_BUTTON_XY_BUF (*(volatile u16 *)0x02FFFFA8)     // X, Y, debug and the lid (from the ARM7)

#define PAD_KEY_LEFT 0x0020
#define PAD_KEY_UP 0x0040
#define PAD_KEY_MASK 0x2FFF
#define PAD_DETECT_FOLD_MASK 0x8000

static inline u16 PAD_Read(void)
{
    return (u16)(((REG_KEYINPUT | HW_BUTTON_XY_BUF) ^ PAD_KEY_MASK) & PAD_KEY_MASK);
}

// TRUE when the lid is closed
static inline BOOL PAD_DetectFold(void)
{
    return (BOOL)((HW_BUTTON_XY_BUF & PAD_DETECT_FOLD_MASK) >> 15);
}

#endif // NITRO_PAD_H
