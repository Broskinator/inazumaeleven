#include "game/Unk_02095154.hpp"

extern "C" void func_020984f0(void *a, int b);
extern "C" void func_0209855c(void *a, int b);
extern "C" int func_02097ca8(void *a, int b, int c, int d);
extern "C" u8 *func_020985fc(u8 *self, int id);

extern "C" void func_02097ac0(void);     // (for the asm functions)
extern "C" void func_0209860c(void);     // (for the asm functions)
extern "C" void func_020987fc(void);     // (for the asm functions)
extern "C" void func_02098824(void);     // (for the asm functions)
extern "C" void func_02098ae4(void);     // (for the asm functions)
extern "C" void func_0209657c(void);     // (for the asm functions)
extern "C" void func_02096eb4(void);     // (for the asm functions)
extern "C" void func_02097858(void);     // (for the asm functions)
extern "C" void func_02097880(void);     // (for the asm functions)
extern "C" void func_02095154(void);
extern "C" void func_02095544(void);
extern "C" void func_020956f8(void);
extern "C" void func_02095984(void);
extern "C" void func_02095a40(void);
extern "C" void func_02095b9c(void);
extern "C" void func_02095c24(void);
extern "C" void func_02095c74(void);
extern "C" void func_02095d14(void);
extern "C" void func_02095d70(void);
extern "C" void func_02095e04(void);
extern "C" void func_02095e6c(void);
extern "C" void func_02095ea0(void *obj);
extern "C" void func_02095ea4(void);
extern "C" int func_02095f2c(void *obj, int a, int b);
extern "C" int func_02096048(void *obj);
extern "C" int func_0209605c(void *obj);
extern "C" int func_02096070(void *obj);
extern "C" BOOL func_02096084(u8 *obj, int a);
extern "C" BOOL func_02096098(u8 *obj, int a);
extern "C" void func_020960ac(void);
extern "C" void func_020960ec(void);
extern "C" void func_02096110(void);
extern "C" int func_02096148(u8 *obj, int a, int b);
extern "C" u8 *func_02096160(u8 *obj, int id);
extern "C" void func_02096170(void);
extern "C" void func_020961b4(void);
extern "C" void func_020961f0(void);
extern "C" void func_020962f4(void);
extern "C" void func_02096354(void);
extern "C" void func_02096428(void);
extern "C" void func_020964ac(void);
extern "C" void func_02096500(void);

