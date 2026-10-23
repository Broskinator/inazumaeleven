#include "game/Unk_02083afc.hpp"
#include "game/Match.hpp"
#include "nitro/mi.h"

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
extern "C" void func_02083fe8(void);
extern "C" void func_02084094(void);
extern "C" void func_020840b4(void);
extern "C" void func_020840e0(void);
extern "C" void func_02084100(void);
extern "C" void func_0208413c(void);
extern "C" void func_02084188(void);
extern "C" u8 func_020841c8(int i);
extern "C" void func_020841d8(MatchPoint *point);
extern "C" void func_020841e8(void);
extern "C" void func_02084248(void);
extern "C" void func_02084284(void);
extern "C" void func_020842b0(void);
extern "C" void func_020842f8(void);
extern "C" void func_02084324(void);
extern "C" void func_02084350(void);
extern "C" void func_020843b0(void);
extern "C" void func_02084428(void);
extern "C" void func_02084470(void);
extern "C" void func_020844dc(void);
extern "C" void func_0208454c(void);
extern "C" void func_020845e0(void);
extern "C" void func_020846dc(void);
extern "C" void func_02084788(void);
extern "C" BOOL func_020847b0(MatchPlayer *player);
extern "C" void func_020847d0(void);
extern "C" void func_020847ec(void);
extern "C" void func_02084808(void);
extern "C" void func_0208484c(void);
extern "C" BOOL func_02084870(MatchPlayer *player);
extern "C" void func_0208488c(void);
extern "C" BOOL func_02084900(fx32 *x, fx32 *y, fx32 *rect, int a);
extern "C" BOOL func_02084958(fx32 *pos, fx32 *rect, int a);
extern "C" void func_02084970(void);
extern "C" void func_02084aec(void);
extern "C" void func_02084ba0(void);
extern "C" void func_02084be8(void);
extern "C" void func_02084c4c(void);
extern "C" s32 func_02084c8c(u8 *obj);
extern "C" s32 func_02084c94(u8 *obj);
extern "C" s32 func_02084ca0(u8 *obj);
extern "C" void func_02084cac(void);
extern "C" u8 *func_02084cf0(u8 *obj);
extern "C" u8 *func_02084cf8(u8 *obj);
extern "C" void func_02084d00(void);
extern "C" void func_02084d24(u8 *obj, s32 a, s32 b, s32 c);
extern "C" void func_02084d34(void);
extern "C" void func_02084d50(void);
extern "C" void func_02084d74(u8 *obj, u8 value);
extern "C" void func_02084d7c(u8 *obj, u16 value);
extern "C" BOOL func_02084d94(u8 *obj, u16 flags);
extern "C" void func_02084dac(u8 *obj, int flags);
extern "C" void func_02084dc0(u8 *obj, int flags);
extern "C" BOOL func_02084dd8(u8 *obj);
extern "C" void func_02084de8(void);
extern "C" void func_02084e08(void);
extern "C" void func_02084e40(void);
extern "C" void func_02084e70(void);
extern "C" void func_02084f84(void);
extern "C" void func_02084fdc(void *data);

