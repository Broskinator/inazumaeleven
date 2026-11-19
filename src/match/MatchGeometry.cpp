#include "match/MatchGeometry.hpp"
#include "match/Match.hpp"
#include "nitro/mi.h"
struct S02084be8 { u8 pad[0x14]; s32 x14; s32 x18; s32 x1c; s32 x20; s32 x24; s32 x28; s32 x2c; };
struct V02084f84 { s32 x, y, z; };
struct S02084f84 { V02084f84 a; V02084f84 b[0x60]; s32 c; s32 pad[2]; V02084f84 d[4]; };
struct V12 { s32 x, y, z; };

extern "C" u16 FX_Atan2Idx(fx32 y, fx32 x);     // (the direction of (x, y))
extern "C" fx32 data_020c4ebc[4];     // (the field's rectangle)

extern "C" int func_ov015_02131970(MatchPlayer *player);
extern "C" int func_ov015_021319b0(MatchPlayer *player);
extern "C" u8 data_020c4eec[];
extern "C" u8 data_020c4efc[];
extern "C" u8 data_020c4f0c[];
extern "C" u8 data_020c4f1c[];
extern "C" u8 data_020c4f3c[];
extern "C" u8 data_020c4f44[];
extern "C" u8 data_020c4ecc[][0x10];
extern "C" u8 data_020ca766[];
extern "C" char data_020c4938[];