extern "C" char data_020afd28[];
extern "C" char data_020c46e4[];
extern "C" char data_020c47b4[];
extern "C" void DC_FlushRange(void);
extern "C" void FX_SinCosTable_(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void MIi_CpuCopy32(void);
extern "C" void NNS_G3dGlbFlushVP(void);
extern "C" void NNS_G3dWorldPosToScrPos(void);
extern "C" void _ZN10ConfigFile6GetIntEPKc(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_020224cc(void);
extern "C" void func_02022b2c(void);
extern "C" void func_0202300c(void);
extern "C" void func_0202323c(void);
extern "C" void func_0202b608(void);
extern "C" void func_02094450(void);
extern "C" void func_02094484(void);
extern "C" void func_020944d4(void);
extern "C" void func_02094528(void);
extern "C" void func_02094580(void);
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

extern "C" asm void func_02095984(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r1
    ldrh r1, [r4, #4]
    mov r8, r0
    mov r5, #0
    mov r7, r2
    mov r2, r5
    add r0, r8, #4
    mov r6, r3
    bl func_020987fc
    movs r1, r0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r8
    mov r2, r7
    bl func_02094450
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r1, [sp, #0x1c]
    strh r7, [r4, #0x10]
    cmp r1, #0
    beq @L_02095a1c
    strh r5, [r4, #0x12]
    ldr r0, [r0, #0xc]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    beq @L_02095a08
    bl func_020224cc
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02095a14
@L_02095a08:
    bl func_020224cc
    mov r1, #0x3f000000
    bl func_0202323c
@L_02095a14:
    bl func_02022b2c
    str r0, [r4, #0x20]
@L_02095a1c:
    ldr r0, [sp, #0x18]
    cmp r6, #0
    str r0, [r4, #0x1c]
    ldrneh r0, [r4, #0xa]
    strb r6, [r4, #0x1a]
    orrne r0, r0, #2
    strneh r0, [r4, #0xa]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02095a40(void)
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
    bl func_020224cc
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02095b6c
@L_02095b60:
    bl func_020224cc
    mov r1, #0x3f000000
    bl func_0202323c
@L_02095b6c:
    bl func_02022b2c
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

extern "C" asm void func_02095b9c(void)
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

extern "C" asm void func_02095c24(void)
{
    ldr r0, [r1]
    cmp r3, r0
    ldreq r0, [r3, #0x20]
    streq r0, [r1]
    ldr r0, [r2]
    cmp r3, r0
    ldreq r0, [r3, #0x1c]
    streq r0, [r2]
    ldr r1, [r3, #0x1c]
    cmp r1, #0
    ldrne r0, [r3, #0x20]
    strne r0, [r1, #0x20]
    ldr r1, [r3, #0x20]
    cmp r1, #0
    ldrne r0, [r3, #0x1c]
    strne r0, [r1, #0x1c]
    mov r0, #0
    str r0, [r3, #0x1c]
    str r0, [r3, #0x20]
    bx lr
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

extern "C" asm void func_02095d14(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r6, r1
    ldrsh r5, [r6, #0x10]
    ldrsh r4, [r6, #0x12]
    ldr lr, [sp, #0x20]
    ldr r12, [sp, #0x24]
    str lr, [sp]
    mov r7, r0
    str r12, [sp, #4]
    bl func_02095984
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r12, #0
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    strb r12, [r6, #0x1b]
    bl func_020956f8
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02095d70(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r5, #0
    mov r7, r2
    cmp r1, #0
    cmpgt r7, #0
    str r5, [r8, #0x20]
    str r5, [r8, #0x24]
    str r5, [r8, #0x28]
    str r5, [r8, #0x2c]
    str r5, [r8, #0x40]
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r8, #4
    bl func_02097858
    mov r0, #0x24
    mul r6, r7, r0
    mov r4, #1
    ldr r0, =data_020c47b4
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl _ZN8GameHeap5AllocEiii
    movs r1, r0
    str r1, [r8, #0x20]
    bne @L_02095de8
    mov r0, r8
    bl func_02095ea0
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02095de8:
    mov r0, r5
    mov r2, r6
    bl MIi_CpuClearFast
    mov r0, r4
    str r7, [r8, #0x24]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02095e04(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5, #0x20]
    cmp r0, #0
    beq @L_02095e48
    ldr r4, [r5, #0x24]
    cmp r4, #1
    blt @L_02095e3c
@L_02095e24:
    mov r0, r5
    mov r1, r4
    bl func_020962f4
    sub r4, r4, #1
    cmp r4, #1
    bge @L_02095e24
@L_02095e3c:
    ldr r1, [r5, #0x20]
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_02095e48:
    add r0, r5, #4
    bl func_02097880
    mov r0, #0
    str r0, [r5, #0x20]
    str r0, [r5, #0x24]
    str r0, [r5, #0x28]
    str r0, [r5, #0x2c]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02095e6c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, =data_020c46e4
    ldr r1, =data_020afd28
    bl _ZN10ConfigFile6GetIntEPKc
    str r0, [r4, #0x44]
    cmp r0, #0x20
    movhs r0, #0x10
    strhs r0, [r4, #0x44]
    mov r0, #1
    ldmia sp!, {r4, pc}
}

extern "C" void func_02095ea0(void *obj)
{
}

extern "C" asm void func_02095ea4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r5, [r7, #0x28]
    mov r6, r1
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_02095ebc:
    ldr r0, [r5]
    cmp r0, #0
    beq @L_02095f1c
    ldrb r4, [r5, #6]
    cmp r4, #1
    blt @L_02095f1c
@L_02095ed4:
    mov r0, r7
    mov r1, r5
    mov r2, r4
    bl func_02096110
    movs r1, r0
    beq @L_02095f10
    ldr r0, [r7, #0x40]
    tst r0, #1
    beq @L_02095f04
    ldrh r0, [r1, #0xa]
    tst r0, #0x100
    beq @L_02095f10
@L_02095f04:
    mov r0, r7
    mov r2, r6
    bl func_02095a40
@L_02095f10:
    sub r4, r4, #1
    cmp r4, #1
    bge @L_02095ed4
@L_02095f1c:
    ldr r5, [r5, #0x20]
    cmp r5, #0
    bne @L_02095ebc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
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

extern "C" asm void func_020960ac(void)
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

extern "C" asm void func_020960ec(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r2
    bl func_020960ac
    mov r1, r0
    mov r0, r5
    mov r2, r4
    bl func_02096110
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02096110(void)
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

extern "C" asm void func_02096170(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r4, #0
    mov r6, r2
    mov r2, r4
    add r0, r7, #4
    mov r5, r3
    bl func_020987fc
    movs r1, r0
    beq @L_020961ac
    mov r0, r7
    mov r2, r6
    mov r3, r5
    bl func_02094484
    mov r4, r0
@L_020961ac:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020961b4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, #0
    mov r5, r2
    mov r2, r4
    add r0, r6, #4
    bl func_020987fc
    movs r1, r0
    beq @L_020961e8
    mov r0, r6
    mov r2, r5
    bl func_02094450
    mov r4, r0
@L_020961e8:
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020961f0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r6, r1
    mov r7, r0
    cmp r6, #0
    ble @L_0209620c
    cmp r6, #0xfe
    blt @L_02096214
@L_0209620c:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02096214:
    bl func_020944d4
    mov r4, r0
    mov r0, r7
    mov r1, r4
    bl func_020960ac
    movs r5, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r7
    mov r1, r5
    bl func_02094580
    mov r0, #0x48
    mul r10, r6, r0
    mov r9, #0
    ldr r0, =data_020c47b4
    mov r1, r10
    mov r2, r9
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    movs r8, r0
    mov r0, r9
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r8
    mov r2, r10
    bl MIi_CpuClearFast
    str r8, [r5]
    strb r6, [r5, #6]
    ldrh r1, [r5, #4]
    mov r0, r7
    mov r3, r5
    orr r1, r1, #3
    strh r1, [r5, #4]
    add r1, r7, #0x28
    add r2, r7, #0x2c
    bl func_02095b9c
    ldrb r8, [r5, #6]
    cmp r8, #1
    blt @L_020962e8
@L_020962ac:
    mov r0, r7
    mov r1, r5
    mov r2, r8
    bl func_02096110
    movs r6, r0
    beq @L_020962dc
    mov r0, r7
    mov r1, r6
    bl func_02094528
    ldrh r0, [r6, #0xa]
    orr r0, r0, #1
    strh r0, [r6, #0xa]
@L_020962dc:
    sub r8, r8, #1
    cmp r8, #1
    bge @L_020962ac
@L_020962e8:
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020962f4(void)
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

extern "C" asm void func_02096428(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r2
    mov r6, r1
    mov r1, r5
    mov r4, r0
    bl func_02096160
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r4
    mov r1, r6
    bl func_020960ac
    movs r6, r0
    ldrne r0, [r6]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r7, [r6, #6]
    cmp r7, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5, lsl #0x10
    mov r5, r0, lsr #0x10
@L_02096484:
    mov r0, r4
    mov r1, r6
    mov r2, r7
    bl func_02096110
    cmp r0, #0
    sub r7, r7, #1
    strneh r5, [r0, #6]
    cmp r7, #1
    bge @L_02096484
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020964ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_020964d8:
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    sub r5, r5, #1
    strneb r6, [r0, #8]
    cmp r5, #1
    bge @L_020964d8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02096500(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r7, r2
    cmp r3, #0
    bne @L_0209651c
    bl func_0209657c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0209651c:
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =0x7bc3
    and r0, r7, r0
    mov r7, r0, lsl #0x10
@L_02096548:
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    ldrneh r1, [r0, #0xa]
    sub r5, r5, #1
    orrne r1, r1, r7, lsr #16
    strneh r1, [r0, #0xa]
    cmp r5, #1
    bge @L_02096548
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
