#ifndef NITRO_FX_H
#define NITRO_FX_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

// fixed-point numbers with 12 fractional bits
typedef s32 fx32;
typedef s64 fx64;
typedef s16 fx16;

#define FX32_SHIFT  12
#define FX32_ONE    ((fx32)0x00001000)

typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;

extern const fx16 FX_SinCosTable_[];     // (sine and cosine of 4096 angles, interleaved)

static inline fx16 FX_SinIdx(int idx)
{
    return FX_SinCosTable_[idx * 2];
}

static inline fx16 FX_CosIdx(int idx)
{
    return FX_SinCosTable_[idx * 2 + 1];
}

static inline fx32 FX_Mul(fx32 v1, fx32 v2)
{
    return (fx32)(((fx64)v1 * v2 + 0x800LL) >> FX32_SHIFT);
}

#ifdef __cplusplus
}
#endif

#endif // NITRO_FX_H
