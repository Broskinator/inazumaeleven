#include "match/UnkClass_0208351c.hpp"

#include "nitro/fx.h"
#include "nitro/mi.h"

extern "C" u16 func_02084094(fx32 *segment);
extern "C" void func_020841d8(MatchPoint *point);
extern "C" BOOL func_0208488c(MatchPoint *a, MatchPoint *b, MatchPoint *c);
extern "C" void *data_020af44c[];     // (the vtable)

extern "C" void _ZN15MatchPlayerList13func_02083060Ev(void);
extern "C" void _ZN15MatchPlayerList13func_020830a8Ev(void);
extern "C" void _ZN15MatchPlayerList13func_020832c8Ev(void);
extern "C" void _ZN15MatchPlayerList13func_0208331cEP11MatchPlayer(void);
extern "C" void _ZdlPv(void);
extern "C" fx32 FX_Div(fx32 numer, fx32 denom);
extern "C" u16 FX_Atan2Idx(fx32 y, fx32 x);
extern "C" int func_ov015_021319b0(MatchPlayer *player);
extern "C" BOOL func_ov015_02131bb4(int team);
extern "C" int func_ov015_021335c0(void);

UnkClass_0208351c *UnkClass_0208351c::func_0208351c()
{
    func_02083060();
    vtable = data_020af44c;
    return this;
}

UnkClass_0208351c *UnkClass_0208351c::func_0208353c()
{
    func_020830a8();
    return this;
}

UnkClass_0208351c *UnkClass_0208351c::func_02083550()
{
    func_020830a8();
    operator delete(this);
    return this;
}

void UnkClass_0208351c::func_0208356c()
{
    func_020832c8();
}

BOOL UnkClass_0208351c::func_02083578(MatchPlayer *player)
{
    int mode = func_ov015_021335c0();

    if (mode == 10) {
        return func_ov015_02131bb4(func_ov015_021319b0(player)) ? TRUE : FALSE;
    }
    if (mode == 11) {
        return func_ov015_02131bb4(func_ov015_021319b0(player)) ? FALSE : TRUE;
    }
    return func_0208331c(player);
}

BOOL UnkClass_0208351c::func_020835e0(int team)
{
    int mode = func_ov015_021335c0();

    if (mode == 10) {
        return func_ov015_02131bb4(team) ? TRUE : FALSE;
    }
    if (mode == 11) {
        return func_ov015_02131bb4(team) ? FALSE : TRUE;
    }
    return TRUE;
}

int UnkClass_0208351c::func_02083634()
{
    return 0;
}

// (puts the segment's end at length from its start, keeping its direction)
extern "C" void func_0208363c(fx32 *segment, fx32 length)
{
    int idx = func_02084094(segment) >> 4;

    segment[2] = segment[0] + FX_Mul(length, FX_CosIdx(idx));
    segment[3] = segment[1] + FX_Mul(length, FX_SinIdx(idx));
}

// (moves the segment's ends to length from its middle, keeping its direction)
extern "C" void func_020836b4(fx32 *segment, fx32 length)
{
    int idx = func_02084094(segment) >> 4;
    fx32 dx = FX_Mul(length, FX_CosIdx(idx));
    fx32 dy = FX_Mul(length, FX_SinIdx(idx));
    fx32 cx = UnkClass_0208351c::func_02083750(segment[0], segment[2]);
    fx32 cy = UnkClass_0208351c::func_02083750(segment[1], segment[3]);

    segment[0] = cx - dx;
    segment[1] = cy - dy;
    segment[2] = cx + dx;
    segment[3] = cy + dy;
}

int UnkClass_0208351c::func_02083750(int a, int b)
{
    int d;

    if (a >= b) {
        d = a - b;
        if (d < 0) {
            d = -d;
        }
        return b + (d >> 1);
    }
    d = b - a;
    if (d < 0) {
        d = -d;
    }
    return a + (d >> 1);
}

// (nonmatching: the ROM stores the first segment after loading the next call's arguments (cos/sin in r3/r2))
#ifdef NONMATCHING
// (the perpendicular bisector of pq, as a segment of length 16 from the middle of pq)
static inline void UnkClass_0208351c_Bisector(fx32 *seg, MatchPoint *p, MatchPoint *q)
{
    fx32 x = UnkClass_0208351c::func_02083750(p->x, q->x);
    fx32 y = UnkClass_0208351c::func_02083750(p->y, q->y);
    int idx = (u16)(FX_Atan2Idx(p->y - q->y, p->x - q->x) + 0x4000) >> 4;

    seg[0] = x;
    seg[1] = y;
    seg[2] = x + (FX_CosIdx(idx) << 4);
    seg[3] = y + (FX_SinIdx(idx) << 4);
}