extern "C" void func_02083afc(void);
extern "C" BOOL func_02083e24(int value);
extern "C" BOOL func_02083e34(MatchPlayer *player);
extern "C" BOOL func_02083e44(int value);
extern "C" BOOL func_02083e54(MatchPlayer *player);
extern "C" u8 *func_02083e64(int side);
extern "C" u8 *func_02083e7c(int side);
extern "C" u8 *func_02083e94(int side);
extern "C" u8 *func_02083eac(int side);
extern "C" void func_02083ec4(void);
extern "C" s32 func_02083fe8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" u16 func_02084094(fx32 *segment);
extern "C" u16 func_020840b4(MatchPoint *a, MatchPoint *b);
extern "C" int func_020840e0(int a, int b);
extern "C" s32 func_02084100(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_0208413c(s32 arg0, s32 arg1);
extern "C" s32 func_02084188(s32 arg0, s32 arg1, s32 arg2);
extern "C" u8 func_020841c8(int i);
extern "C" void func_020841d8(MatchPoint *point);
extern "C" void func_020841e8(fx32 arg0, fx32 arg1, s32 arg2, fx32 *arg3);
extern "C" s32 func_02084248(s32 arg0);
extern "C" BOOL func_02084284(int value, int a, int b);
extern "C" s32 func_020842b0(s32 arg0, s32 arg1, s32 arg2);
extern "C" BOOL func_020842f8(fx32 value);
extern "C" BOOL func_02084324(fx32 value);
extern "C" BOOL func_02084350(fx32 x, fx32 y);
extern "C" BOOL func_020843b0(fx32 *x, fx32 *y);
extern "C" s32 func_02084428(u8 *arg0, s32 arg1, s32 arg2);
extern "C" BOOL func_02084470(s32 *arg0, s32 *arg1);
extern "C" BOOL func_020844dc(fx32 x, fx32 y, fx32 marginX, fx32 marginY);
extern "C" s32 func_0208454c(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_020845e0(...);
extern "C" s32 func_020846dc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" BOOL func_02084788(MatchPoint *point);
extern "C" BOOL func_020847b0(MatchPlayer *player);
extern "C" BOOL func_020847d0(int value);
extern "C" BOOL func_020847ec(int value);
extern "C" s32 func_02084808(s32 arg0, s32 arg1, u8 *arg2);
extern "C" BOOL func_0208484c(MatchPoint *a, MatchPoint *b);
extern "C" BOOL func_02084870(MatchPlayer *player);
extern "C" s32 func_0208488c(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_02084900(fx32 *x, fx32 *y, fx32 *rect, fx32 margin);
extern "C" void func_02084958(fx32 *pos, fx32 *rect, fx32 margin);
extern "C" void func_02084970(void);
extern "C" s32 func_02084aec(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02084ba0(u8 *arg0, u8 *arg1);
extern "C" void func_02084be8(S02084be8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_02084c4c(u8 *arg0);
extern "C" s32 func_02084c8c(u8 *obj);
extern "C" s32 func_02084c94(u8 *obj);
extern "C" s32 func_02084ca0(u8 *obj);
extern "C" void func_02084cac(u8 *arg0, V12 arg1);
extern "C" u8 *func_02084cf0(u8 *obj);
extern "C" u8 *func_02084cf8(u8 *obj);
extern "C" void func_02084d00(u8 *obj, VecFx32 v);
extern "C" void func_02084d24(u8 *obj, s32 a, s32 b, s32 c);
extern "C" void func_02084d34(u8 *obj, int value);
extern "C" void func_02084d50(u8 *obj, s32 value, BOOL update);
extern "C" void func_02084d74(u8 *obj, u8 value);
extern "C" void func_02084d7c(u8 *obj, u16 value);
extern "C" BOOL func_02084d94(u8 *obj, u16 flags);
extern "C" void func_02084dac(u8 *obj, int flags);
extern "C" void func_02084dc0(u8 *obj, int flags);
extern "C" BOOL func_02084dd8(u8 *obj);
extern "C" BOOL func_02084de8(u8 *obj);
extern "C" s32 func_02084e08(s32 arg0, s32 arg1);
extern "C" void func_02084e40(u8 *obj, s32 a, s32 b);
extern "C" void func_02084e70(void);
extern "C" void func_02084f84(S02084f84 *arg0, s32 x, s32 y, s32 z);
extern "C" void func_02084fdc(void *data);

extern "C" char gAllocator[];
extern "C" char data_020e88a0[];
extern "C" char data_020f98a0[];
extern "C" s32 MIi_CpuCopyFast(...);
extern "C" s32 _ZN11MatchEngine13func_0206de54Ei(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" void FX_Div(void);
extern "C" void FX_Sqrt(void);
extern "C" void func_02099adc(void);
extern "C" s32 func_ov015_02131854(...);

extern "C" asm void func_02083afc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r0, [r10]
    ldr r3, [r10, #8]
    mov r9, r1
    cmp r0, r3
    ldreq r4, [r10, #4]
    ldreq r1, [r10, #0xc]
    mov r8, r2
    mov r5, #0
    cmpeq r4, r1
    bne @L_02083b88
    ldr r3, [r9]
    ldr r1, [r9, #8]
    cmp r3, r1
    ldreq r2, [r9, #4]
    ldreq r1, [r9, #0xc]
    cmpeq r2, r1
    bne @L_02083b74
    cmp r0, r3
    cmpeq r4, r2
    bne @L_02083b6c
    cmp r8, #0
    strne r0, [r8]
    ldrne r0, [r10, #4]
    strne r0, [r8, #4]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02083b6c:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02083b74:
    mov r0, r10
    mov r10, r9
    mov r9, r0
    mov r5, #1
    b @L_02083ba4
@L_02083b88:
    ldr r1, [r9]
    ldr r0, [r9, #8]
    cmp r1, r0
    ldreq r1, [r9, #4]
    ldreq r0, [r9, #0xc]
    cmpeq r1, r0
    moveq r5, #1
@L_02083ba4:
    mov r0, r10
    bl func_02084094
    mov r6, r0
    mov r0, r9
    bl func_02084094
    mov r7, r0
    cmp r8, #0
    beq @L_02083bd4
    mov r0, r8
    mov r1, #0
    mov r2, #8
    bl MI_CpuFill8
@L_02083bd4:
    ldr r0, =0x7fff
    and r1, r6, r0
    and r0, r7, r0
    cmp r1, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r2, r6
    mov r3, r9
    ldmia r10, {r0, r1}
    bl func_020841e8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r6, #0x8000
    mov r2, r0, lsl #0x10
    ldr r0, [r10, #8]
    ldr r1, [r10, #0xc]
    mov r3, r9
    mov r2, r2, lsr #0x10
    bl func_020841e8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0
    cmp r8, #0
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    beq @L_02083c60
    ldr r1, [r9]
    mov r0, #1
    str r1, [r8]
    ldr r1, [r9, #4]
    str r1, [r8, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02083c60:
    mov r0, r6, asr #4
    mov r5, r0, lsl #1
    add r2, r5, #1
    mov r0, r7, asr #4
    mov r3, r0, lsl #1
    add r1, r3, #1
    ldr r0, =FX_SinCosTable_
    mov r2, r2, lsl #1
    ldrsh r6, [r0, r2]
    mov r5, r5, lsl #1
    mov r2, r3, lsl #1
    mov r1, r1, lsl #1
    cmp r6, #0
    ldrsh r5, [r0, r5]
    ldrsh r11, [r0, r2]
    ldrsh r7, [r0, r1]
    beq @L_02083d5c
    smull r0, r3, r6, r11
    adds r1, r0, #0x800
    ldmia r9, {r2, r11}
    ldr r0, [r10]
    ldr r9, [r10, #4]
    adc r3, r3, r4
    mov r1, r1, lsr #0xc
    sub r9, r11, r9
    orr r1, r1, r3, lsl #20
    sub r0, r2, r0
    smull r0, r2, r1, r0
    adds r0, r0, #0x800
    smull r3, r9, r7, r9
    adc r2, r2, r4
    adds r11, r3, #0x800
    mov r3, r0, lsr #0xc
    adc r0, r9, r4
    mov r9, r11, lsr #0xc
    orr r9, r9, r0, lsl #20
    smull r0, r12, r6, r9
    adds r0, r0, #0x800
    orr r3, r3, r2, lsl #20
    smull r11, r9, r7, r5
    adc r2, r12, r4
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #20
    sub r0, r3, r0
    adds r3, r11, #0x800
    adc r2, r9, r4
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    sub r1, r1, r3
    bl FX_Div
    mov r7, r0
    smull r1, r0, r7, r5
    adds r1, r1, #0x800
    adc r2, r0, r4
    mov r0, r1, lsr #0xc
    mov r1, r6
    orr r0, r0, r2, lsl #20
    bl FX_Div
    ldr r1, [r10]
    add r1, r7, r1
    str r1, [r8]
    ldr r1, [r10, #4]
    b @L_02083e0c
@L_02083d5c:
    smull r0, r3, r7, r5
    adds r1, r0, #0x800
    adc r3, r3, r4
    mov r1, r1, lsr #0xc
    ldmia r10, {r2, r10}
    ldmia r9, {r0, r5}
    sub r5, r10, r5
    orr r1, r1, r3, lsl #20
    sub r0, r2, r0
    smull r0, r2, r1, r0
    adds r0, r0, #0x800
    smull r3, r5, r6, r5
    adc r2, r2, r4
    adds r10, r3, #0x800
    mov r3, r0, lsr #0xc
    adc r0, r5, r4
    mov r5, r10, lsr #0xc
    orr r5, r5, r0, lsl #20
    smull r0, r12, r7, r5
    adds r0, r0, #0x800
    orr r3, r3, r2, lsl #20
    smull r10, r5, r6, r11
    adc r2, r12, r4
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #20
    sub r0, r3, r0
    adds r3, r10, #0x800
    adc r2, r5, r4
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    sub r1, r1, r3
    bl FX_Div
    mov r5, r0
    smull r1, r0, r5, r11
    adds r1, r1, #0x800
    adc r2, r0, r4
    mov r0, r1, lsr #0xc
    mov r1, r7
    orr r0, r0, r2, lsl #20
    bl FX_Div
    ldr r1, [r9]
    add r1, r5, r1
    str r1, [r8]
    ldr r1, [r9, #4]
@L_02083e0c:
    add r0, r0, r1
    str r0, [r8, #4]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" BOOL func_02083e24(int value)
{
    return value == 0;
}

extern "C" BOOL func_02083e34(MatchPlayer *player)
{
    return func_02083e24(func_ov015_02131970(player));
}

extern "C" BOOL func_02083e44(int value)
{
    return value == 0;
}

extern "C" BOOL func_02083e54(MatchPlayer *player)
{
    return func_02083e44(func_ov015_021319b0(player));
}

extern "C" u8 *func_02083e64(int side)
{
    if (side == 0) {
        return data_020c4efc;
    }
    return data_020c4eec;
}

extern "C" u8 *func_02083e7c(int side)
{
    return data_020c4ecc[func_02083e24(side)];
}

extern "C" u8 *func_02083e94(int side)
{
    if (side == 0) {
        return data_020c4f1c;
    }
    return data_020c4f0c;
}

extern "C" u8 *func_02083eac(int side)
{
    if (side == 0) {
        return data_020c4f44;
    }
    return data_020c4f3c;
}

extern "C" asm void func_02083ec4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r3
    rsb r3, r0, #0
    cmp r0, #0
    movge r3, r0
    cmp r3, #0x200000
    bge @L_02083f14
    rsb r3, r1, #0
    cmp r1, #0
    movge r3, r1
    cmp r3, #0x200000
    bge @L_02083f14
    rsb r3, r2, #0
    cmp r2, #0
    movge r3, r2
    cmp r3, #0x200000
    bge @L_02083f14
    mov r3, r6
    bl func_02083fe8
    ldmia sp!, {r4, r5, r6, pc}
@L_02083f14:
    cmp r0, #0
    movge r4, r0, asr #8
    movlt r0, r0, asr #8
    orrlt r4, r0, #0xff000000
    cmp r1, #0
    movge r5, r1, asr #8
    movlt r0, r1, asr #8
    orrlt r5, r0, #0xff000000
    cmp r2, #0
    movge r12, r2, asr #8
    movlt r0, r2, asr #8
    orrlt r12, r0, #0xff000000
    cmp r4, #0
    bne @L_02083f68
    cmp r5, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, r5
    rsb r0, r12, #0
    bl FX_Div
    ldmia sp!, {r4, r5, r6, pc}
@L_02083f68:
    cmp r12, #0
    bne @L_02083f8c
    cmp r4, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, r4
    rsb r0, r5, #0
    bl FX_Div
    ldmia sp!, {r4, r5, r6, pc}
@L_02083f8c:
    smull r0, r2, r5, r5
    adds r3, r0, #0x800
    smull r1, r0, r4, r12
    adc r2, r2, #0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    sub r0, r3, r1, lsl #2
    bl FX_Sqrt
    cmp r6, #0
    beq @L_02083fd8
    add r0, r0, r5
    rsb r0, r0, #0
    mov r1, r4, lsl #1
    bl FX_Div
    ldmia sp!, {r4, r5, r6, pc}
@L_02083fd8:
    sub r0, r0, r5
    mov r1, r4, lsl #1
    bl FX_Div
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_02083fe8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 s;
    if (arg0 == 0) {
        if (arg1 == 0)
            return 0;
        return ((s32 (*)(...))FX_Div)(-arg2, arg1);
    }
    if (arg2 == 0) {
        if (arg0 == 0)
            return 0;
        return ((s32 (*)(...))FX_Div)(-arg1, arg0);
    }
    s = ((s32 (*)(...))FX_Sqrt)((s32)(((s64)arg1 * arg1 + 0x800) >> 12) - ((s32)(((s64)arg0 * arg2 + 0x800) >> 12) << 2));
    if (arg3 != 0)
        return ((s32 (*)(...))FX_Div)(-(s + arg1), arg0 << 1);
    return ((s32 (*)(...))FX_Div)(s - arg1, arg0 << 1);
}

extern "C" u16 func_02084094(fx32 *segment)
{
    return FX_Atan2Idx(segment[3] - segment[1], segment[2] - segment[0]);
}

extern "C" u16 func_020840b4(MatchPoint *a, MatchPoint *b)
{
    return FX_Atan2Idx(b->y - a->y, b->x - a->x) + 0x10000;
}

extern "C" int func_020840e0(int a, int b)
{
    int d = b - a;

    if (d > 0x8000) {
        d -= 0x10000;
    }
    if (d <= -0x8000) {
        d += 0x10000;
    }
    return d;
}

extern "C" s32 func_02084100(s32 arg0, s32 arg1, s32 arg2)
{
    s32 t0;
    s32 t1;
    if ((u32)arg0 > (u32)arg1) {
        t0 = arg1;
        arg1 = arg0;
        arg0 = t0;
    }
    t1 = (arg1 - arg0);
    arg0 = (arg0 + ((arg1 - arg0) >> 1));
    if (t1 > 0x8000) {
        arg0 = (arg0 + 0x8000);
    }
    arg0 = ((u16)arg0);
    if (arg2 == 0) {
        arg0 = ((u16)(arg0 + 0x8000));
    }
    return arg0;
}

extern "C" s32 func_0208413c(s32 arg0, s32 arg1)
{
    s32 r0;
    s32 v0;
    if ((arg0 & 0x7FFF) == (arg1 & 0x7FFF))
        return arg0;
    v0 = ((s32 (*)(...))func_020840e0)(arg1, arg0, 0x7FFF, (arg0 & 0x7FFF));
    r0 = (arg1 - v0);
    if (r0 < 0) {
        do {
            r0 = (r0 + 0x10000);
        } while (r0 < 0);
    }
    return ((u16)r0);
}

extern "C" s32 func_02084188(s32 arg0, s32 arg1, s32 arg2)
{
    arg0 = ((u32)(((arg0 + 0x10000) - arg1) << 0x10) >> 0x10);
    if ((arg0 & 0x8000) != 0) {
        if (arg2 != 0) {
            arg0 = ((u32)((0x10000 - arg0) << 0x10) >> 0x10);
        }
        return arg0;
    } else {
        if (arg2 == 0) {
            arg0 = ((u32)((0x10000 - arg0) << 0x10) >> 0x10);
        }
        return arg0;
    }
}

extern "C" u8 func_020841c8(int i)
{
    return data_020ca766[i];
}

extern "C" void func_020841d8(MatchPoint *point)
{
    point->x = 0x80000000;
    point->y = 0x80000000;
}

extern "C" void func_020841e8(fx32 arg0, fx32 arg1, s32 arg2, fx32 *arg3)
{
    u16 a = FX_Atan2Idx(arg3[1] - arg1, arg3[0] - arg0);
    u16 b = FX_Atan2Idx(arg3[3] - arg1, arg3[2] - arg0);
    func_020845e0(arg2, a, b, 1, 1);
}

extern "C" s32 func_02084248(s32 arg0)
{
    u8 *r2;
    s32 v0;
    s16 t0;
    r2 = (u8 *)arg0;
    arg0 = *(s32 *)(((u8 *)&data_020c4920) + 0x48);
    if (arg0 >= 0) {
        t0 = *(s16 *)(r2 + 0xF4);
        v0 = func_ov015_02131854(arg0, t0);
        if (v0 != 0) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        return arg0;
    } else {
        return 0;
    }
}

extern "C" BOOL func_02084284(int value, int a, int b)
{
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (value >= a && value <= b) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_020842b0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r0;
    int v0;
    int v1;
    int v2;
    v0 = func_020840e0(arg0, arg1);
    if (v0 < 0) {
        v1 = func_020840e0(arg0, arg1);
        r0 = (0 - v1);
    } else {
        v2 = func_020840e0(arg0, arg1);
        r0 = v2;
    }
    if ((u32)arg2 >= (u32)((u16)r0)) {
        r0 = 1;
    } else {
        r0 = 0;
    }
    return r0;
}

extern "C" BOOL func_020842f8(fx32 value)
{
    BOOL result = FALSE;
    fx32 *rect = data_020c4ebc;

    if (value >= rect[0] && value <= rect[2]) {
        result = TRUE;
    }
    return result;
}

extern "C" BOOL func_02084324(fx32 value)
{
    BOOL result = FALSE;
    fx32 *rect = data_020c4ebc;

    if (value >= rect[1] && value <= rect[3]) {
        result = TRUE;
    }
    return result;
}

// (nonmatching: the two flags are zeroed in the other order (mov r4, ip / mov lr, ip); the source
// orders that zero inY1 first merge the tests into branches, see func_020844dc)
#ifdef NONMATCHING
// (is (x, y) on the field?)
extern "C" BOOL func_02084350(fx32 x, fx32 y)
{
    fx32 *rect = data_020c4ebc;
    BOOL in, inY1, inX;

    inY1 = inX = in = FALSE;

    if (x >= rect[0] && x <= rect[2]) {
        inX = TRUE;
    }
    if (inX && y >= rect[1]) {
        inY1 = TRUE;
    }
    if (inY1 && y <= rect[3]) {
        in = TRUE;
    }
    return in;
}
#else
extern "C" asm BOOL func_02084350(fx32 x, fx32 y)
{
    stmdb sp!, {r4, lr}
    ldr r3, =data_020c4ebc
    mov r12, #0
    ldr r2, [r3]
    mov lr, r12
    mov r4, r12
    cmp r0, r2
    blt @L_0208437c
    ldr r2, [r3, #8]
    cmp r0, r2
    movle r4, #1
@L_0208437c:
    cmp r4, #0
    beq @L_02084390
    ldr r0, [r3, #4]
    cmp r1, r0
    movge lr, #1
@L_02084390:
    cmp lr, #0
    beq @L_020843a4
    ldr r0, [r3, #0xc]
    cmp r1, r0
    movle r12, #1
@L_020843a4:
    mov r0, r12
    ldmia sp!, {r4, pc}
}
#endif

// (brings (x, y) back onto the field; FALSE when it was outside)
// (nonmatching: y, the rectangle and the flag get other registers (r6/r4/r5 for r4/r5/r6), and the ROM loads *x before rect[0])
#ifdef NONMATCHING
extern "C" BOOL func_020843b0(fx32 *x, fx32 *y)
{
    fx32 *rect = data_020c4ebc;
    BOOL out = FALSE;

    if (!func_020842f8(*x)) {
        out = TRUE;
        *x = *x < rect[0] ? rect[0] : rect[2];
    }
    if (!func_02084324(*y)) {
        out = TRUE;
        *y = *y < rect[1] ? rect[1] : rect[3];
    }
    return out ? FALSE : TRUE;
}
#else
extern "C" asm BOOL func_020843b0(fx32 *x, fx32 *y)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r0, [r7]
    mov r4, r1
    ldr r5, =data_020c4ebc
    mov r6, #0
    bl func_020842f8
    cmp r0, #0
    bne @L_020843ec
    ldr r1, [r7]
    ldr r0, [r5]
    mov r6, #1
    cmp r1, r0
    ldrge r0, [r5, #8]
    str r0, [r7]
@L_020843ec:
    ldr r0, [r4]
    bl func_02084324
    cmp r0, #0
    bne @L_02084414
    ldr r1, [r4]
    ldr r0, [r5, #4]
    mov r6, #1
    cmp r1, r0
    ldrge r0, [r5, #0xc]
    str r0, [r4]
@L_02084414:
    mov r0, #1
    cmp r6, #0
    movne r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
#endif

extern "C" s32 func_02084428(u8 *arg0, s32 arg1, s32 arg2)
{
    if ((((arg1 >= *(s32 *)(arg0) && arg1 <= *(s32 *)(arg0 + 0x8)) && arg2 >= *(s32 *)(arg0 + 0x4)) && arg2 <= *(s32 *)(arg0 + 0xC))) {
        arg0 = (u8 *)1;
    } else {
        arg0 = (u8 *)0;
    }
    if ((s32)arg0 != 0) {
        arg0 = (u8 *)1;
    } else {
        arg0 = (u8 *)0;
    }
    return (s32)arg0;
}

extern "C" BOOL func_02084470(s32 *arg0, s32 *arg1)
{
    BOOL c = FALSE;
    BOOL b = FALSE;
    BOOL a = FALSE;
    if (arg1[0] >= arg0[0] && arg1[0] <= arg0[2])
        a = TRUE;
    if (a && arg1[1] >= arg0[1])
        b = TRUE;
    if (b && arg1[1] <= arg0[3])
        c = TRUE;
    return c ? TRUE : FALSE;
}

// (nonmatching: the flags are zeroed in the other order (mov r6, r4 / mov r5, r4); every source order that zeroes inY1 before inX merges the tests into branches)
#ifdef NONMATCHING
extern "C" BOOL func_020844dc(fx32 x, fx32 y, fx32 marginX, fx32 marginY)
{
    fx32 *rect = data_020c4ebc;
    BOOL in, inY1, inX;

    inY1 = inX = in = FALSE;

    if (x >= rect[0] - marginX && x <= rect[2] + marginX) {
        inX = TRUE;
    }
    if (inX && y >= rect[1] - marginY) {
        inY1 = TRUE;
    }
    if (inY1 && y <= rect[3] + marginY) {
        in = TRUE;
    }
    return in;
}
#else
extern "C" asm BOOL func_020844dc(fx32 x, fx32 y, fx32 marginX, fx32 marginY)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr lr, =data_020c4ebc
    mov r4, #0
    ldr r12, [lr]
    mov r5, r4
    sub r12, r12, r2
    mov r6, r4
    cmp r0, r12
    blt @L_02084510
    ldr r12, [lr, #8]
    add r2, r12, r2
    cmp r0, r2
    movle r6, #1
@L_02084510:
    cmp r6, #0
    beq @L_02084528
    ldr r0, [lr, #4]
    sub r0, r0, r3
    cmp r1, r0
    movge r5, #1
@L_02084528:
    cmp r5, #0
    beq @L_02084540
    ldr r0, [lr, #0xc]
    add r0, r0, r3
    cmp r1, r0
    movle r4, #1
@L_02084540:
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}
#endif

extern "C" s32 func_0208454c(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v0;
    u8 *v1;
    if (arg2 >= *(s32 *)(data_020f98a0 + 0x7EC))
        return 0;
    r4 = (s32)data_020e88a0;
    r5 = 0;
    r6 = arg1;
    r7 = (s32)arg0;
    do {
        v0 = _ZN11MatchEngine13func_0206de54Ei(r4, r5);
        if (v0 != 0) {
            v1 = func_02083e7c(r5);
            arg0 = (u8 *)v1;
            if (((r7 > *(s32 *)(arg0) && r7 < *(s32 *)(arg0 + 0x8)) && r6 > *(s32 *)(arg0 + 0x4))) {
                if (r6 < *(s32 *)(arg0 + 0xC))
                    return 1;
            }
        }
        r5 = (r5 + 1);
    } while (r5 < 2);
    return 0;
}

extern "C" asm s32 func_020845e0(...)
{
    stmdb sp!, {r3, lr}
    cmp r1, r2
    bne @L_0208462c
    cmp r3, #0
    beq @L_02084614
    ldrb r2, [sp, #8]
    cmp r2, #0
    beq @L_0208460c
    cmp r0, r1
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
@L_0208460c:
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_02084614:
    ldrb r2, [sp, #8]
    cmp r2, #0
    cmpeq r0, r1
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, pc}
@L_0208462c:
    ldr r12, =0x7fff
    and lr, r1, r12
    and r12, r2, r12
    cmp lr, r12
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    cmp r1, r2
    movhi r12, r2
    movhi r2, r1
    movhi r1, r12
    sub r12, r2, r1
    cmp r12, #0x8000
    bgt @L_02084678
    cmp r0, r1
    bls @L_02084674
    cmp r0, r2
    movlo lr, #1
    blo @L_02084694
@L_02084674:
    b @L_02084690
@L_02084678:
    cmp r0, r1
    blo @L_02084688
    cmp r0, r2
    bls @L_02084690
@L_02084688:
    mov lr, #1
    b @L_02084694
@L_02084690:
    mov lr, #0
@L_02084694:
    ldrb r12, [sp, #8]
    cmp r12, #0
    beq @L_020846bc
    cmp r0, r1
    cmpne r0, r2
    moveq r0, #1
    movne r0, #0
    orrs r0, lr, r0
    movne lr, #1
    moveq lr, #0
@L_020846bc:
    cmp r3, #0
    bne @L_020846d0
    cmp lr, #0
    moveq lr, #1
    movne lr, #0
@L_020846d0:
    mov r0, lr
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_020846dc(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r9;
    u16 v0;
    u16 v1;
    u16 v2;
    s32 v3;
    u16 v4;
    u16 v5;
    s32 v6;
    v0 = func_020840b4((MatchPoint *)arg1, (MatchPoint *)arg0);
    v1 = func_020840b4((MatchPoint *)arg1, (MatchPoint *)arg2);
    v2 = func_020840b4((MatchPoint *)arg1, (MatchPoint *)arg3);
    v3 = func_020845e0(v0, v1, v2, 1, 0);
    r9 = v1;
    if (v3 == 0) {
        return 0;
    } else {
        v4 = func_020840b4((MatchPoint *)arg2, (MatchPoint *)arg0);
        v5 = func_020840b4((MatchPoint *)arg2, (MatchPoint *)arg3);
        v6 = func_020845e0(v4, ((u16)(r9 + 0x8000)), v5, 1, 0);
        return v6;
    }
}

extern "C" BOOL func_02084788(MatchPoint *point)
{
    BOOL none = point->x == (fx32)0x80000000 || point->y == (fx32)0x80000000;

    return none ? TRUE : FALSE;
}

extern "C" BOOL func_020847b0(MatchPlayer *player)
{
    return data_020c4920.unk_48 == player->unk_f4;
}

extern "C" BOOL func_020847d0(int value)
{
    if (value >= 1 && value <= 11) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020847ec(int value)
{
    if (value >= 12 && value <= 16) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_02084808(s32 arg0, s32 arg1, u8 *arg2)
{
    BOOL v0;
    BOOL v1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    t0 = *(s32 *)(arg2);
    t1 = *(s32 *)(arg2 + 0x8);
    v0 = func_02084284(arg0, t0, t1);
    if (v0 != 0) {
        t2 = *(s32 *)(arg2 + 0x4);
        t3 = *(s32 *)(arg2 + 0xC);
        v1 = func_02084284(arg1, t2, t3);
        if (v1 != 0)
            return 1;
    }
    return 0;
}

extern "C" BOOL func_0208484c(MatchPoint *a, MatchPoint *b)
{
    return a->x == b->x && a->y == b->y;
}

extern "C" BOOL func_02084870(MatchPlayer *player)
{
    return player->state->unk_84 < player->state->unk_85;
}

extern "C" s32 func_0208488c(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r0;
    s32 r1;
    BOOL v0;
    BOOL v1;
    u16 v2;
    u16 v3;
    v0 = func_0208484c((MatchPoint *)arg0, (MatchPoint *)arg1);
    if ((v0 != 0 || (v1 = func_0208484c((MatchPoint *)arg0, (MatchPoint *)arg1), v1 != 0))) {
        return 0;
    } else {
        v2 = func_020840b4((MatchPoint *)arg0, (MatchPoint *)arg1);
        v3 = func_020840b4((MatchPoint *)arg0, (MatchPoint *)arg2);
        r1 = (v2 - v3);
        r0 = 0x7FFF;
        if (r1 < 0) {
            r1 = (0 - r1);
        }
        if ((r1 & r0) != 0) {
            r0 = 1;
        } else {
            r0 = 0;
        }
        return r0;
    }
}

extern "C" void func_02084900(fx32 *x, fx32 *y, fx32 *rect, fx32 margin)
{
    if (*x < rect[0] + margin) {
        *x = rect[0] + margin;
    } else if (*x > rect[2] - margin) {
        *x = rect[2] - margin;
    }
    if (*y < rect[1] + margin) {
        *y = rect[1] + margin;
    } else if (*y > rect[3] - margin) {
        *y = rect[3] - margin;
    }
}

// (clamps the position into the rectangle, margin inside its edges)
extern "C" void func_02084958(fx32 *pos, fx32 *rect, fx32 margin)
{
    func_02084900(pos, &pos[1], rect, margin);
}

extern "C" asm void func_02084970(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    ldmia r6, {r0, r1}
    bl func_02084808
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    mov r2, r4
    ldmia r5, {r0, r1}
    bl func_02084808
    cmp r0, #0
    bne @L_020849c4
    mov r5, #1
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_02084958
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
@L_020849c4:
    ldr r0, [r4]
    ldr r2, [r6]
    cmp r2, r0
    bgt @L_02084a04
    ldr r1, [r5]
    sub r0, r1, r0
    sub r1, r1, r2
    bl FX_Div
    ldr r3, [r5, #4]
    ldr r1, [r6, #4]
    ldr r12, [r4]
    sub r1, r1, r3
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    add r2, r12, #1
    b @L_02084a3c
@L_02084a04:
    ldr r0, [r4, #8]
    cmp r2, r0
    blt @L_02084a54
    ldr r1, [r5]
    sub r0, r0, r1
    sub r1, r2, r1
    bl FX_Div
    ldr r3, [r5, #4]
    ldr r1, [r6, #4]
    ldr r12, [r4, #8]
    sub r1, r1, r3
    smull r2, r0, r1, r0
    adds r1, r2, #0x800
    sub r2, r12, #1
@L_02084a3c:
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    add r0, r3, r1
    str r2, [r6]
    str r0, [r6, #4]
@L_02084a54:
    ldr r0, [r4, #4]
    ldr r2, [r6, #4]
    cmp r2, r0
    bgt @L_02084a94
    ldr r1, [r5, #4]
    sub r0, r1, r0
    sub r1, r1, r2
    bl FX_Div
    ldr r5, [r5]
    ldr r2, [r6]
    ldr r1, [r4, #4]
    sub r2, r2, r5
    smull r0, r3, r2, r0
    adds r2, r0, #0x800
    add r0, r1, #1
    b @L_02084acc
@L_02084a94:
    ldr r0, [r4, #0xc]
    cmp r2, r0
    blt @L_02084ae4
    ldr r1, [r5, #4]
    sub r0, r0, r1
    sub r1, r2, r1
    bl FX_Div
    ldr r5, [r5]
    ldr r2, [r6]
    ldr r1, [r4, #0xc]
    sub r2, r2, r5
    smull r0, r3, r2, r0
    adds r2, r0, #0x800
    sub r0, r1, #1
@L_02084acc:
    adc r1, r3, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    add r1, r5, r2
    str r1, [r6]
    str r0, [r6, #4]
@L_02084ae4:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_02084aec(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v1;
    if ((arg0 == 0 || arg1 == 0))
        return 0;
    if (arg2 == 0)
        return 1;
    if ((u32)((arg0 - arg1) < 0 ? (0 - (arg0 - arg1)) : (arg0 - arg1)) < (u32)arg2) {
        MI_CpuCopy8((const void *)arg0, (void *)arg1, (u32)arg2);
        return 1;
    } else {
        v1 = _ZN8GameHeap5AllocEiii((u8 *)((u8 *)&gAllocator), arg2, 0, 1);
        if (v1 == 0)
            return 0;
        MI_CpuCopy8((const void *)arg0, (void *)v1, (u32)arg2);
        MI_CpuCopy8((const void *)v1, (void *)arg1, (u32)arg2);
        _ZN8GameHeap4FreeEPv((u8 *)((u8 *)&gAllocator), v1);
        return 1;
    }
}

extern "C" s32 func_02084ba0(u8 *arg0, u8 *arg1)
{
    MIi_CpuCopyFast((s32)arg1, (s32)arg0, 0x20);
    u16 t0 = *(u16 *)(arg1 + 0x42);
    *(u16 *)(arg0 + 0x20) = t0;
    u8 t1 = *(u8 *)(arg1 + 0x54);
    *(u8 *)(arg0 + 0x23) = t1;
    u16 t2 = *(u16 *)(arg1 + 0x48);
    *(u16 *)(arg0 + 0x24) = t2;
    u16 t3 = *(u16 *)(arg1 + 0x4A);
    *(u16 *)(arg0 + 0x26) = t3;
    u8 t4 = *(u8 *)(arg1 + 0x4C);
    *(u8 *)(arg0 + 0x28) = t4;
    return t4;
}

extern "C" void func_02084be8(S02084be8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 cx;
    s32 cy;
    cx = cy = 0;
    if (arg1 != 0 || arg3 != 0)
        cx = (arg3 - arg1) / 2;
    if (arg2 != 0 || arg4 != 0)
        cy = (arg4 - arg2) / 2;
    arg0->x20 = arg1;
    arg0->x24 = arg2;
    arg0->x14 = arg1 + cx;
    arg0->x1c = arg2 + cy;
    arg0->x28 = arg3;
    arg0->x2c = arg4;
}

extern "C" s32 func_02084c4c(u8 *arg0)
{
    MIi_CpuClearFast((u32)0, (void *)arg0, (u32)0xD4);
    *(u8 *)(arg0 + 0x68) = 0x1E;
    *(u8 *)(arg0 + 0x69) = 1;
    *(s32 *)(arg0 + 0xA0) = 0x100;
    *(u8 *)(arg0 + 0xA6) = 1;
    *(u8 *)(arg0 + 0xA7) = 2;
    return 2;
}

extern "C" s32 func_02084c8c(u8 *obj)
{
    return *(s32 *)(obj + 0x5C);
}

extern "C" s32 func_02084c94(u8 *obj)
{
    return *(s32 *)(obj + 0x5C) >> 8;
}

extern "C" s32 func_02084ca0(u8 *obj)
{
    return *(s32 *)(obj + 0x5C) & 0xFF;
}

extern "C" void func_02084cac(u8 *arg0, V12 arg1)
{
    *(s32 *)(arg0 + 0x78) = *(s32 *)(arg0 + 0x84);
    *(s32 *)(arg0 + 0x7C) = *(s32 *)(arg0 + 0x88);
    *(s32 *)(arg0 + 0x80) = *(s32 *)(arg0 + 0x8C);
    *(s32 *)(arg0 + 0x84) = arg1.x;
    *(s32 *)(arg0 + 0x88) = arg1.y;
    *(s32 *)(arg0 + 0x8C) = arg1.z;
}

extern "C" u8 *func_02084cf0(u8 *obj)
{
    return obj + 0x84;
}

extern "C" u8 *func_02084cf8(u8 *obj)
{
    return obj + 0x78;
}

extern "C" void func_02084d00(u8 *obj, VecFx32 v)
{
    *(VecFx32 *)(obj + 0x6C) = v;
}

extern "C" void func_02084d24(u8 *obj, s32 a, s32 b, s32 c)
{
    *(s32 *)(obj + 0x90) = a;
    *(s32 *)(obj + 0x94) = b;
    *(s32 *)(obj + 0x98) = c;
}

extern "C" void func_02084d34(u8 *obj, int value)
{
    if (value < 0) {
        value = 0;
    } else if (value >= 31) {
        value = 30;
    }
    obj[0x68] = value;
}

extern "C" void func_02084d50(u8 *obj, s32 value, BOOL update)
{
    *(s32 *)(obj + 0xA0) = value;
    if (!update) {
        return;
    }
    if (value >= 0xEF) {
        obj[0xA6] = 1;
    } else {
        obj[0xA6] = 0;
    }
}

extern "C" void func_02084d74(u8 *obj, u8 value)
{
    obj[0xA6] = value;
}

extern "C" void func_02084d7c(u8 *obj, u16 value)
{
    if (*(u16 *)(obj + 0x6A) != value) {
        obj[0x69] = 1;
    }
    *(u16 *)(obj + 0x6A) = value;
}

extern "C" BOOL func_02084d94(u8 *obj, u16 flags)
{
    return flags == (flags & *(u16 *)(obj + 0xA4));
}

extern "C" void func_02084dac(u8 *obj, int flags)
{
    *(u16 *)(obj + 0xA4) = *(u16 *)(obj + 0xA4) | (u16)flags;
}

extern "C" void func_02084dc0(u8 *obj, int flags)
{
    *(u16 *)(obj + 0xA4) = *(u16 *)(obj + 0xA4) & (u16)~flags;
}

extern "C" BOOL func_02084dd8(u8 *obj)
{
    return func_02084d94(obj, 2);
}

extern "C" BOOL func_02084de8(u8 *obj)
{
    BOOL result = TRUE;

    if (func_02084d94(obj, result)) {
        result = FALSE;
    }
    return result;
}

extern "C" s32 func_02084e08(s32 arg0, s32 arg1)
{
    BOOL v0;
    s32 v1;
    s32 v2;
    v0 = func_02084de8((u8 *)arg0);
    if (v0 != 0)
        return v0;
    if (arg1 != 0) {
        v1 = ((s32 (*)(...))func_02084dac)((u8 *)arg0, 2);
        return v1;
    } else {
        v2 = ((s32 (*)(...))func_02084dc0)((u8 *)arg0, 2);
        return v2;
    }
}

extern "C" void func_02084e40(u8 *obj, s32 a, s32 b)
{
    MIi_CpuClearFast(0, obj, 0x4C8);
    *(s32 *)(obj + 0x490) = a;
    *(s32 *)(obj + 0x494) = b;
}

extern "C" asm void func_02084e70(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r0
    ldr r5, [r4, #0x48c]
    mov r0, #0xc
    mul r0, r5, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    add r1, r4, #0xc
    str r7, [r4]
    str r6, [r4, #4]
    str r5, [r4, #8]
    add r2, r1, r0
    ldmia r2, {r0, r1}
    mov r2, r7
    mov r3, r6
    bl func_02099adc
    ldrb r1, [sp, #0x20]
    cmp r1, #0
    bne @L_02084ed0
    ldr r1, [r4, #0x490]
    cmp r0, r1
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02084ed0:
    ldr r1, [r4, #0x48c]
    ldr r0, =0x2aaaaaab
    add r8, r1, #1
    smull r2, r9, r0, r8
    mov r1, r8, lsr #0x1f
    add r9, r1, r9, asr #4
    mov r3, #0x60
    smull r1, r2, r3, r9
    sub r9, r8, r1
    mov r1, #0xc
    mla r2, r9, r1, r4
    str r9, [r4, #0x48c]
    str r7, [r2, #0xc]
    ldr r7, [r4, #0x48c]
    mov lr, #0xc
    mla r3, r7, r1, r4
    str r6, [r3, #0x10]
    ldr r3, [r4, #0x48c]
    mov r2, #0
    mla r1, r3, r1, r4
    str r5, [r1, #0x14]
    ldr r1, [r4, #0x48c]
    mov r12, #0x60
    add r3, r1, #0x60
    mov r8, lr
@L_02084f34:
    ldr r6, [r4, #0x494]
    mla r1, r2, r8, r4
    sub r3, r3, r6
    mov r6, r3, lsr #0x1f
    smull r7, r9, r0, r3
    add r9, r6, r9, asr #4
    smull r6, r7, r12, r9
    sub r9, r3, r6
    mla r7, r9, lr, r4
    ldr r6, [r7, #0xc]
    add r2, r2, #1
    str r6, [r1, #0x498]
    ldr r6, [r7, #0x10]
    cmp r2, #4
    str r6, [r1, #0x49c]
    str r5, [r1, #0x4a0]
    blt @L_02084f34
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_02084f84(S02084f84 *arg0, s32 x, s32 y, s32 z)
{
    s32 i;
    arg0->a.x = x;
    arg0->a.y = y;
    arg0->a.z = z;
    for (i = 0; i < 0x60; i++) {
        arg0->b[i].x = x;
        arg0->b[i].y = y;
        arg0->b[i].z = z;
    }
    arg0->c = 0;
    for (i = 0; i < 4; i++) {
        arg0->d[i].x = x;
        arg0->d[i].y = y;
        arg0->d[i].z = z;
    }
}

extern "C" void func_02084fdc(void *data)
{
    MIi_CpuClearFast(0, data, 0x18);
}
