// NitroSDK MI (memory) functions used by the game so far
#ifndef NITRO_MI_H
#define NITRO_MI_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void MIi_CpuClearFast(u32 data, void *destp, u32 size);
void MI_CpuFill8(void *dest, u8 data, u32 size);
void MI_CpuCopy8(const void *src, void *dest, u32 size);
void MIi_CpuCopy32(const void *src, void *dest, u32 size);
void MI_UncompressLZ8(const void *srcp, void *destp);
void MI_UncompressHuffman(const void *srcp, void *destp);

static inline void MI_CpuClearFast(void *destp, u32 size)
{
    MIi_CpuClearFast(0, destp, size);
}

static inline void MI_CpuClear8(void *dest, u32 size)
{
    MI_CpuFill8(dest, 0, size);
}

#ifdef __cplusplus
}
#endif

#endif // NITRO_MI_H