// (the centre of the circle through a, b and c: where the perpendicular bisectors of ab and ac
// cross; FALSE when the points are on a line)
BOOL UnkClass_0208351c::func_02083778(MatchPoint *out, MatchPoint *a, MatchPoint *b, MatchPoint *c)
{
    fx32 seg1[4];
    fx32 seg2[4];

    if (!func_0208488c(a, b, c)) {
        func_020841d8(out);
        return FALSE;
    }
    UnkClass_0208351c_Bisector(seg1, a, b);
    UnkClass_0208351c_Bisector(seg2, a, c);
    return func_020838d0(seg1, seg2, out);
}
#else
asm BOOL UnkClass_0208351c::func_02083778(MatchPoint *out, MatchPoint *a, MatchPoint *b, MatchPoint *c)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r5, r1
    mov r9, r2
    mov r4, r3
    mov r6, r0
    mov r0, r5
    mov r1, r9
    mov r2, r4
    bl func_0208488c
    cmp r0, #0
    bne @L_020837bc
    mov r0, r6
    bl func_020841d8
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_020837bc:
    ldr r0, [r5]
    ldr r1, [r9]
    bl func_02083750
    mov r8, r0
    ldr r0, [r5, #4]
    ldr r1, [r9, #4]
    bl func_02083750
    ldr r2, [r5, #4]
    ldr r1, [r9, #4]
    mov r7, r0
    sub r0, r2, r1
    ldr r2, [r5]
    ldr r1, [r9]
    sub r1, r2, r1
    bl FX_Atan2Idx
    add r0, r0, #0x4000
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    mov r1, r0, lsl #1
    add r0, r1, #1
    mov r2, r0, lsl #1
    ldr r9, =FX_SinCosTable_
    mov r1, r1, lsl #1
    ldrsh r3, [r9, r2]
    ldrsh r2, [r9, r1]
    ldr r0, [r5]
    add r3, r8, r3, lsl #4
    add r2, r7, r2, lsl #4
    ldr r1, [r4]
    str r8, [sp, #0x10]
    str r7, [sp, #0x14]
    str r3, [sp, #0x18]
    str r2, [sp, #0x1c]
    bl func_02083750
    mov r8, r0
    ldr r0, [r5, #4]
    ldr r1, [r4, #4]
    bl func_02083750
    mov r7, r0
    ldr r0, [r4, #4]
    ldmia r5, {r2, r3}
    ldr r1, [r4]
    sub r0, r3, r0
    sub r1, r2, r1
    bl FX_Atan2Idx
    add r0, r0, #0x4000
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    mov r3, r0, lsl #1
    add r0, r3, #1
    mov r0, r0, lsl #1
    ldrsh r1, [r9, r0]
    mov r0, r3, lsl #1
    ldrsh r0, [r9, r0]
    add r1, r8, r1, lsl #4
    str r1, [sp, #8]
    add r0, r7, r0, lsl #4
    str r0, [sp, #0xc]
    mov r2, r6
    add r0, sp, #0x10
    add r1, sp, #0
    str r8, [sp]
    str r7, [sp, #4]
    bl func_020838d0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
#endif

// (where the lines through the segments a and b cross, in out: FALSE when they are parallel)
BOOL UnkClass_0208351c::func_020838d0(fx32 *a, fx32 *b, MatchPoint *out)
{
    int angleA = func_02084094(a);
    int angleB = func_02084094(b);
    fx32 sinA;
    fx32 cosA;
    fx32 sinB;
    fx32 cosB;
    fx32 x;
    fx32 y;

    if (out != NULL) {
        MI_CpuClear8(out, sizeof(MatchPoint));
    }
    if ((angleA & 0x7FFF) == (angleB & 0x7FFF)) {
        return FALSE;
    }
    if (out == NULL) {
        return TRUE;
    }
    sinA = FX_SinIdx(angleA >> 4);
    sinB = FX_SinIdx(angleB >> 4);
    cosA = FX_CosIdx(angleA >> 4);
    cosB = FX_CosIdx(angleB >> 4);
    if (cosA != 0) {
        x = FX_Div(FX_Mul(FX_Mul(cosA, sinB), b[0] - a[0]) - FX_Mul(cosA, FX_Mul(cosB, b[1] - a[1])),
                   FX_Mul(cosA, sinB) - FX_Mul(cosB, sinA));
        y = FX_Div(FX_Mul(x, sinA), cosA);
        x += a[0];
        y += a[1];
    } else {
        x = FX_Div(FX_Mul(FX_Mul(cosB, sinA), a[0] - b[0]) - FX_Mul(cosB, FX_Mul(cosA, a[1] - b[1])),
                   FX_Mul(cosB, sinA) - FX_Mul(cosA, sinB));
        y = FX_Div(FX_Mul(x, sinB), cosB);
        x += b[0];
        y += b[1];
    }
    out->x = x;
    out->y = y;
    return TRUE;
}
