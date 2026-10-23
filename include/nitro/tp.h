// NitroSDK TP (touch screen)
#ifndef NITRO_TP_H
#define NITRO_TP_H

#include "nitro/types.h"

typedef struct TPData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;

#endif // NITRO_TP_H
