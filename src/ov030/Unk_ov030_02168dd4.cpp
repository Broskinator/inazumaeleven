#include "ov030/Unk_ov030_02168dd4.hpp"

extern "C" void func_ov030_02168dd4(void);
extern "C" void func_ov030_02168ed0(void);
extern "C" void func_ov030_02168ed4(void);
extern "C" void func_ov030_02169404(u8 *arg0, s32 arg1);
extern "C" void func_ov030_02169418(void);
extern "C" void func_ov030_02169504(void);
extern "C" void func_ov030_021695d4(void);
extern "C" void func_ov030_02169788(void);
extern "C" void func_ov030_0216994c(void);
extern "C" void func_ov030_02169950(void);
extern "C" void func_ov030_021699d0(void);
extern "C" void func_ov030_021699e4(void);

extern "C" char data_020c4688[];
extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c484c[];
extern "C" char data_020c5e40[];
extern "C" char data_020e88a0[];
extern "C" char data_ov030_02169e2c[];
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e0ccEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1ecEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e254Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0206f750Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02078aacEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0207d830Ev(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02081438(void);
extern "C" void func_02081484(void);
extern "C" void func_020814d0(void);
extern "C" void func_0208151c(void);
extern "C" void func_02081568(void);
extern "C" void func_020815b4(void);
extern "C" void func_02081600(void);
extern "C" void func_020823a0(void);
extern "C" void func_02091d54(void);
extern "C" void func_02091d64(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02132628(void);
extern "C" void func_ov015_02132c08(void);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02135ea0(void);
extern "C" void func_ov015_02135ef4(void);
extern "C" void func_ov015_02135f24(void);
extern "C" void func_ov015_021363e8(void);
extern "C" void func_ov015_0213e0e8(void);
extern "C" void func_ov015_0213e11c(void);
extern "C" void func_ov015_021616a4(void);
extern "C" void func_ov015_021616dc(void);
extern "C" void func_ov015_02161710(void);
extern "C" void func_ov015_02161760(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" void func_ov015_02161f84(void);
extern "C" void func_ov015_02161fdc(void);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov030_021679dc(void);
extern "C" void func_ov030_021679f8(void);
extern "C" void func_ov030_02167a88(void);
extern "C" void func_ov030_02167b6c(void);
extern "C" void func_ov030_02167c84(void);
extern "C" void func_ov030_02167cec(void);
extern "C" void func_ov030_02167d50(void);
extern "C" void func_ov030_02167e00(void);
extern "C" void func_ov030_02167eac(void);
extern "C" void func_ov030_02167f08(void);
extern "C" void func_ov030_02167f0c(void);
extern "C" void func_ov030_02167f74(void);
extern "C" void func_ov030_0216888c(void);
extern "C" void func_ov030_0216892c(void);
extern "C" void func_ov030_02168938(void);
extern "C" void func_ov030_02168b34(void);
extern "C" void func_ov030_02168b44(void);
extern "C" void func_ov030_02168b54(void);
extern "C" void func_ov030_02168cb8(void);

extern "C" asm void func_ov030_02168dd4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r1
    mov r6, r0
    cmp r5, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r8, =data_020c46c4
    mov r1, r5, lsl #0x10
    ldr r0, [r8]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    ldr r1, [r6, #0x14]
    mov r0, r6
    bl func_ov030_0216892c
    movs r4, r0
    ldmmiia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r5, #1
    blt @L_02168e8c
    cmp r5, #0x11
    bgt @L_02168e8c
    mov r7, #0x108
    mla r0, r4, r7, r6
    ldr r1, [r0, #0x194]
    ldr r0, [r0, #0x1a0]
    sub r5, r5, #1
    sub r0, r1, r0
    cmp r5, r0
    ldreq r0, [r8]
    mov r1, #1
    addeq r0, r0, #0xf00
    streqh r1, [r0, #0x38]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_020c5e40
    bl _ZN12SoundManager9PlaySoundEi
    mul r2, r4, r7
    add r0, r6, r2
    ldr r1, [r0, #0x1a0]
    add r0, r6, #0x194
    add r0, r0, r2
    add r1, r5, r1
    bl func_ov015_02135f24
    add r0, r6, #0x194
    mla r1, r4, r7, r0
    mov r0, r6
    mov r2, #8
    bl func_ov030_02168b34
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168e8c:
    cmp r5, #0x12
    bne @L_02168eac
    ldr r0, =data_020c46c4
    mov r1, #1
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168eac:
    cmp r5, #0x13
    ldreq r0, =data_020c46c4
    moveq r1, #2
    ldreq r0, [r0]
    addeq r0, r0, #0xf00
    streqh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov030_02168ed0(void)
{
}

extern "C" asm void func_ov030_02168ed4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r1, =data_020c4688
    mov r9, r0
    ldr r0, [r1]
    mov r10, #1
    bl func_ov015_0213e11c
    ldr r1, [r9, #0x48]
    mov r6, r0
    cmp r1, #0
    mov r7, #0
    addle sp, sp, #8
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_020e88a0
@L_02168f0c:
    add r0, r9, r7, lsl #1
    ldrh r0, [r0, #0x28]
    mov r1, #0
    str r0, [sp, #4]
    bl func_ov015_02130b14
    movs r5, r0
    cmpne r6, #0
    beq @L_021693e4
    ldr r1, [sp, #4]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r11, r7, #0x10
    bl _ZN17UnkClass_020621b413func_0206f750Ev
    mov r8, r0
    ldr r0, [r9, #0x1c]
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_021693e4
    b @L_02168f70
    b @L_02169048
    b @L_021690dc
    b @L_02169168
    b @L_02169240
    b @L_02169318
@L_02168f70:
    mov r0, r5
    bl func_020815b4
    add r1, r9, r7, lsl #2
    str r0, [r1, #0x4c]
    mov r0, r5
    bl func_02081484
    add r1, r9, r11, lsl #2
    str r0, [r1, #0x4c]
    str r10, [sp]
    ldrsb r3, [r6, #7]
    mov r0, r4
    mov r1, r5
    mov r2, #0x1e
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r2, r9, r7, lsl #2
    str r0, [r2, #0xcc]
    str r10, [sp]
    ldrsb r3, [r6, #8]
    mov r1, r5
    mov r0, r4
    mov r2, #0x1f
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r1, r9, r11, lsl #2
    str r0, [r1, #0xcc]
    cmp r8, #0
    beq @L_02169044
    ldr r0, [sp, #4]
    mov r2, #0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    bl func_020823a0
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    movs r5, r0
    beq @L_02169034
    str r10, [sp]
    ldrsb r3, [r6, #7]
    mov r0, r4
    mov r1, r5
    mov r2, #0x1e
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    str r10, [sp]
    ldrsb r3, [r6, #8]
    mov r1, r5
    mov r0, r4
    mov r2, #0x1f
    bl _ZN17UnkClass_020621b413func_0207d830Ev
@L_02169034:
    mov r1, r8
    mov r0, r4
    mov r2, #0
    bl func_020823a0
@L_02169044:
    b @L_021693e0
@L_02169048:
    mov r0, r5
    bl func_02081438
    add r2, r9, r7, lsl #2
    str r0, [r2, #0x4c]
    str r10, [sp]
    ldrsb r3, [r6, #9]
    mov r1, r5
    mov r0, r4
    mov r2, #0x20
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r1, r9, r7, lsl #2
    cmp r8, #0
    str r0, [r1, #0xcc]
    beq @L_021690d0
    ldr r0, [sp, #4]
    mov r2, #0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    bl func_020823a0
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    movs r1, r0
    beq @L_021690c0
    str r10, [sp]
    ldrsb r3, [r6, #9]
    mov r0, r4
    mov r2, #0x20
    bl _ZN17UnkClass_020621b413func_0207d830Ev
@L_021690c0:
    mov r1, r8
    mov r0, r4
    mov r2, #0
    bl func_020823a0
@L_021690d0:
    mov r0, #0
    strb r0, [r9, #0x24]
    b @L_021693e4
@L_021690dc:
    mov r0, r5
    bl func_02081600
    add r2, r9, r7, lsl #2
    str r0, [r2, #0x4c]
    str r10, [sp]
    ldrsb r3, [r6, #0xb]
    mov r1, r5
    mov r0, r4
    mov r2, #0x22
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r1, r9, r7, lsl #2
    cmp r8, #0
    str r0, [r1, #0xcc]
    beq @L_02169164
    ldr r0, [sp, #4]
    mov r2, #0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    bl func_020823a0
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    movs r1, r0
    beq @L_02169154
    str r10, [sp]
    ldrsb r3, [r6, #0xb]
    mov r0, r4
    mov r2, #0x22
    bl _ZN17UnkClass_020621b413func_0207d830Ev
@L_02169154:
    mov r1, r8
    mov r0, r4
    mov r2, #0
    bl func_020823a0
@L_02169164:
    b @L_021690d0
@L_02169168:
    mov r0, r5
    bl func_02081484
    add r1, r9, r7, lsl #2
    str r0, [r1, #0x4c]
    mov r0, r5
    bl func_02081568
    add r1, r9, r11, lsl #2
    str r0, [r1, #0x4c]
    str r10, [sp]
    ldrsb r3, [r6, #8]
    mov r0, r4
    mov r1, r5
    mov r2, #0x1f
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r2, r9, r7, lsl #2
    str r0, [r2, #0xcc]
    str r10, [sp]
    ldrsb r3, [r6, #0xa]
    mov r1, r5
    mov r0, r4
    mov r2, #0x21
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r1, r9, r11, lsl #2
    str r0, [r1, #0xcc]
    cmp r8, #0
    beq @L_0216923c
    ldr r0, [sp, #4]
    mov r2, #0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    bl func_020823a0
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    movs r5, r0
    beq @L_0216922c
    str r10, [sp]
    ldrsb r3, [r6, #8]
    mov r0, r4
    mov r1, r5
    mov r2, #0x1f
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    str r10, [sp]
    ldrsb r3, [r6, #0xa]
    mov r1, r5
    mov r0, r4
    mov r2, #0x21
    bl _ZN17UnkClass_020621b413func_0207d830Ev
@L_0216922c:
    mov r1, r8
    mov r0, r4
    mov r2, #0
    bl func_020823a0
@L_0216923c:
    b @L_021693e0
@L_02169240:
    mov r0, r5
    bl func_020814d0
    add r1, r9, r7, lsl #2
    str r0, [r1, #0x4c]
    mov r0, r5
    bl func_0208151c
    add r1, r9, r11, lsl #2
    str r0, [r1, #0x4c]
    str r10, [sp]
    ldrsb r3, [r6, #0xc]
    mov r0, r4
    mov r1, r5
    mov r2, #0x23
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r2, r9, r7, lsl #2
    str r0, [r2, #0xcc]
    str r10, [sp]
    ldrsb r3, [r6, #0xd]
    mov r1, r5
    mov r0, r4
    mov r2, #0x24
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r1, r9, r11, lsl #2
    str r0, [r1, #0xcc]
    cmp r8, #0
    beq @L_02169314
    ldr r0, [sp, #4]
    mov r2, #0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    bl func_020823a0
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    movs r5, r0
    beq @L_02169304
    str r10, [sp]
    ldrsb r3, [r6, #0xc]
    mov r0, r4
    mov r1, r5
    mov r2, #0x23
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    str r10, [sp]
    ldrsb r3, [r6, #0xd]
    mov r1, r5
    mov r0, r4
    mov r2, #0x24
    bl _ZN17UnkClass_020621b413func_0207d830Ev
@L_02169304:
    mov r1, r8
    mov r0, r4
    mov r2, #0
    bl func_020823a0
@L_02169314:
    b @L_021693e0
@L_02169318:
    ldrsh r1, [r5, #0xd0]
    add r0, r9, r7, lsl #2
    add r2, r9, r11, lsl #2
    str r1, [r0, #0x4c]
    ldrsh r3, [r5, #0xd2]
    mov r0, r4
    mov r1, r5
    str r3, [r2, #0x4c]
    str r10, [sp]
    ldrsb r3, [r6, #5]
    mov r2, #0x14
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r2, r9, r7, lsl #2
    str r0, [r2, #0xcc]
    str r10, [sp]
    ldrsb r3, [r6, #6]
    mov r1, r5
    mov r0, r4
    mov r2, #0x16
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    add r1, r9, r11, lsl #2
    str r0, [r1, #0xcc]
    cmp r8, #0
    beq @L_021693e0
    ldr r0, [sp, #4]
    mov r2, #0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    bl func_020823a0
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    mov r5, r0
    str r10, [sp]
    ldrsb r3, [r6, #5]
    mov r0, r4
    mov r1, r5
    mov r2, #0x14
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    str r10, [sp]
    ldrsb r3, [r6, #6]
    mov r1, r5
    mov r0, r4
    mov r2, #0x16
    bl _ZN17UnkClass_020621b413func_0207d830Ev
    mov r1, r8
    mov r0, r4
    mov r2, #0
    bl func_020823a0
@L_021693e0:
    strb r10, [r9, #0x24]
@L_021693e4:
    add r7, r7, #1
    ldr r0, [r9, #0x48]
    cmp r7, r0
    blt @L_02168f0c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov030_02169404(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0) = (s32)data_ov030_02169e2c;
}

extern "C" asm void func_ov030_02169418(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =data_020c46b8
    mov r4, r0
    ldr r0, [r2]
    mov r6, r1
    bl func_ov015_02161760
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r5, =data_020c46c4
    ldr r0, [r5]
    bl func_ov015_021629ac
    cmp r0, #0
    beq @L_02169468
    ldr r0, [r5]
    add r0, r0, #0xf00
    ldrh r6, [r0, #0x38]
    cmp r6, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, #0
    strh r1, [r0, #0x38]
@L_02169468:
    ldr r0, [r4, #0x10]
    cmp r0, #5
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r4
    mov r1, r6
    bl func_ov030_02167f74
    ldr r0, [r4, #0x14]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    tst r6, #3
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r0, [r4, #0x24]
    cmp r0, #0
    beq @L_021694dc
    ldr r0, [r4, #0x20]
    cmp r0, #0
    bne @L_021694dc
    ldr r0, =data_020c5e40
    mov r1, #0x16
    bl _ZN12SoundManager9PlaySoundEi
    mov r5, #1
    mov r3, #0
    mov r0, r4
    add r1, r4, #0x194
    mov r2, #8
    str r5, [r4, #0x20]
    strb r3, [r4, #0x24]
    bl func_ov030_02168b34
    ldmia sp!, {r4, r5, r6, pc}
@L_021694dc:
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, #0
    bl func_ov030_02168b44
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov030_02169504(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =data_020c46b8
    mov r7, r0
    ldr r0, [r2]
    mov r6, r1
    mov r5, #0
    bl func_ov015_02161760
    cmp r0, #0
    ldreq r0, [r7, #0x10]
    cmpeq r0, #5
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =data_020c46c4
    mov r1, r6
    ldr r0, [r4]
    mov r2, r5
    bl func_ov015_02162750
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_02169564
    b @L_0216957c
    b @L_02169594
    b @L_021695b0
@L_02169564:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov030_02168cb8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216957c:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov030_02168dd4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169594:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    mov r2, r5
    bl func_ov030_02168ed0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021695b0:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    mov r2, #1
    bl func_ov030_02168ed0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov030_021695d4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r1, #0x4000000
    ldr r1, [r1]
    mov r4, r0
    and r0, r1, #0x1f00
    mov r1, r0, lsr #8
    ldr r0, =data_020c46c4
    str r1, [r4, #0x2a0]
    ldr r0, [r0]
    bl func_ov015_02161f84
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_021616a4
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x44]
    blx r1
    ldr r0, =data_020c4688
    ldr r0, [r0]
    bl func_ov015_0213e11c
    mov r5, r0
    add r0, r4, #0x18
    mov r1, #0
    mov r2, #0x10
    bl MI_CpuFill8
    mov r0, #2
    cmp r5, #0
    str r0, [r4, #0x18]
    ldrneb r0, [r5, #0x43c]
    strne r0, [r4, #0x1c]
    ldr r0, [r4, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e1ecEv
    str r0, [r4, #8]
    ldr r0, [r4, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e254Ev
    mov r6, #0
    str r0, [r4, #0xc]
    mov r1, r6
    add r0, r4, #0x2a4
    mov r2, #0xc
    str r6, [r4, #0x10]
    str r6, [r4, #0x14]
    bl MI_CpuFill8
    mov r5, #0x18
    add r0, r4, #0x14c
    mov r1, r6
    mov r2, r5
    bl MI_CpuFill8
    mov r2, r5
    add r0, r4, #0x164
    mov r1, r6
    bl MI_CpuFill8
    mov r5, #4
    add r0, r4, #0x17c
    mov r1, r6
    mov r2, r5
    bl MI_CpuFill8
    mov r2, r5
    add r0, r4, #0x180
    mov r1, r6
    bl MI_CpuFill8
    add r0, r4, #0x184
    mov r1, r6
    mov r2, #8
    bl MI_CpuFill8
    add r0, r4, #0x194
    mov r1, r6
    mov r2, #0x108
    bl MI_CpuFill8
    mov r5, #0x80
    add r0, r4, #0x4c
    mov r1, r6
    mov r2, r5
    bl MI_CpuFill8
    add r0, r4, #0xcc
    mov r1, r6
    mov r2, r5
    bl MI_CpuFill8
    add r0, r4, #0x28
    mov r1, r6
    mov r2, #0x20
    str r6, [r4, #0x29c]
    bl MI_CpuFill8
    str r6, [r4, #0x48]
    mov r0, #1
    stmia sp, {r0, r5}
    mov r5, #0x10
    ldr r0, =data_020e88a0
    mov r1, r6
    add r2, r4, #0x28
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_02078aacEv
    str r0, [r4, #0x48]
    mov r0, r4
    bl func_ov030_02168ed4
    add r0, r4, #0x18c
    mov r1, r5
    bl func_ov015_02135ea0
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02091d54
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov030_02169788(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #4]
    add r1, r4, #0x18
    ldr r2, [r0]
    ldr r2, [r2, #0x3c]
    blx r2
    add r0, r4, #0x18c
    bl func_ov015_021363e8
    ldr r0, [r4, #0x10]
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    b @L_02169928
    b @L_021697dc
    b @L_021697f4
    b @L_02169828
    b @L_02169848
    b @L_02169868
    b @L_02169928
    b @L_021698d0
    b @L_021698f4
@L_021697dc:
    mov r0, r4
    bl func_ov030_021679dc
    mov r0, r4
    bl func_ov030_021679f8
    mov r0, #1
    str r0, [r4, #0x10]
@L_021697f4:
    mov r0, r4
    bl func_ov030_02167c84
    cmp r0, #0
    beq @L_02169928
    add r0, r4, #0x2a4
    mov r1, #1
    bl func_ov015_02134118
    cmp r0, #0
    beq @L_02169928
    mov r0, r4
    bl func_ov030_02167a88
    mov r0, #2
    str r0, [r4, #0x10]
@L_02169828:
    mov r0, r4
    bl func_ov030_02167c84
    cmp r0, #0
    beq @L_02169928
    mov r0, r4
    bl func_ov030_02167cec
    mov r0, #3
    str r0, [r4, #0x10]
@L_02169848:
    mov r0, r4
    mov r1, #0
    bl func_ov030_02168b54
    mov r0, r4
    bl func_ov030_02167d50
    ldr r0, =data_020c5e40
    mov r1, #0x16
    bl _ZN12SoundManager9PlaySoundEi
@L_02169868:
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_02169928
    mov r0, r4
    bl func_ov030_02167e00
    mov r0, r4
    bl func_ov030_02167eac
    mov r0, r4
    bl func_ov030_02167f08
    mov r0, r4
    mov r1, #3
    bl func_ov030_02167f0c
    ldr r1, [r4, #0x14]
    mov r0, r4
    bl func_ov030_0216888c
    mov r0, r4
    bl func_ov030_02168938
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #5
    str r0, [r4, #0x10]
    b @L_02169928
@L_021698d0:
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_02169928
    mov r0, #6
    bl func_ov015_02132628
    mov r0, #7
    str r0, [r4, #0x10]
@L_021698f4:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_02169928
    ldr r4, [r4, #4]
    mov r1, #0
    mov r0, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
    mov r0, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
@L_02169928:
    ldr r0, =data_020c46b8
    ldr r1, =data_020c484c
    ldr r0, [r0]
    ldr r1, [r1]
    bl func_ov015_02161710
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov030_0216994c(void)
{
}

extern "C" asm void func_ov030_02169950(void)
{
    stmdb sp!, {r4, lr}
    mov r2, #0x4000000
    mov r4, r0
    ldr r0, [r2]
    ldr r1, [r4, #0x2a0]
    bic r0, r0, #0x1f00
    orr r3, r0, r1, lsl #8
    mov r0, #2
    mov r1, #0x10
    str r3, [r2]
    bl func_ov015_02132c08
    ldr r0, =data_020c4688
    ldr r0, [r0]
    bl func_ov015_0213e0e8
    ldr r0, =data_020c46c4
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r0, r4
    bl func_ov030_02167b6c
    add r0, r4, #0x18c
    bl func_ov015_02135ef4
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02091d64
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov030_021699d0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov030_021699e4(void)
{
}
