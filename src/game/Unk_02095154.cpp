#include "game/Unk_02095154.hpp"

extern "C" void func_020984f0(void *a, int b);
extern "C" void func_0209855c(void *a, int b);
extern "C" int func_02097ca8(void *a, int b, int c, int d);
extern "C" u8 *func_020985fc(u8 *self, int id);

extern "C" void func_02097ac0(void);     // (for the asm functions)
extern "C" void func_0209860c(void);     // (for the asm functions)
extern "C" s32 func_020987fc(...);     // (for the asm functions)
extern "C" void func_02098824(void);     // (for the asm functions)
extern "C" void func_02098ae4(void);     // (for the asm functions)
extern "C" void func_0209657c(void);     // (for the asm functions)
extern "C" void func_02096eb4(void);     // (for the asm functions)
extern "C" s32 func_02097858(...);     // (for the asm functions)
extern "C" s32 func_02097880(...);     // (for the asm functions)
extern "C" void func_02095154(void);
extern "C" void func_02095544(void);
extern "C" void func_020956f8(void);
extern "C" s32 func_02095984(u8 *arg0, u8 *arg1, u16 arg2, u8 arg3, s32 arg4, s32 arg5);
extern "C" s32 func_02095a40(...);
extern "C" s32 func_02095b9c(...);
extern "C" s32 func_02095c24(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3);
extern "C" void func_02095c74(void);
extern "C" void func_02095d14(u8 *arg0, u8 *arg1, u16 arg2, u8 arg3, s32 arg4, s32 arg5);
extern "C" s32 func_02095d70(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02095e04(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_02095e6c(u8 *arg0);
extern "C" void func_02095ea0(void *obj);
extern "C" void func_02095ea4(u8 *arg0, u8 *arg1);
extern "C" int func_02095f2c(void *obj, int a, int b);
extern "C" int func_02096048(void *obj);
extern "C" int func_0209605c(void *obj);
extern "C" int func_02096070(void *obj);
extern "C" BOOL func_02096084(u8 *obj, int a);
extern "C" BOOL func_02096098(u8 *obj, int a);
extern "C" s32 func_020960ac(...);
extern "C" void func_020960ec(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02096110(...);
extern "C" int func_02096148(u8 *obj, int a, int b);
extern "C" u8 *func_02096160(u8 *obj, int id);
extern "C" s32 func_02096170(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_020961b4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_020961f0(s32 arg0, s32 arg1);
extern "C" s32 func_020962f4(...);
extern "C" void func_02096354(void);
extern "C" void func_02096428(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_020964ac(s32 arg0, s32 arg1, u8 arg2);
extern "C" void func_02096500(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

extern "C" char data_020afd28[];
extern "C" char data_020c46e4[];
extern "C" char data_020c47b4[];
extern "C" void DC_FlushRange(void);
extern "C" void FX_SinCosTable_(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void MIi_CpuCopy32(void);
extern "C" void NNS_G3dGlbFlushVP(void);
extern "C" void NNS_G3dWorldPosToScrPos(void);
extern "C" s32 _ZN10ConfigFile6GetIntEPKc(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" s32 _ffltu(...);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" void func_0202b608(void);
extern "C" s32 func_02094450(...);
extern "C" s32 func_02094484(...);
extern "C" s32 func_020944d4(...);
extern "C" s32 func_02094528(...);
extern "C" s32 func_02094580(...);
extern "C" void func_020945ac(void);
extern "C" void func_020945ec(void);
extern "C" void func_020946d8(void);
extern "C" void func_0209489c(void);

extern "C" asm void func_02095154(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    ldr r4, [r2, #0x44]
    mov r1, #0x800
    mov r3, r4, asr #0x1f
    mov r5, r3, lsl #0xb
    ldrh r7, [r2, #0xa]
    adds r6, r1, r4, lsl #11
    orr r5, r5, r4, lsr #21
    ldr r3, [r0, #0x38]
    ldr r8, [r0, #0x30]
    adc r1, r5, #0
    ldr r4, [r0, #0x3c]
    ldr r9, [r0, #0x34]
    mov r0, r6, lsr #0xc
    orr r0, r0, r1, lsl #20
    ldrh r2, [r2, #0x24]
    mov r5, r3
    mov r6, r4
    add r8, r3, r8
    ands r1, r7, #0x10
    subne r5, r8, r0
    subne r8, r3, r0
    ands r10, r7, #0x20
    add r9, r4, r9
    subne r6, r9, r0
    subne r9, r4, r0
    mov r7, #0
    mov r4, #0x1000
    cmp r2, #0
    beq @L_02095300
    cmp r2, #0xe000
    movhs r2, #0
    movhs r3, r2
    bhs @L_020952b4
    cmp r2, #0xc000
    blo @L_02095210
    sub r2, r2, #0xc000
    mov r2, r2, lsl #1
    mov r2, r2, asr #4
    mov r2, r2, lsl #1
    add r3, r2, #1
    ldr r2, =FX_SinCosTable_
    mov r3, r3, lsl #1
    ldrsh r3, [r2, r3]
    mov r2, #0
    b @L_020952b4
@L_02095210:
    cmp r2, #0xa000
    movhs r2, #0
    movhs r3, r4
    bhs @L_020952b4
    cmp r2, #0x8000
    blo @L_02095250
    sub r2, r2, #0x8000
    mov r2, r2, lsl #1
    mov r2, r2, asr #4
    mov r2, r2, lsl #1
    add r3, r2, #1
    ldr r2, =FX_SinCosTable_
    mov r3, r3, lsl #1
    ldrsh r2, [r2, r3]
    mov r3, r4
    b @L_020952b4
@L_02095250:
    cmp r2, #0x6000
    blo @L_02095278
    sub r2, r2, #0x6000
    mov r2, r2, lsl #1
    mov r3, r2, asr #4
    ldr r2, =FX_SinCosTable_
    mov r3, r3, lsl #2
    ldrsh r3, [r2, r3]
    mov r2, r4
    b @L_020952b4
@L_02095278:
    cmp r2, #0x4000
    movhs r2, r4
    movhs r3, #0
    bhs @L_020952b4
    cmp r2, #0x2000
    movlo r2, #0
    movlo r3, r2
    blo @L_020952b4
    sub r2, r2, #0x2000
    mov r2, r2, lsl #1
    mov r3, r2, asr #4
    ldr r2, =FX_SinCosTable_
    mov r3, r3, lsl #2
    ldrsh r2, [r2, r3]
    mov r3, #0
@L_020952b4:
    cmp r1, #0
    rsbne r2, r2, #0
    cmp r10, #0
    smull r10, r1, r2, r0
    rsbne r3, r3, #0
    adds r2, r10, #0x800
    smull r10, r0, r3, r0
    mov r11, #0
    adc r3, r1, r11
    adds r1, r10, #0x800
    mov r2, r2, lsr #0xc
    orr r2, r2, r3, lsl #20
    adc r0, r0, r11
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    sub r5, r5, r2
    sub r8, r8, r2
    sub r6, r6, r1
    sub r9, r9, r1
@L_02095300:
    mov r11, #1
    add r1, sp, #0x48
    mov r2, r11
    mov r0, #0x40
    str r11, [sp, #0x48]
    bl func_0202b608
    ldr r0, [sp, #0x70]
    mov r1, r5, lsl #8
    cmp r0, #0
    mov r0, r6, lsl #8
    mov r0, r0, asr #0x10
    mov r1, r1, asr #0x10
    beq @L_02095434
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r6, r1, lsr #0x10
    mov r5, r0, lsr #0x10
    mov r4, #0x22
    orr r3, r6, r5, lsl #16
    add r1, sp, #0x44
    mov r0, r4
    mov r2, r11
    str r3, [sp, #0x44]
    bl func_0202b608
    mov r3, #0x800
    add r1, sp, #0x3c
    mov r0, #0x23
    mov r2, #2
    str r3, [sp, #0x3c]
    str r7, [sp, #0x40]
    bl func_0202b608
    mov r0, r9, lsl #8
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
    orr r2, r6, r7, lsl #16
    str r2, [sp, #0x38]
    add r1, sp, #0x38
    mov r0, r4
    mov r2, r11
    bl func_0202b608
    mov r6, #0x25
    mov r9, #0xf0000000
    mov r0, r6
    add r1, sp, #0x34
    mov r2, r11
    str r9, [sp, #0x34]
    bl func_0202b608
    mov r0, r8, lsl #8
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    orr r0, r8, r7, lsl #16
    str r0, [sp, #0x30]
    mov r0, r4
    add r1, sp, #0x30
    mov r2, r11
    bl func_0202b608
    add r0, r9, #0x1000
    str r0, [sp, #0x2c]
    mov r0, r6
    add r1, sp, #0x2c
    mov r2, r11
    bl func_0202b608
    orr r0, r8, r5, lsl #16
    str r0, [sp, #0x28]
    mov r0, r4
    add r1, sp, #0x28
    mov r2, r11
    bl func_0202b608
    mov r1, #0x1800
    str r1, [sp, #0x24]
    mov r0, r6
    mov r2, r11
    add r1, sp, #0x24
    bl func_0202b608
    b @L_02095528
@L_02095434:
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r10, r1, lsr #0x10
    mov r6, r0, lsr #0x10
    mov r5, #0x22
    orr r3, r10, r6, lsl #16
    add r1, sp, #0x20
    mov r0, r5
    mov r2, r11
    str r3, [sp, #0x20]
    bl func_0202b608
    add r1, sp, #0x18
    mov r0, #0x23
    mov r2, #2
    str r7, [sp, #0x18]
    str r7, [sp, #0x1c]
    bl func_0202b608
    mov r0, r9, lsl #8
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
    orr r0, r10, r7, lsl #16
    str r0, [sp, #0x14]
    add r1, sp, #0x14
    mov r0, r5
    mov r2, r11
    bl func_0202b608
    mov r10, #0x25
    mov r9, #0xf0000000
    mov r0, r10
    add r1, sp, #0x10
    mov r2, r11
    str r9, [sp, #0x10]
    bl func_0202b608
    mov r0, r8, lsl #8
    mov r0, r0, asr #0x10
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    orr r0, r8, r7, lsl #16
    str r0, [sp, #0xc]
    mov r0, r5
    add r1, sp, #0xc
    mov r2, r11
    bl func_0202b608
    add r0, r9, #0x1000
    str r0, [sp, #8]
    mov r0, r10
    add r1, sp, #8
    mov r2, r11
    bl func_0202b608
    orr r0, r8, r6, lsl #16
    str r0, [sp, #4]
    mov r0, r5
    add r1, sp, #4
    mov r2, r11
    bl func_0202b608
    mov r0, r10
    mov r2, r11
    add r1, sp, #0
    str r4, [sp]
    bl func_0202b608
@L_02095528:
    mov r1, #0
    mov r2, r1
    mov r0, #0x41
    bl func_0202b608
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02095544(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    mov r8, r2
    mov r9, r1
    ldrh r1, [r8, #4]
    mov r10, r0
    str r3, [sp, #0x10]
    ldr r7, [sp, #0x50]
    bl func_02096160
    str r0, [sp, #0x18]
    ldrh r1, [r8, #6]
    mov r0, r10
    bl func_02096160
    str r0, [sp, #0x14]
    ldr r1, [sp, #0x18]
    add r0, r10, #4
    bl func_02097ac0
    cmp r0, #0
    addne sp, sp, #0x28
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x14]
    add r0, r10, #4
    bl func_02097ac0
    cmp r0, #0
    addne sp, sp, #0x28
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x18]
    add r0, r10, #4
    mov r2, #0
    bl func_02098824
    movs r4, r0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsh r2, [r8, #0x10]
    mov r0, r10
    mov r1, r4
    bl func_02094450
    str r0, [sp, #0x20]
    cmp r0, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsh r2, [r8, #0x12]
    ldr r3, [r4, #4]
    ldrh r1, [r8, #0xa]
    add r0, r0, r2, lsl #3
    ldrh r0, [r0, #8]
    add r11, r4, r3
    tst r1, #0x200
    add r0, r11, r0, lsl #2
    ldr r0, [r0, #4]
    movne r6, #1
    add r0, r4, r0
    ldreqh r6, [r0, #8]
    str r0, [sp, #0x1c]
    add r4, r0, #0xc
    cmp r6, #0
    mov r5, #0
    addle sp, sp, #0x28
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02095630:
    ldr r0, [sp, #0x14]
    ldr r3, [sp, #0x18]
    stmia sp, {r0, r4, r11}
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_020946d8
    cmp r0, #0
    beq @L_020956e0
    mov r1, #0
    mov r0, #0x11
    mov r2, r1
    bl func_0202b608
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r7
    bl func_020945ec
    ldr r0, [sp, #0x1c]
    mov r1, r9
    str r0, [sp]
    ldr r0, [sp, #0x20]
    mov r2, r8
    str r0, [sp, #4]
    ldr r0, [sp, #0x10]
    mov r3, r4
    str r0, [sp, #8]
    mov r0, r10
    str r7, [sp, #0xc]
    bl func_0209489c
    cmp r0, #0
    beq @L_020956c8
    str r7, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r4
    bl func_02095154
@L_020956c8:
    mov r0, #1
    str r0, [sp, #0x24]
    mov r0, #0x12
    add r1, sp, #0x24
    mov r2, #1
    bl func_0202b608
@L_020956e0:
    add r4, r4, #0x10
    add r5, r5, #1
    cmp r5, r6
    blt @L_02095630
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020956f8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r1
    ldr r1, [r10, #0x14]
    mov r7, r0
    cmp r1, #0
    mov r6, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsh r1, [r10, #0x10]
    cmp r1, r2
    bne @L_02095738
    ldrsh r0, [r10, #0x12]
    cmp r0, r3
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02095738:
    cmp r1, #0
    ldrgesh r0, [r10, #0x12]
    cmpge r0, #0
    addlt sp, sp, #0xc
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r1, [r10, #4]
    mov r0, r7
    bl func_02096160
    mov r5, r0
    mov r1, r5
    add r0, r7, #4
    bl func_02097ac0
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r5
    mov r2, r6
    add r0, r7, #4
    bl func_02098824
    mov r4, r0
    mov r1, r5
    mov r2, r6
    add r0, r7, #4
    bl func_0209860c
    mov r5, r0
    ldrsh r2, [r10, #0x10]
    mov r0, r7
    mov r1, r4
    bl func_02094450
    cmp r0, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsh r2, [r10, #0x12]
    ldrh r1, [r10, #0xa]
    ldr r3, [r4, #4]
    add r0, r0, r2, lsl #3
    ldrh r2, [r0, #8]
    add r0, r4, r3
    str r0, [sp, #4]
    add r0, r0, r2, lsl #2
    ldr r0, [r0, #4]
    tst r1, #0x200
    add r0, r4, r0
    str r0, [sp, #8]
    add r4, r0, #0xc
    beq @L_02095800
    ldr r0, [r10, #0x14]
    mov r1, r6
    mov r2, #0x200
    bl MI_CpuFill8
@L_02095800:
    ldr r0, [sp, #8]
    mov r7, #0
    ldrh r0, [r0, #8]
    str r7, [sp]
    cmp r0, #0
    ble @L_02095970
@L_02095818:
    ldr r2, [sp, #4]
    ldrh r0, [r4, #8]
    ldrh r1, [r4, #0xa]
    ldrb r2, [r2, #2]
    bl func_02098ae4
    ldrh r1, [r10, #0xa]
    mov r6, r0
    tst r1, #0x200
    beq @L_02095934
    ldrh r11, [r4]
    ldrh r1, [r4, #0xa]
    mov r2, #8
    ldrh r0, [r4, #8]
    tst r11, #1
    mov r7, r2, lsl r1
    mov r0, r2, lsl r0
    ldrh r8, [r4, #2]
    bne @L_020958a4
    cmp r7, #0
    mov r6, #0
    ble @L_0209592c
    mov r9, r0, asr #1
@L_02095870:
    ldr r0, [r4, #0xc]
    ldr r2, [r10, #0x14]
    add r0, r5, r0
    mla r0, r9, r6, r0
    add r1, r6, r8
    add r1, r2, r1, lsl #4
    mov r2, r9
    add r1, r1, r11, asr #1
    bl MI_CpuCopy8
    add r6, r6, #1
    cmp r6, r7
    blt @L_02095870
    b @L_0209592c
@L_020958a4:
    cmp r7, #0
    mov r1, #0
    ble @L_0209592c
    mov r0, r0, asr #1
    add r3, r11, #1
    mov lr, r1
@L_020958bc:
    ldr r2, [r4, #0xc]
    ldr r6, [r10, #0x14]
    add r2, r5, r2
    mla r9, r0, r1, r2
    cmp r0, #0
    add r2, r1, r8
    add r2, r6, r2, lsl #4
    add r11, r2, r3, asr #1
    mov r6, lr
    ble @L_02095920
@L_020958e4:
    ldrb r2, [r11, #-1]
    ldrb r12, [r9]
    add r6, r6, #1
    and r2, r2, #0xf
    mov r12, r12, lsl #0x1c
    orr r2, r2, r12, lsr #24
    strb r2, [r11, #-1]
    cmp r6, r0
    ldrb r2, [r11]
    ldrb r12, [r9], #1
    and r2, r2, #0xf0
    and r12, r12, #0xf0
    orr r2, r2, r12, asr #4
    strb r2, [r11], #1
    blt @L_020958e4
@L_02095920:
    add r1, r1, #1
    cmp r1, r7
    blt @L_020958bc
@L_0209592c:
    mov r7, #0x200
    b @L_02095950
@L_02095934:
    ldr r0, [r4, #0xc]
    ldr r1, [r10, #0x14]
    mov r2, r6
    add r0, r5, r0
    add r1, r1, r7
    bl MIi_CpuCopy32
    add r7, r7, r6
@L_02095950:
    ldr r0, [sp, #8]
    add r4, r4, #0x10
    ldrh r1, [r0, #8]
    ldr r0, [sp]
    add r0, r0, #1
    str r0, [sp]
    cmp r0, r1
    blt @L_02095818
@L_02095970:
    ldr r0, [r10, #0x14]
    mov r1, r7
    bl DC_FlushRange
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_02095984(u8 *arg0, u8 *arg1, u16 arg2, u8 arg3, s32 arg4, s32 arg5)
{
    u8 *r4;
    s32 r5;
    s32 r8;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    u16 t0;
    s32 t1;
    s32 t2;
    t0 = *(u16 *)(arg1 + 0x4);
    r5 = 0;
    v0 = func_020987fc((s32)(arg0 + 4), t0, 0, arg3);
    r4 = arg1;
    r8 = (s32)arg0;
    arg1 = (u8 *)v0;
    if ((s32)arg1 == 0) {
        return r5;
    } else {
        v1 = func_02094450(r8, (s32)arg1, arg2);
        arg0 = (u8 *)v1;
        if ((s32)arg0 == 0) {
            return r5;
        } else {
            *(u16 *)(r4 + 0x10) = arg2;
            if (arg5 != 0) {
                *(u16 *)(r4 + 0x12) = r5;
                t1 = *(s32 *)(arg0 + 0xC);
                arg0 = (u8 *)(*(s32 *)(arg0 + 0xC) << 0xC);
                if (t1 != 0) {
                    v2 = _ffltu((s32)arg0, arg5);
                    v3 = _fadd(0x3F000000, v2);
                    arg0 = (u8 *)v3;
                } else {
                    v4 = _ffltu((s32)arg0, arg5);
                    v5 = _fsub(v4, 0x3F000000);
                    arg0 = (u8 *)v5;
                }
                v6 = _ffix((s32)arg0);
                *(s32 *)(r4 + 0x20) = v6;
            }
            *(u8 *)(r4 + 0x1A) = arg3;
            *(s32 *)(r4 + 0x1C) = arg4;
            if (arg3 != 0) {
                t2 = (*(u16 *)(r4 + 0xA) | 2);
                *(u16 *)(r4 + 0xA) = t2;
            }
            return 1;
        }
    }
}

extern "C" asm s32 func_02095a40(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r1
    ldrb r1, [r6, #0x1a]
    mov r7, r0
    mov r5, r2
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r6, #0x1c]
    cmp r0, #0
    ble @L_02095a80
    sub r0, r0, r5
    str r0, [r6, #0x1c]
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, #0
    str r0, [r6, #0x1c]
@L_02095a80:
    ldrh r1, [r6, #4]
    mov r4, #0
    mov r2, r4
    add r0, r7, #4
    bl func_020987fc
    movs r1, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsh r2, [r6, #0x10]
    mov r0, r7
    bl func_02094450
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsh r2, [r6, #0x12]
    ldr r1, [r6, #0x20]
    add r3, r0, #8
    cmp r1, #0
    add r3, r3, r2, lsl #3
    bgt @L_02095b8c
    ldrh r1, [r3, #2]
    cmp r1, #0
    bne @L_02095b24
    ldrb r1, [r6, #0x1a]
    mov r2, #1
    strb r2, [r6, #0x1b]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_02095b08
    b @L_02095b24
    b @L_02095b08
    b @L_02095b08
    b @L_02095b24
    b @L_02095b00
@L_02095b00:
    strb r4, [r6, #0x1a]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02095b08:
    ldrh r1, [r6, #0xa]
    ldr r0, =0xfffd
    mov r2, #0
    and r0, r1, r0
    strb r2, [r6, #0x1a]
    strh r0, [r6, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02095b24:
    ldrsh r4, [r6, #0x12]
    ldrh r1, [r3, #2]
    ldrsh r5, [r6, #0x10]
    strh r1, [r6, #0x12]
    ldrsh r1, [r6, #0x12]
    add r0, r0, r1, lsl #3
    ldr r0, [r0, #0xc]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    beq @L_02095b60
    bl _ffltu
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02095b6c
@L_02095b60:
    bl _ffltu
    mov r1, #0x3f000000
    bl _fsub
@L_02095b6c:
    bl _ffix
    str r0, [r6, #0x20]
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_020956f8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02095b8c:
    sub r0, r1, r5
    str r0, [r6, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_02095b9c(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, [r1]
    cmp r4, #0
    ldrne r5, [r2]
    cmpne r5, #0
    streq r3, [r1]
    streq r3, [r2]
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r12, r4
    cmp r4, #0
    beq @L_02095be4
    ldrb lr, [r3, #0x18]
@L_02095bcc:
    ldrb r0, [r12, #0x18]
    cmp lr, r0
    bhi @L_02095be4
    ldr r12, [r12, #0x20]
    cmp r12, #0
    bne @L_02095bcc
@L_02095be4:
    cmp r12, #0
    bne @L_02095c08
    str r3, [r5, #0x20]
    mov r0, #0
    str r0, [r3, #0x20]
    ldr r0, [r2]
    str r0, [r3, #0x1c]
    str r3, [r2]
    ldmia sp!, {r3, r4, r5, pc}
@L_02095c08:
    cmp r12, r4
    streq r3, [r1]
    str r12, [r3, #0x20]
    ldr r0, [r12, #0x1c]
    str r0, [r3, #0x1c]
    str r3, [r12, #0x1c]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_02095c24(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3)
{
    if ((s32)arg3 == *(s32 *)(arg1))
        *(s32 *)(arg1) = *(s32 *)(arg3 + 0x20);
    if ((s32)arg3 == *(s32 *)(arg2))
        *(s32 *)(arg2) = *(s32 *)(arg3 + 0x1C);
    if ((s32)*(u8 * *)(arg3 + 0x1C) != 0)
        *(s32 *)(*(u8 * *)(arg3 + 0x1C) + 0x20) = *(s32 *)(arg3 + 0x20);
    if ((s32)*(u8 * *)(arg3 + 0x20) != 0)
        *(s32 *)(*(u8 * *)(arg3 + 0x20) + 0x1C) = *(s32 *)(arg3 + 0x1C);
    *(s32 *)(arg3 + 0x1C) = 0;
    *(s32 *)(arg3 + 0x20) = 0;
    return 0;
}

extern "C" asm void func_02095c74(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    ldr r4, [r1, #0x14]
    ldr lr, [r2, #0x30]
    ldr r12, [r1, #0x10]
    ldr r3, [r2, #0x2c]
    ldr r0, [r2, #0x28]
    ldr r1, [r1, #0xc]
    add r12, r12, r3
    add r3, r1, r0
    add r4, r4, lr
    add r0, sp, #8
    add r1, sp, #4
    add r2, sp, #0
    str r3, [sp, #8]
    str r12, [sp, #0xc]
    str r4, [sp, #0x10]
    bl NNS_G3dWorldPosToScrPos
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #1
    ldmeqia sp!, {r3, r4, pc}
    ldr r1, [sp, #4]
    mvn r0, #0xf
    cmp r1, r0
    blt @L_02095cfc
    cmp r1, #0x110
    bge @L_02095cfc
    ldr r1, [sp]
    sub r0, r0, #0x10
    cmp r1, r0
    blt @L_02095cfc
    cmp r1, #0xe0
    blt @L_02095d08
@L_02095cfc:
    add sp, sp, #0x14
    mov r0, #0
    ldmia sp!, {r3, r4, pc}
@L_02095d08:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

extern "C" void func_02095d14(u8 *arg0, u8 *arg1, u16 arg2, u8 arg3, s32 arg4, s32 arg5)
{
    s16 y;
    s16 x;
    x = *(s16 *)(arg1 + 0x10);
    y = *(s16 *)(arg1 + 0x12);
    if (func_02095984(arg0, arg1, arg2, arg3, arg4, arg5) == 0)
        return;
    *(u8 *)(arg1 + 0x1B) = 0;
    ((void (*)(u8 *, u8 *, s32, s32))func_020956f8)(arg0, arg1, x, y);
}

extern "C" s32 func_02095d70(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 v1;
    *(s32 *)(arg0 + 0x20) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x28) = 0;
    *(s32 *)(arg0 + 0x2C) = 0;
    *(s32 *)(arg0 + 0x40) = 0;
    if ((arg1 <= 0 || arg2 <= 0))
        return 0;
    func_02097858((s32)(arg0 + 4), arg1, arg2);
    v1 = _ZN8GameHeap5AllocEiii((s32)((u8 *)&data_020c47b4), (arg2 * 0x24), 0, 1);
    *(s32 *)(arg0 + 0x20) = v1;
    arg1 = v1;
    if (arg1 == 0) {
        func_02095ea0((void *)arg0);
        return 0;
    } else {
        MIi_CpuClearFast(0, arg1, (arg2 * 0x24));
        *(s32 *)(arg0 + 0x24) = arg2;
        return 1;
    }
}

extern "C" s32 func_02095e04(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    u8 *r5;
    r5 = (u8 *)arg0;
    if (*(s32 *)(r5 + 0x20) != 0) {
        r4 = *(s32 *)(r5 + 0x24);
        if (r4 >= 1) {
            do {
                func_020962f4((s32)r5, r4);
                r4 = (r4 - 1);
            } while (r4 >= 1);
        }
        _ZN8GameHeap4FreeEPv((s32)data_020c47b4, *(s32 *)(r5 + 0x20));
    }
    func_02097880((r5 + 4));
    *(s32 *)(r5 + 0x20) = 0;
    *(s32 *)(r5 + 0x24) = 0;
    *(s32 *)(r5 + 0x28) = 0;
    *(s32 *)(r5 + 0x2C) = 0;
    return 0;
}

extern "C" s32 func_02095e6c(u8 *arg0)
{
    s32 v0;
    v0 = _ZN10ConfigFile6GetIntEPKc((s32)((u8 *)&data_020c46e4), (s32)((u8 *)&data_020afd28));
    *(s32 *)(arg0 + 0x44) = v0;
    if ((u32)v0 >= (u32)0x20) {
        *(s32 *)(arg0 + 0x44) = 0x10;
    }
    return 1;
}

extern "C" void func_02095ea0(void *obj)
{
}

extern "C" void func_02095ea4(u8 *arg0, u8 *arg1)
{
    s32 r4;
    u8 *r5;
    s32 r6;
    u8 *r7;
    s32 v0;
    if (*(s32 *)(arg0 + 0x28) == 0)
        return;
    r5 = (u8 *)*(s32 *)(arg0 + 0x28);
    r6 = (s32)arg1;
    r7 = arg0;
    do {
        if (*(s32 *)(r5) != 0) {
            r4 = *(u8 *)(r5 + 0x6);
            if (r4 >= 1) {
                do {
                    v0 = func_02096110((s32)r7, (s32)r5, r4);
                    arg1 = (u8 *)v0;
                    if (((s32)arg1 != 0 && ((*(s32 *)(r7 + 0x40) & 1) == 0 || (*(u16 *)(arg1 + 0xA) & 0x100) != 0))) {
                        func_02095a40((s32)r7, (s32)arg1, r6);
                    }
                    r4 = (r4 - 1);
                } while (r4 >= 1);
            }
        }
        r5 = (u8 *)*(s32 *)(r5 + 0x20);
    } while ((s32)r5 != 0);
    return;
}

extern "C" asm int func_02095f2c(void *obj, int a, int b)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    ldr r0, [r9, #0x28]
    mov r8, r1
    mov r7, r2
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, #0
    mov r2, r1
    mov r0, #0x15
    bl func_0202b608
    bl NNS_G3dGlbFlushVP
    mov r0, r9
    bl func_020945ac
    ldr r6, [r9, #0x28]
@L_02095f68:
    ldr r0, [r6]
    cmp r0, #0
    beq @L_02096038
    ldrh r0, [r6, #4]
    tst r0, #2
    ldrneb r0, [r6, #7]
    cmpne r0, #0
    beq @L_02096038
    ldrb r0, [r6, #6]
    mov r5, #1
    cmp r0, #1
    blt @L_02096038
@L_02095f98:
    mov r0, r9
    mov r1, r6
    mov r2, r5
    bl func_02096110
    movs r4, r0
    ldrneb r0, [r4, #0xc]
    cmpne r0, #0
    beq @L_02096028
    ldrh r1, [r4, #0xa]
    tst r1, #2
    beq @L_02096028
    ldr r0, [r4, #0x1c]
    cmp r0, #0
    bgt @L_02096028
    cmp r8, #0
    beq @L_02095fe0
    tst r1, #0x80
    beq @L_02095ff0
@L_02095fe0:
    cmp r8, #0
    bne @L_02096028
    tst r1, #0x80
    beq @L_02096028
@L_02095ff0:
    cmp r8, #0
    bne @L_02096010
    mov r0, r9
    mov r1, r6
    mov r2, r4
    bl func_02095c74
    cmp r0, #0
    beq @L_02096028
@L_02096010:
    mov r0, r9
    mov r1, r6
    mov r2, r4
    mov r3, r8
    str r7, [sp]
    bl func_02095544
@L_02096028:
    ldrb r0, [r6, #6]
    add r5, r5, #1
    cmp r5, r0
    ble @L_02095f98
@L_02096038:
    ldr r6, [r6, #0x20]
    cmp r6, #0
    bne @L_02095f68
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" int func_02096048(void *obj)
{
    return func_02095f2c(obj, 1, 0);
}

extern "C" int func_0209605c(void *obj)
{
    return func_02095f2c(obj, 0, 0);
}

extern "C" int func_02096070(void *obj)
{
    return func_02095f2c(obj, 0, 1);
}

extern "C" BOOL func_02096084(u8 *obj, int a)
{
    func_020984f0(obj + 4, a);
    return TRUE;
}

extern "C" BOOL func_02096098(u8 *obj, int a)
{
    func_0209855c(obj + 4, a);
    return TRUE;
}

extern "C" asm s32 func_020960ac(...)
{
    ldr r2, [r0, #0x20]
    cmp r2, #0
    ldrne r0, [r0, #0x24]
    cmpne r0, #0
    movle r0, #0
    bxle lr
    cmp r1, #0
    ble @L_020960d4
    cmp r1, r0
    ble @L_020960dc
@L_020960d4:
    mov r0, #0
    bx lr
@L_020960dc:
    sub r1, r1, #1
    mov r0, #0x24
    mla r0, r1, r0, r2
    bx lr
}

extern "C" void func_020960ec(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0 = func_020960ac(arg0, arg1, arg2);
    func_02096110(arg0, v0, arg2);
}

extern "C" asm s32 func_02096110(...)
{
    cmp r1, #0
    ldrne r3, [r1]
    cmpne r3, #0
    cmpne r2, #0
    ble @L_02096130
    ldrb r0, [r1, #6]
    cmp r2, r0
    ble @L_02096138
@L_02096130:
    mov r0, #0
    bx lr
@L_02096138:
    sub r1, r2, #1
    mov r0, #0x48
    mla r0, r1, r0, r3
    bx lr
}

extern "C" int func_02096148(u8 *obj, int a, int b)
{
    return func_02097ca8(obj + 4, a, (u8)b, 0);
}

extern "C" u8 *func_02096160(u8 *obj, int id)
{
    return func_020985fc(obj + 4, id);
}

extern "C" s32 func_02096170(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v0 = func_020987fc((arg0 + 4), arg1, 0, arg3);
    arg1 = v0;
    r4 = 0;
    r5 = arg3;
    r6 = arg2;
    r7 = arg0;
    if (arg1 != 0) {
        s32 v1 = func_02094484(r7, arg1, r6, r5);
        r4 = v1;
    }
    return r4;
}

extern "C" s32 func_020961b4(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v0 = func_020987fc((arg0 + 4), arg1, 0, arg3);
    arg1 = v0;
    r4 = 0;
    r5 = arg2;
    r6 = arg0;
    if (arg1 != 0) {
        s32 v1 = func_02094450(r6, arg1, r5);
        r4 = v1;
    }
    return r4;
}

extern "C" s32 func_020961f0(s32 arg0, s32 arg1)
{
    s32 r4;
    u8 *r5;
    u8 *r6;
    s32 r7;
    s32 r8;
    s32 v0;
    s32 v1;
    s32 v3;
    s32 v6;
    s32 t0;
    s32 t1;
    r6 = (u8 *)arg1;
    r7 = arg0;
    if (((s32)r6 <= 0 || (s32)r6 >= 0xFE)) {
        return 0;
    } else {
        v0 = func_020944d4();
        v1 = func_020960ac(r7, v0);
        r4 = v0;
        r5 = (u8 *)v1;
        if ((s32)r5 == 0) {
            return 0;
        } else {
            func_02094580(r7, (s32)r5);
            v3 = _ZN8GameHeap5AllocEiii((u8 *)((u8 *)&data_020c47b4), (s32)((s32)r6 * 0x48), 0, 1);
            if (v3 == 0)
                return 0;
            MIi_CpuClearFast(0, v3, (s32)((s32)r6 * 0x48));
            *(s32 *)(r5) = v3;
            *(u8 *)(r5 + 0x6) = (u8)r6;
            t0 = (*(u16 *)(r5 + 0x4) | 3);
            *(u16 *)(r5 + 0x4) = t0;
            func_02095b9c(r7, (r7 + 0x28), (r7 + 0x2C), (s32)r5);
            r8 = *(u8 *)(r5 + 0x6);
            if (r8 >= 1) {
                do {
                    v6 = func_02096110(r7, (s32)r5, r8);
                    r6 = (u8 *)v6;
                    if ((s32)r6 != 0) {
                        func_02094528(r7, (s32)r6);
                        t1 = (*(u16 *)(r6 + 0xA) | 1);
                        *(u16 *)(r6 + 0xA) = t1;
                    }
                    r8 = (r8 - 1);
                } while (r8 >= 1);
            }
            return r4;
        }
    }
}

extern "C" asm s32 func_020962f4(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_020960ac
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r4, #4]
    tst r0, #1
    beq @L_02096328
    mov r0, r5
    mov r3, r4
    add r1, r5, #0x28
    add r2, r5, #0x2c
    bl func_02095c24
@L_02096328:
    ldr r1, [r4]
    cmp r1, #0
    beq @L_0209633c
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_0209633c:
    mov r1, r4
    mov r0, #0
    mov r2, #0x24
    bl MIi_CpuClearFast
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02096354(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    movs r6, r3
    mov r7, r2
    mov r9, r1
    movmi r6, r7
    mov r0, r8
    mov r1, r7
    bl func_02096160
    mov r5, r0
    mov r0, r8
    mov r1, r6
    bl func_02096160
    mov r4, r0
    cmp r5, #0
    cmpne r4, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r5
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r4
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r8
    mov r1, r9
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6, lsl #0x10
    mov r9, r0, lsr #0x10
    mvn r6, #0
@L_020963ec:
    mov r0, r8
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    strneh r9, [r0, #6]
    ldrneh r1, [r0, #4]
    sub r5, r5, #1
    cmpne r1, r7
    strneh r7, [r0, #4]
    strneh r6, [r0, #0x10]
    strneh r6, [r0, #0x12]
    cmp r5, #1
    bge @L_020963ec
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_02096428(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r = ((s32 (*)(...))func_02096160)(arg0, arg2);
    u8 *e;
    s32 i;
    if (r == 0)
        return;
    if (((s32 (*)(...))func_02096eb4)(r) != 0)
        return;
    e = (u8 *)((s32 (*)(...))func_020960ac)(arg0, arg1);
    if (e == 0 || *(s32 *)e == 0)
        return;
    for (i = e[6]; i >= 1; i--) {
        u8 *p = (u8 *)((s32 (*)(...))func_02096110)(arg0, e, i);
        if (p != 0)
            *(u16 *)(p + 6) = (u16)arg2;
    }
}

extern "C" void func_020964ac(s32 arg0, s32 arg1, u8 arg2)
{
    u8 *p = ((u8 *(*)(s32, s32))func_020960ac)(arg0, arg1);
    s32 i;
    if (p == 0 || *(s32 *)p == 0)
        return;
    for (i = p[6]; i >= 1; i--) {
        u8 *e = ((u8 *(*)(s32, u8 *, s32))func_02096110)(arg0, p, i);
        if (e != 0)
            e[8] = arg2;
    }
}

extern "C" void func_02096500(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r;
    s32 i;
    if (arg3 == 0) {
        ((s32 (*)(...))func_0209657c)(arg0, arg1, arg2);
        return;
    }
    r = (u8 *)((s32 (*)(...))func_020960ac)(arg0, arg1);
    if (r == 0 || *(s32 *)r == 0)
        return;
    for (i = r[6]; i >= 1; i--) {
        u8 *e = (u8 *)((s32 (*)(...))func_02096110)(arg0, r, i);
        if (e != 0)
            *(u16 *)(e + 0xA) |= (u16)(arg2 & 0x7BC3);
    }
}
