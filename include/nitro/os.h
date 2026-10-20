// NitroSDK OS functions used by the game so far
#ifndef NITRO_OS_H
#define NITRO_OS_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void DC_FlushRange(const void *startAddr, u32 nBytes);

#ifdef __cplusplus
}
#endif

#endif // NITRO_OS_H
