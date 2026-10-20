// NitroSDK MI (memory) functions used by the game so far
#ifndef NITRO_MI_H
#define NITRO_MI_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void MIi_CpuClearFast(u32 data, void *destp, u32 size);
void MI_CpuFill8(void *dest, u8 data, u32 size);

static inline void MI_CpuClearFast(void *destp, u32 size)
{
    MIi_CpuClearFast(0, destp, size);
}

#ifdef __cplusplus
}
#endif

#endif // NITRO_MI_H
