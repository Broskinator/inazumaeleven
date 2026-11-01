#include "ov030/Unk_ov030_02168dd4.hpp"
#include "game/vcall.hpp"

extern "C" void func_ov030_02168dd4(void);
extern "C" void func_ov030_02168ed0(void);
extern "C" s32 func_ov030_02168ed4(...);
extern "C" void func_ov030_02169404(u8 *arg0, s32 arg1);
extern "C" s32 func_ov030_02169418(u8 *arg0, s32 arg1);
extern "C" void func_ov030_02169504(void);
extern "C" s32 func_ov030_021695d4(u8 *arg0);
extern "C" s32 func_ov030_02169788(u8 *arg0);
extern "C" void func_ov030_0216994c(void);
extern "C" void func_ov030_02169950(void);
extern "C" s32 func_ov030_021699d0(s32 arg0);
extern "C" void func_ov030_021699e4(void);

extern "C" char data_020c4688[];
extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c484c[];
extern "C" char data_020c5e40[];
extern "C" char data_020e88a0[];
extern "C" char data_ov030_02169e2c[];
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e0ccEi(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e1ecEv(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e254Ev(...);
extern "C" void _ZN17UnkClass_020621b413func_0206f750Ev(void);
extern "C" s32 _ZN17UnkClass_020621b413func_02078aacEv(...);
extern "C" void _ZN17UnkClass_020621b413func_0207d830Ev(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02081438(void);
extern "C" void func_02081484(void);
extern "C" void func_020814d0(void);
extern "C" void func_0208151c(void);
extern "C" void func_02081568(void);
extern "C" void func_020815b4(void);
extern "C" void func_02081600(void);
extern "C" void func_020823a0(void);
extern "C" s32 func_02091d54(...);
extern "C" void func_02091d64(void);
extern "C" void func_ov015_02130b14(void);
extern "C" s32 func_ov015_02132628(...);
extern "C" void func_ov015_02132c08(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02135ea0(...);
extern "C" void func_ov015_02135ef4(void);
extern "C" void func_ov015_02135f24(void);
extern "C" s32 func_ov015_021363e8(...);
extern "C" void func_ov015_0213e0e8(void);
extern "C" s32 func_ov015_0213e11c(...);
extern "C" s32 func_ov015_021616a4(...);
extern "C" void func_ov015_021616dc(void);
extern "C" s32 func_ov015_02161710(...);
extern "C" s32 func_ov015_02161760(...);
extern "C" void func_ov015_02161dd4(void);
extern "C" s32 func_ov015_02161f84(...);
extern "C" void func_ov015_02161fdc(void);
extern "C" void func_ov015_02162750(void);
extern "C" s32 func_ov015_021629ac(...);
extern "C" void func_ov015_021629c8(void);
extern "C" s32 func_ov030_021679dc(...);
extern "C" s32 func_ov030_021679f8(...);
extern "C" s32 func_ov030_02167a88(...);
extern "C" void func_ov030_02167b6c(void);
extern "C" s32 func_ov030_02167c84(...);
extern "C" s32 func_ov030_02167cec(...);
extern "C" s32 func_ov030_02167d50(...);
extern "C" s32 func_ov030_02167e00(...);
extern "C" s32 func_ov030_02167eac(...);
extern "C" s32 func_ov030_02167f08(...);
extern "C" s32 func_ov030_02167f0c(...);
extern "C" s32 func_ov030_02167f74(...);
extern "C" s32 func_ov030_0216888c(...);
extern "C" void func_ov030_0216892c(void);
extern "C" s32 func_ov030_02168938(...);
extern "C" s32 func_ov030_02168b34(...);
extern "C" s32 func_ov030_02168b44(...);
extern "C" s32 func_ov030_02168b54(...);
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

extern "C" asm s32 func_ov030_02168ed4(...)
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

extern "C" s32 func_ov030_02169418(u8 *arg0, s32 arg1)
{
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 v4;
    s32 v6;
    s32 t0;
    s32 t1;
    u8 *t2;
    u16 t3;
    t0 = *(s32 *)(data_020c46b8);
    v0 = func_ov015_02161760(t0, arg1, (s32)data_020c46b8);
    if (v0 != 0)
        return v0;
    t1 = *(s32 *)(data_020c46c4);
    v1 = func_ov015_021629ac(t1);
    r5 = (s32)data_020c46c4;
    r6 = arg1;
    if (v1 != 0) {
        if (*(u16 *)(((u8 *)(*(s32 *)(data_020c46c4) + 0xF00)) + 0x38) == 0)
            return (*(s32 *)(data_020c46c4) + 0xF00);
        t2 = (u8 *)(*(s32 *)(data_020c46c4) + 0xF00);
        t3 = *(u16 *)(((u8 *)(*(s32 *)(data_020c46c4) + 0xF00)) + 0x38);
        *(u16 *)(t2 + 0x38) = 0;
        r6 = t3;
    }
    if (*(s32 *)(arg0 + 0x10) != 5)
        return *(s32 *)(arg0 + 0x10);
    func_ov030_02167f74((s32)arg0, r6);
    if (*(s32 *)(arg0 + 0x14) != 0)
        return *(s32 *)(arg0 + 0x14);
    if ((r6 & 3) == 0)
        return *(s32 *)(arg0 + 0x14);
    if ((*(u8 *)(arg0 + 0x24) != 0 && *(s32 *)(arg0 + 0x20) == 0)) {
        _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 0x16);
        *(s32 *)(arg0 + 0x20) = 1;
        *(u8 *)(arg0 + 0x24) = 0;
        v4 = func_ov030_02168b34((s32)arg0, (arg0 + 0x194), 8, 0);
        return v4;
    } else {
        _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 1);
        v6 = func_ov030_02168b44((s32)arg0, 0);
        return v6;
    }
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

extern "C" s32 func_ov030_021695d4(u8 *arg0)
{
    u8 *r5;
    s32 v3;
    s32 v5;
    s32 v6;
    s32 v17;
    s32 v20;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t4;
    u8 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    t0 = ((u32)(*(s32 *)(((u8 *)0x4000000)) & 0x1F00) >> 8);
    *(s32 *)(arg0 + 0x2A0) = t0;
    t1 = *(s32 *)(((u8 *)&data_020c46c4));
    func_ov015_02161f84(t1, t0);
    t2 = *(s32 *)(((u8 *)&data_020c46b8));
    func_ov015_021616a4(t2);
    ((VCall *)arg0)->f17();
    t4 = *(s32 *)(((u8 *)&data_020c4688));
    v3 = func_ov015_0213e11c(t4);
    MI_CpuFill8((s32)(arg0 + 0x18), 0, 0x10);
    *(s32 *)(arg0 + 0x18) = 2;
    r5 = (u8 *)v3;
    if ((s32)r5 != 0) {
        t5 = *(u8 *)(r5 + 0x43C);
        *(s32 *)(arg0 + 0x1C) = t5;
    }
    t6 = *(s32 *)(arg0 + 0x4);
    v5 = _ZN17UnkClass_0203dc7c13func_0203e1ecEv(t6);
    *(s32 *)(arg0 + 0x8) = v5;
    t7 = *(s32 *)(arg0 + 0x4);
    v6 = _ZN17UnkClass_0203dc7c13func_0203e254Ev(t7);
    *(s32 *)(arg0 + 0xC) = v6;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x14) = 0;
    MI_CpuFill8((s32)(arg0 + 0x2A4), 0, 0xC);
    MI_CpuFill8((s32)(arg0 + 0x14C), 0, 0x18);
    MI_CpuFill8((s32)(arg0 + 0x164), 0, 0x18);
    MI_CpuFill8((s32)(arg0 + 0x17C), 0, 4);
    MI_CpuFill8((s32)(arg0 + 0x180), 0, 4);
    MI_CpuFill8((s32)(arg0 + 0x184), 0, 8);
    MI_CpuFill8((s32)(arg0 + 0x194), 0, 0x108);
    MI_CpuFill8((s32)(arg0 + 0x4C), 0, 0x80);
    MI_CpuFill8((s32)(arg0 + 0xCC), 0, 0x80);
    *(s32 *)(arg0 + 0x29C) = 0;
    MI_CpuFill8((s32)(arg0 + 0x28), 0, 0x20);
    *(s32 *)(arg0 + 0x48) = 0;
    v17 = _ZN17UnkClass_020621b413func_02078aacEv((s32)((u8 *)&data_020e88a0), 0, (s32)(arg0 + 0x28), 0x10, 1, 0x80);
    *(s32 *)(arg0 + 0x48) = v17;
    func_ov030_02168ed4((s32)arg0);
    func_ov015_02135ea0((s32)(arg0 + 0x18C), 0x10);
    t8 = *(s32 *)(((u8 *)&data_020c46d4));
    v20 = func_02091d54(t8);
    return v20;
}

extern "C" s32 func_ov030_02169788(u8 *arg0)
{
    s32 v4;
    s32 v5;
    s32 v7;
    s32 v12;
    s32 v20;
    s32 v22;
    s32 v25;
    u8 *t0;
    s32 t2;
    s32 t3;
    s32 t5;
    s32 t7;
    s32 t8;
    s32 t9;
    t0 = *(u8 * *)(arg0 + 0x4);
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x3C))(t0, (s32)(arg0 + 0x18));
    func_ov015_021363e8((s32)(arg0 + 0x18C));
    switch (*(s32 *)(arg0 + 0x10)) {
        case 0:
            func_ov030_021679dc((s32)arg0);
            func_ov030_021679f8((s32)arg0);
            *(s32 *)(arg0 + 0x10) = 1;
        case 1:
            v4 = func_ov030_02167c84((s32)arg0);
            if (v4 == 0)
                break;
            v5 = func_ov015_02134118((s32)(arg0 + 0x2A4), 1);
            if (v5 == 0)
                break;
            func_ov030_02167a88((s32)arg0);
            *(s32 *)(arg0 + 0x10) = 2;
        case 2:
            v7 = func_ov030_02167c84((s32)arg0);
            if (v7 == 0)
                break;
            func_ov030_02167cec((s32)arg0);
            *(s32 *)(arg0 + 0x10) = 3;
        case 3:
            func_ov030_02168b54((s32)arg0, 0);
            func_ov030_02167d50((s32)arg0);
            _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&data_020c5e40), 0x16);
        case 4:
            t2 = *(s32 *)(((u8 *)&data_020c46b8));
            v12 = func_ov015_02161760(t2);
            if (v12 != 0)
                break;
            func_ov030_02167e00((s32)arg0);
            func_ov030_02167eac((s32)arg0);
            func_ov030_02167f08((s32)arg0);
            func_ov030_02167f0c((s32)arg0, 3);
            t3 = *(s32 *)(arg0 + 0x14);
            func_ov030_0216888c((s32)arg0, t3);
            func_ov030_02168938((s32)arg0);
            ((VCall *)arg0)->f19();
            *(s32 *)(arg0 + 0x10) = 5;
            break;
        case 6:
            t5 = *(s32 *)(((u8 *)&data_020c46b8));
            v20 = func_ov015_02161760(t5);
            if (v20 != 0)
                break;
            func_ov015_02132628(6);
            *(s32 *)(arg0 + 0x10) = 7;
        case 7:
            v22 = ((VCall *)arg0)->f22();
            if (v22 != 0)
                break;
            t7 = *(s32 *)(arg0 + 0x4);
            _ZN17UnkClass_0203dc7c13func_0203e0ccEi(t7, 0);
            _ZN17UnkClass_0203dc7c13func_0203e0ccEi(t7, 1);
            break;
    }
    t8 = *(s32 *)(((u8 *)&data_020c46b8));
    t9 = *(s32 *)(((u8 *)&data_020c484c));
    v25 = func_ov015_02161710(t8, t9);
    return v25;
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

extern "C" s32 func_ov030_021699d0(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov030_021699e4(void)
{
}
