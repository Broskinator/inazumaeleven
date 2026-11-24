#include "match/UnkClass_0208351c.hpp"

#include "nitro/fx.h"

extern "C" u16 func_02084094(fx32 *segment);
extern "C" void func_020841d8(MatchPoint *point);
extern "C" BOOL func_0208488c(MatchPoint *a, MatchPoint *b, MatchPoint *c);
extern "C" void *data_020af44c[];     // (the vtable)

extern "C" void MI_CpuFill8(void);
extern "C" void _ZN15MatchPlayerList13func_02083060Ev(void);
extern "C" void _ZN15MatchPlayerList13func_020830a8Ev(void);
extern "C" void _ZN15MatchPlayerList13func_020832c8Ev(void);
extern "C" void _ZN15MatchPlayerList13func_0208331cEP11MatchPlayer(void);
extern "C" void _ZdlPv(void);
extern "C" void FX_Div(void);
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

asm BOOL UnkClass_0208351c::func_020838d0(fx32 *a, fx32 *b, MatchPoint *out)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r1
    mov r10, r0
    mov r8, r2
    bl func_02084094
    mov r4, r0
    mov r0, r9
    bl func_02084094
    mov r5, r0
    cmp r8, #0
    beq @L_0208390c
    mov r0, r8
    mov r1, #0
    mov r2, #8
    bl MI_CpuFill8
@L_0208390c:
    ldr r0, =0x7fff
    and r1, r4, r0
    and r0, r5, r0
    cmp r1, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r8, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4, asr #4
    mov r4, r0, lsl #1
    add r1, r4, #1
    mov r0, r5, asr #4
    mov r2, r0, lsl #1
    add r0, r2, #1
    ldr r3, =FX_SinCosTable_
    mov r1, r1, lsl #1
    ldrsh r6, [r3, r1]
    mov r4, r4, lsl #1
    mov r1, r2, lsl #1
    mov r0, r0, lsl #1
    cmp r6, #0
    ldrsh r5, [r3, r4]
    ldrsh r4, [r3, r1]
    ldrsh r7, [r3, r0]
    beq @L_02083a2c
    smull r0, r4, r6, r4
    adds r12, r0, #0x800
    ldr r3, [r9]
    ldr r1, [r9, #4]
    ldr r0, [r10, #4]
    adc r9, r4, #0
    mov r4, r12, lsr #0xc
    orr r4, r4, r9, lsl #20
    ldr r2, [r10]
    sub r0, r1, r0
    sub r1, r3, r2
    smull r1, r2, r4, r1
    adds r3, r1, #0x800
    smull r1, r0, r7, r0
    adc r2, r2, #0
    adds r1, r1, #0x800
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    smull r1, r0, r6, r1
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    smull r12, r9, r7, r5
    adc r0, r0, #0
    adds r7, r12, #0x800
    mov r12, r1, lsr #0xc
    adc r1, r9, #0
    mov r7, r7, lsr #0xc
    orr r7, r7, r1, lsl #20
    orr r3, r3, r2, lsl #20
    orr r12, r12, r0, lsl #20
    sub r0, r3, r12
    sub r1, r4, r7
    bl FX_Div
    mov r4, r0
    smull r1, r0, r4, r5
    adds r1, r1, #0x800
    adc r2, r0, #0
    mov r0, r1, lsr #0xc
    mov r1, r6
    orr r0, r0, r2, lsl #20
    bl FX_Div
    ldr r2, [r10]
    ldr r1, [r10, #4]
    add r2, r4, r2
    b @L_02083ae0
@L_02083a2c:
    smull r0, r5, r7, r5
    adds r12, r0, #0x800
    ldr r3, [r10]
    ldr r1, [r10, #4]
    ldr r0, [r9, #4]
    adc r10, r5, #0
    mov r5, r12, lsr #0xc
    orr r5, r5, r10, lsl #20
    ldr r2, [r9]
    sub r0, r1, r0
    sub r1, r3, r2
    smull r1, r2, r5, r1
    adds r3, r1, #0x800
    smull r1, r0, r6, r0
    adc r2, r2, #0
    adds r1, r1, #0x800
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    smull r1, r0, r7, r1
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    smull r12, r10, r6, r4
    adc r0, r0, #0
    adds r6, r12, #0x800
    mov r12, r1, lsr #0xc
    adc r1, r10, #0
    mov r6, r6, lsr #0xc
    orr r6, r6, r1, lsl #20
    orr r3, r3, r2, lsl #20
    orr r12, r12, r0, lsl #20
    sub r0, r3, r12
    sub r1, r5, r6
    bl FX_Div
    mov r5, r0
    smull r1, r0, r5, r4
    adds r1, r1, #0x800
    adc r2, r0, #0
    mov r0, r1, lsr #0xc
    mov r1, r7
    orr r0, r0, r2, lsl #20
    bl FX_Div
    ldr r2, [r9]
    ldr r1, [r9, #4]
    add r2, r5, r2
@L_02083ae0:
    add r0, r0, r1
    str r0, [r8, #4]
    str r2, [r8]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