extern "C" char data_020c47b4[];
extern "C" char data_020c4ebc[];
extern "C" char data_020e88a0[];
extern "C" char data_020f98a0[];
extern "C" void MIi_CpuCopyFast(void);
extern "C" void _ZN17UnkClass_020621b413func_0206de54Eii(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_02001d60(void);
extern "C" void func_02001d80(void);
extern "C" void func_0200226c(void);
extern "C" void func_02099adc(void);
extern "C" void func_ov015_02131854(void);

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
    bl func_02001d60
    mov r7, r0
    smull r1, r0, r7, r5
    adds r1, r1, #0x800
    adc r2, r0, r4
    mov r0, r1, lsr #0xc
    mov r1, r6
    orr r0, r0, r2, lsl #20
    bl func_02001d60
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
    bl func_02001d60
    mov r5, r0
    smull r1, r0, r5, r11
    adds r1, r1, #0x800
    adc r2, r0, r4
    mov r0, r1, lsr #0xc
    mov r1, r7
    orr r0, r0, r2, lsl #20
    bl func_02001d60
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
    bl func_02001d60
    ldmia sp!, {r4, r5, r6, pc}
@L_02083f68:
    cmp r12, #0
    bne @L_02083f8c
    cmp r4, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, r4
    rsb r0, r5, #0
    bl func_02001d60
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
    bl func_02001d80
    cmp r6, #0
    beq @L_02083fd8
    add r0, r0, r5
    rsb r0, r0, #0
    mov r1, r4, lsl #1
    bl func_02001d60
    ldmia sp!, {r4, r5, r6, pc}
@L_02083fd8:
    sub r0, r0, r5
    mov r1, r4, lsl #1
    bl func_02001d60
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02083fe8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    movs r6, r0
    mov r5, r1
    mov r4, r3
    bne @L_02084014
    cmp r5, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    rsb r0, r2, #0
    bl func_02001d60
    ldmia sp!, {r4, r5, r6, pc}
@L_02084014:
    cmp r2, #0
    bne @L_02084038
    cmp r6, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, r6
    rsb r0, r5, #0
    bl func_02001d60
    ldmia sp!, {r4, r5, r6, pc}
@L_02084038:
    smull r0, r3, r5, r5
    adds r12, r0, #0x800
    smull r1, r0, r6, r2
    adc r2, r3, #0
    adds r1, r1, #0x800
    mov r3, r12, lsr #0xc
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    sub r0, r3, r1, lsl #2
    bl func_02001d80
    cmp r4, #0
    beq @L_02084084
    add r0, r0, r5
    rsb r0, r0, #0
    mov r1, r6, lsl #1
    bl func_02001d60
    ldmia sp!, {r4, r5, r6, pc}
@L_02084084:
    sub r0, r0, r5
    mov r1, r6, lsl #1
    bl func_02001d60
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02084094(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, [r0, #0xc]
    ldr r2, [r0, #8]
    ldmia r0, {r1, r3}
    sub r0, r12, r3
    sub r1, r2, r1
    bl func_0200226c
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020840b4(void)
{
    stmdb sp!, {r3, lr}
    ldmia r1, {r2, r12}
    ldr r1, [r0]
    ldr r3, [r0, #4]
    sub r1, r2, r1
    sub r0, r12, r3
    bl func_0200226c
    add r0, r0, #0x10000
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020840e0(void)
{
    sub r0, r1, r0
    mov r1, #0x8000
    cmp r0, #0x8000
    subgt r0, r0, #0x10000
    rsb r1, r1, #0
    cmp r0, r1
    addle r0, r0, #0x10000
    bx lr
}

extern "C" asm void func_02084100(void)
{
    cmp r0, r1
    movhi r3, r1
    movhi r1, r0
    movhi r0, r3
    sub r1, r1, r0
    add r0, r0, r1, asr #1
    cmp r1, #0x8000
    addgt r0, r0, #0x8000
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r2, #0
    addeq r0, r0, #0x8000
    moveq r0, r0, lsl #0x10
    moveq r0, r0, lsr #0x10
    bx lr
}

extern "C" asm void func_0208413c(void)
{
    stmdb sp!, {r4, lr}
    ldr r2, =0x7fff
    mov r12, r0
    mov r4, r1
    and r3, r12, r2
    and r1, r4, r2
    cmp r3, r1
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    mov r1, r12
    bl func_020840e0
    subs r0, r4, r0
    bpl @L_02084178
@L_02084170:
    adds r0, r0, #0x10000
    bmi @L_02084170
@L_02084178:
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02084188(void)
{
    add r0, r0, #0x10000
    sub r0, r0, r1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    tst r0, #0x8000
    beq @L_020841b4
    cmp r2, #0
    rsbne r0, r0, #0x10000
    movne r0, r0, lsl #0x10
    movne r0, r0, lsr #0x10
    bx lr
@L_020841b4:
    cmp r2, #0
    rsbeq r0, r0, #0x10000
    moveq r0, r0, lsl #0x10
    moveq r0, r0, lsr #0x10
    bx lr
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

extern "C" asm void func_020841e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, r3
    mov r5, r0
    mov r4, r1
    ldmia r7, {r3, r6}
    sub r0, r6, r4
    sub r1, r3, r5
    mov r8, r2
    bl func_0200226c
    ldr r1, [r7, #8]
    ldr r2, [r7, #0xc]
    mov r6, r0
    sub r0, r2, r4
    sub r1, r1, r5
    bl func_0200226c
    mov r2, r0
    mov r3, #1
    mov r1, r6
    mov r0, r8
    str r3, [sp]
    bl func_020845e0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02084248(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020c4920
    mov r2, r0
    ldr r0, [r1, #0x48]
    cmp r0, #0
    blt @L_02084278
    ldrsh r1, [r2, #0xf4]
    bl func_ov015_02131854
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, pc}
@L_02084278:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02084284(void)
{
    cmp r1, r2
    movgt r3, r1
    movgt r1, r2
    movgt r2, r3
    cmp r0, r1
    blt @L_020842a8
    cmp r0, r2
    movle r0, #1
    bxle lr
@L_020842a8:
    mov r0, #0
    bx lr
}

extern "C" asm void func_020842b0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_020840e0
    cmp r0, #0
    mov r0, r6
    mov r1, r5
    bge @L_020842e0
    bl func_020840e0
    rsb r0, r0, #0
    b @L_020842e4
@L_020842e0:
    bl func_020840e0
@L_020842e4:
    mov r0, r0, lsl #0x10
    cmp r4, r0, lsr #16
    movhs r0, #1
    movlo r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020842f8(void)
{
    ldr r2, =data_020c4ebc
    mov r3, #0
    ldr r1, [r2]
    cmp r0, r1
    blt @L_02084318
    ldr r1, [r2, #8]
    cmp r0, r1
    movle r3, #1
@L_02084318:
    mov r0, r3
    bx lr
}

extern "C" asm void func_02084324(void)
{
    ldr r2, =data_020c4ebc
    mov r3, #0
    ldr r1, [r2, #4]
    cmp r0, r1
    blt @L_02084344
    ldr r1, [r2, #0xc]
    cmp r0, r1
    movle r3, #1
@L_02084344:
    mov r0, r3
    bx lr
}

extern "C" asm void func_02084350(void)
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

extern "C" asm void func_020843b0(void)
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

extern "C" asm void func_02084428(void)
{
    ldr r3, [r0]
    cmp r1, r3
    blt @L_0208445c
    ldr r3, [r0, #8]
    cmp r1, r3
    bgt @L_0208445c
    ldr r1, [r0, #4]
    cmp r2, r1
    blt @L_0208445c
    ldr r0, [r0, #0xc]
    cmp r2, r0
    movle r0, #1
    ble @L_02084460
@L_0208445c:
    mov r0, #0
@L_02084460:
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    bx lr
}

extern "C" asm void func_02084470(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r1]
    mov r12, #0
    ldr r2, [r0]
    mov lr, r12
    mov r4, r12
    cmp r3, r2
    blt @L_0208449c
    ldr r2, [r0, #8]
    cmp r3, r2
    movle r4, #1
@L_0208449c:
    cmp r4, #0
    beq @L_020844b4
    ldr r3, [r1, #4]
    ldr r2, [r0, #4]
    cmp r3, r2
    movge lr, #1
@L_020844b4:
    cmp lr, #0
    beq @L_020844cc
    ldr r1, [r1, #4]
    ldr r0, [r0, #0xc]
    cmp r1, r0
    movle r12, #1
@L_020844cc:
    mov r0, #1
    cmp r12, #0
    moveq r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_020844dc(void)
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

extern "C" asm void func_0208454c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r3, =data_020f98a0
    mov r7, r0
    ldr r0, [r3, #0x7ec]
    mov r6, r1
    cmp r2, r0
    movge r0, #0
    ldmgeia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =data_020e88a0
    mov r5, #0
@L_02084574:
    mov r0, r4
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_0206de54Eii
    cmp r0, #0
    beq @L_020845c4
    mov r0, r5
    bl func_02083e7c
    ldr r1, [r0]
    cmp r7, r1
    ble @L_020845c4
    ldr r1, [r0, #8]
    cmp r7, r1
    bge @L_020845c4
    ldr r1, [r0, #4]
    cmp r6, r1
    ble @L_020845c4
    ldr r0, [r0, #0xc]
    cmp r6, r0
    movlt r0, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_020845c4:
    add r5, r5, #1
    cmp r5, #2
    blt @L_02084574
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020845e0(void)
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

extern "C" asm void func_020846dc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    mov r5, r1
    mov r7, r2
    mov r0, r5
    mov r1, r8
    mov r6, r3
    bl func_020840b4
    mov r4, r0
    mov r0, r5
    mov r1, r7
    bl func_020840b4
    mov r9, r0
    mov r0, r5
    mov r1, r6
    bl func_020840b4
    mov r2, r0
    mov r0, r4
    mov r4, #1
    mov r5, #0
    mov r1, r9
    mov r3, r4
    str r5, [sp]
    bl func_020845e0
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    mov r1, r8
    bl func_020840b4
    mov r8, r0
    mov r0, r7
    mov r1, r6
    bl func_020840b4
    add r1, r9, #0x8000
    mov r1, r1, lsl #0x10
    mov r2, r0
    mov r0, r8
    mov r3, r4
    mov r1, r1, lsr #0x10
    str r5, [sp]
    bl func_020845e0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02084788(void)
{
    ldr r1, [r0]
    cmp r1, #0x80000000
    ldrne r0, [r0, #4]
    cmpne r0, #0x80000000
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    bx lr
}

extern "C" BOOL func_020847b0(MatchPlayer *player)
{
    return data_020c4920.unk_48 == player->unk_f4;
}

extern "C" asm void func_020847d0(void)
{
    cmp r0, #1
    blt @L_020847e4
    cmp r0, #0xb
    movle r0, #1
    bxle lr
@L_020847e4:
    mov r0, #0
    bx lr
}

extern "C" asm void func_020847ec(void)
{
    cmp r0, #0xc
    blt @L_02084800
    cmp r0, #0x10
    movle r0, #1
    bxle lr
@L_02084800:
    mov r0, #0
    bx lr
}

extern "C" asm void func_02084808(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r2
    mov r5, r1
    ldr r1, [r4]
    ldr r2, [r4, #8]
    bl func_02084284
    cmp r0, #0
    beq @L_02084844
    ldr r1, [r4, #4]
    ldr r2, [r4, #0xc]
    mov r0, r5
    bl func_02084284
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
@L_02084844:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0208484c(void)
{
    ldr r3, [r0]
    ldr r2, [r1]
    cmp r3, r2
    ldreq r2, [r0, #4]
    ldreq r0, [r1, #4]
    cmpeq r2, r0
    moveq r0, #1
    movne r0, #0
    bx lr
}

extern "C" BOOL func_02084870(MatchPlayer *player)
{
    return player->state->unk_84 < player->state->unk_85;
}

extern "C" asm void func_0208488c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, r1
    mov r5, r2
    bl func_0208484c
    cmp r0, #0
    bne @L_020848bc
    mov r0, r6
    mov r1, r4
    bl func_0208484c
    cmp r0, #0
    beq @L_020848c4
@L_020848bc:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_020848c4:
    mov r0, r6
    mov r1, r4
    bl func_020840b4
    mov r4, r0
    mov r0, r6
    mov r1, r5
    bl func_020840b4
    subs r1, r4, r0
    ldr r0, =0x7fff
    rsbmi r1, r1, #0
    tst r1, r0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm BOOL func_02084900(fx32 *x, fx32 *y, fx32 *rect, int a)
{
    stmdb sp!, {r3, lr}
    ldr r12, [r2]
    ldr lr, [r0]
    add r12, r12, r3
    cmp lr, r12
    strlt r12, [r0]
    blt @L_0208492c
    ldr r12, [r2, #8]
    sub r12, r12, r3
    cmp lr, r12
    strgt r12, [r0]
@L_0208492c:
    ldr r0, [r2, #4]
    ldr r12, [r1]
    add r0, r0, r3
    cmp r12, r0
    strlt r0, [r1]
    ldmltia sp!, {r3, pc}
    ldr r0, [r2, #0xc]
    sub r0, r0, r3
    cmp r12, r0
    strgt r0, [r1]
    ldmia sp!, {r3, pc}
}

extern "C" BOOL func_02084958(fx32 *pos, fx32 *rect, int a)
{
    return func_02084900(pos, &pos[1], rect, a);
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
    bl func_02001d60
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
    bl func_02001d60
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
    bl func_02001d60
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
    bl func_02001d60
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

extern "C" asm void func_02084aec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    movs r6, r0
    mov r5, r1
    cmpne r5, #0
    mov r4, r2
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r4, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    subs r0, r6, r5
    rsbmi r0, r0, #0
    cmp r0, r4
    bhs @L_02084b3c
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02084b3c:
    ldr r10, =data_020c47b4
    mov r9, #0
    mov r8, #1
    mov r0, r10
    mov r1, r4
    mov r2, r9
    mov r3, r8
    bl _ZN8GameHeap5AllocEiii
    movs r7, r0
    moveq r0, r9
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r6
    mov r1, r7
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, r7
    mov r1, r5
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, r10
    mov r1, r7
    bl _ZN8GameHeap4FreeEPv
    mov r0, r8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02084ba0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    mov r0, r4
    mov r1, r5
    mov r2, #0x20
    bl MIi_CpuCopyFast
    ldrh r0, [r4, #0x42]
    strh r0, [r5, #0x20]
    ldrb r0, [r4, #0x54]
    strb r0, [r5, #0x23]
    ldrh r0, [r4, #0x48]
    strh r0, [r5, #0x24]
    ldrh r0, [r4, #0x4a]
    strh r0, [r5, #0x26]
    ldrb r0, [r4, #0x4c]
    strb r0, [r5, #0x28]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02084be8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #0
    cmp r1, #0
    cmpeq r3, #0
    subne r4, r3, r1
    mov lr, r5
    addne r12, r4, r4, lsr #31
    movne lr, r12, asr #1
    cmp r2, #0
    ldreq r4, [sp, #0x10]
    str r1, [r0, #0x20]
    cmpeq r4, #0
    ldrne r4, [sp, #0x10]
    str r2, [r0, #0x24]
    subne r4, r4, r2
    addne r12, r4, r4, lsr #31
    movne r5, r12, asr #1
    add r4, r1, lr
    ldr r12, [sp, #0x10]
    add lr, r2, r5
    str r4, [r0, #0x14]
    str lr, [r0, #0x1c]
    str r3, [r0, #0x28]
    str r12, [r0, #0x2c]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02084c4c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, r4
    mov r0, #0
    mov r2, #0xd4
    bl MIi_CpuClearFast
    mov r2, #1
    mov r3, #0x1e
    mov r1, #0x100
    mov r0, #2
    strb r3, [r4, #0x68]
    strb r2, [r4, #0x69]
    str r1, [r4, #0xa0]
    strb r2, [r4, #0xa6]
    strb r0, [r4, #0xa7]
    ldmia sp!, {r4, pc}
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

extern "C" asm void func_02084cac(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, lr}
    ldr r4, [r0, #0x84]
    ldr lr, [r0, #0x88]
    ldr r12, [r0, #0x8c]
    ldr r3, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x14]
    str r4, [r0, #0x78]
    str lr, [r0, #0x7c]
    str r12, [r0, #0x80]
    str r3, [r0, #0x84]
    str r2, [r0, #0x88]
    str r1, [r0, #0x8c]
    ldmia sp!, {r4, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" u8 *func_02084cf0(u8 *obj)
{
    return obj + 0x84;
}

extern "C" u8 *func_02084cf8(u8 *obj)
{
    return obj + 0x78;
}

extern "C" asm void func_02084d00(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    ldr r3, [sp, #4]
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    str r3, [r0, #0x6c]
    str r2, [r0, #0x70]
    str r1, [r0, #0x74]
    add sp, sp, #0x10
    bx lr
}

extern "C" void func_02084d24(u8 *obj, s32 a, s32 b, s32 c)
{
    *(s32 *)(obj + 0x90) = a;
    *(s32 *)(obj + 0x94) = b;
    *(s32 *)(obj + 0x98) = c;
}

extern "C" asm void func_02084d34(void)
{
    cmp r1, #0
    movlt r1, #0
    blt @L_02084d48
    cmp r1, #0x1f
    movge r1, #0x1e
@L_02084d48:
    strb r1, [r0, #0x68]
    bx lr
}

extern "C" asm void func_02084d50(void)
{
    str r1, [r0, #0xa0]
    cmp r2, #0
    bxeq lr
    cmp r1, #0xef
    movge r1, #1
    strgeb r1, [r0, #0xa6]
    movlt r1, #0
    strltb r1, [r0, #0xa6]
    bx lr
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

extern "C" asm void func_02084de8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #1
    mov r1, r4
    bl func_02084d94
    cmp r0, #0
    movne r4, #0
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02084e08(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_02084de8
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    cmp r4, #0
    mov r0, r5
    mov r1, #2
    beq @L_02084e38
    bl func_02084dac
    ldmia sp!, {r3, r4, r5, pc}
@L_02084e38:
    bl func_02084dc0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02084e40(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, r2
    mov r5, r1
    ldr r2, =0x4c8
    mov r1, r6
    mov r0, #0
    bl MIi_CpuClearFast
    str r5, [r6, #0x490]
    str r4, [r6, #0x494]
    ldmia sp!, {r4, r5, r6, pc}
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

extern "C" asm void func_02084f84(void)
{
    stmdb sp!, {r4, lr}
    stmia r0, {r1, r2, r3}
    mov r4, #0
    mov r12, #0xc
@L_02084f94:
    mla lr, r4, r12, r0
    str r1, [lr, #0xc]
    str r2, [lr, #0x10]
    add r4, r4, #1
    str r3, [lr, #0x14]
    cmp r4, #0x60
    blt @L_02084f94
    mov r4, #0
    str r4, [r0, #0x48c]
    mov r12, #0xc
@L_02084fbc:
    mla lr, r4, r12, r0
    str r1, [lr, #0x498]
    str r2, [lr, #0x49c]
    add r4, r4, #1
    str r3, [lr, #0x4a0]
    cmp r4, #4
    blt @L_02084fbc
    ldmia sp!, {r4, pc}
}

extern "C" void func_02084fdc(void *data)
{
    MIi_CpuClearFast(0, data, 0x18);
}
