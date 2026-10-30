#include "ov044/Unk_ov044_02168e14.hpp"

extern "C" void func_ov044_02168e14(void);
extern "C" void func_ov044_02168f4c(void);
extern "C" void func_ov044_02169288(void);
extern "C" void func_ov044_021692a4(void);
extern "C" void func_ov044_021692d8(void);
extern "C" void func_ov044_0216930c(void);
extern "C" void func_ov044_02169340(void);
extern "C" void func_ov044_02169374(void);
extern "C" void func_ov044_02169390(void);
extern "C" void func_ov044_021693b0(s32 arg0);
extern "C" void func_ov044_021693cc(void);
extern "C" void func_ov044_0216943c(void);
extern "C" void func_ov044_0216952c(void);
extern "C" void func_ov044_021695a8(void);
extern "C" void func_ov044_02169628(void);
extern "C" void func_ov044_021696a0(void);
extern "C" void func_ov044_02169804(void);
extern "C" void func_ov044_02169928(void);
extern "C" void func_ov044_021699d4(void);
extern "C" void func_ov044_02169a2c(void);
extern "C" void func_ov044_02169a98(void);
extern "C" void func_ov044_02169b00(void);
extern "C" void func_ov044_02169b98(void);
extern "C" void func_ov044_02169c28(void);
extern "C" void func_ov044_02169d9c(void);
extern "C" void func_ov044_02169f3c(void);
extern "C" void func_ov044_02169f54(void);
extern "C" void func_ov044_0216a00c(void);
extern "C" void func_ov044_0216a184(void);
extern "C" void func_ov044_0216a32c(void);
extern "C" void func_ov044_0216a35c(void);
extern "C" void func_ov044_0216a444(void);
extern "C" void func_ov044_0216a538(void);
extern "C" void func_ov044_0216a5ec(void);
extern "C" s32 func_ov044_0216a6e8(s32 arg0);
extern "C" void func_ov044_0216a6fc(void);

extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c4814[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c5e40[];
extern "C" char data_020e88a0[];
extern "C" char data_ov044_0216a710[];
extern "C" char data_ov044_0216a71c[];
extern "C" char data_ov044_0216a728[];
extern "C" char data_ov044_0216a734[];
extern "C" char data_ov044_0216a74c[];
extern "C" char data_ov044_0216a764[];
extern "C" char data_ov044_0216a774[];
extern "C" char data_ov044_0216a784[];
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_020621b413func_0206f064Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_020768fcEm(void);
extern "C" void _ZN17UnkClass_020621b413func_02076ba0Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02077104Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_020771d4Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02077eecEv(void);
extern "C" void _ZN17UnkClass_020621b413func_02078474Ev(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_0202273c(void);
extern "C" void func_020920c4(void);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_0209386c(void);
extern "C" void func_02093928(void);
extern "C" void func_020939c8(void);
extern "C" void func_ov015_02161760(void);
extern "C" void func_ov015_02161d00(void);
extern "C" void func_ov015_02161d24(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" void func_ov015_02162260(void);
extern "C" s32 func_ov015_021624f0(...);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_021629d0(void);
extern "C" void func_ov015_02163040(void);
extern "C" void func_ov015_021630d8(void);
extern "C" void func_ov044_021663e4(void);
extern "C" void func_ov044_02166a50(void);
extern "C" void func_ov044_02166afc(void);
extern "C" void func_ov044_02167480(void);
extern "C" void func_ov044_021674e8(void);
extern "C" void func_ov044_02167658(void);
extern "C" void func_ov044_02167714(void);
extern "C" void func_ov044_02167a14(void);
extern "C" void func_ov044_02167d80(void);
extern "C" void func_ov044_02168190(void);
extern "C" void func_ov044_02168be0(void);
extern "C" void func_ov044_02168c34(void);
extern "C" void func_ov044_02168cc4(void);

extern "C" asm void func_ov044_02168e14(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x1c
    mov r7, r0
    mov r6, r1
    mov r0, #0x24
    mul r4, r6, r0
    ldr lr, [r7, #0xbd4]
    ldr r12, [r7, #0xbf4]
    ldr r3, [r7, #0xbf0]
    ldr r0, =data_ov044_0216a71c
    add r8, sp, #4
    ldmia r0, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    add r2, r7, r4
    add r5, r7, #0x34
    add r8, r5, #0xc00
    ldr r5, [r8, r4]
    ldr r1, [r2, #0xc18]
    ldr r0, [r2, #0xc1c]
    add r5, r5, #1
    str r5, [r8, r4]
    ldr r9, [r2, #0xc28]
    ldr r5, [r2, #0xc34]
    ldr r8, [r2, #0xc2c]
    mla r4, r9, r5, r1
    mla r5, r8, r5, r0
    str lr, [sp, #0x10]
    str r12, [sp, #0x14]
    str r3, [sp, #0x18]
    cmp r9, #0
    ldr r0, [r2, #0xc20]
    bge @L_02168ea0
    cmp r4, r0
    movlt r4, r0
    b @L_02168ea8
@L_02168ea0:
    cmp r4, r0
    movgt r4, r0
@L_02168ea8:
    mov r0, #0x24
    mla r1, r6, r0, r7
    ldr r0, [r1, #0xc2c]
    cmp r0, #0
    ldr r0, [r1, #0xc24]
    bge @L_02168ecc
    cmp r5, r0
    movlt r5, r0
    b @L_02168ed4
@L_02168ecc:
    cmp r5, r0
    movgt r5, r0
@L_02168ed4:
    mov r0, #0x24
    mla r1, r6, r0, r7
    ldr r0, [r1, #0xc20]
    cmp r4, r0
    ldreq r0, [r1, #0xc24]
    cmpeq r5, r0
    moveq r0, #0
    streq r0, [r1, #0xc30]
    streq r0, [r1, #0xc34]
    ldreq r0, [r7, #0x10]
    cmpeq r0, #0
    bne @L_02168f0c
    mov r0, r7
    bl func_ov044_02167480
@L_02168f0c:
    mov r0, r5, lsl #0x10
    mov r2, r0, asr #0x10
    add r1, sp, #0x10
    str r2, [sp]
    ldr r0, =data_020c46d4
    add r2, sp, #4
    mov r3, r4, lsl #0x10
    ldr r0, [r0]
    ldr r1, [r1, r6, lsl #2]
    ldr r2, [r2, r6, lsl #2]
    mov r3, r3, asr #0x10
    bl func_02093524
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov044_02168f4c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    mov r9, r0
    ldr r12, [r9, #0xbd4]
    ldr r10, [r9, #0xbf4]
    ldr r7, [r9, #0xbf0]
    ldr r4, [r9, #0xc0c]
    ldr r6, [r9, #0xc80]
    ldr r0, =data_ov044_0216a764
    mov r8, r1
    add r5, sp, #0x20
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    rsb r0, r6, #3
    str r0, [sp, #0x2c]
    ldr r0, =data_ov044_0216a774
    str r10, [sp, #0x34]
    str r4, [sp, #0x3c]
    mov r11, #0x24
    str r7, [sp, #0x38]
    mla r7, r8, r11, r9
    add lr, r9, #0x1a4
    str r12, [sp, #0x30]
    add r11, sp, #0x10
    ldmia r0, {r0, r1, r2, r3}
    stmia r11, {r0, r1, r2, r3}
    add r12, lr, #0xc00
    ldr r0, [r7, #0xc24]
    ldr r1, [r7, #0xc20]
    ldr r2, [r12, r8, lsl #3]
    mov r0, r0, lsl #0x10
    add r7, r2, #1
    mov r1, r1, lsl #0x10
    ldr r10, =data_020c46d4
    mov r0, r0, asr #0x10
    str r7, [r12, r8, lsl #3]
    str r0, [sp]
    add r4, sp, #0x30
    mov r3, r1, asr #0x10
    ldr r1, [r4, r8, lsl #2]
    ldr r0, [r10]
    ldr r2, [r5, r8, lsl #2]
    bl func_02093524
    cmp r7, #3
    bge @L_0216904c
    ldr r0, [r9, #0x10]
    cmp r0, #3
    beq @L_02169028
    ldr r0, [r10]
    ldr r1, [r4, r8, lsl #2]
    ldr r2, [r5, r8, lsl #2]
    mov r3, #2
    bl func_02093928
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169028:
    mov r0, #0
    str r0, [sp]
    ldr r0, [r10]
    ldr r1, [r4, r8, lsl #2]
    ldr r2, [r5, r8, lsl #2]
    ldr r3, [r11, r6, lsl #3]
    bl func_020939c8
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216904c:
    cmp r7, #6
    bge @L_021690ac
    ldr r0, [r9, #0x10]
    cmp r0, #3
    beq @L_02169084
    mov r0, #1
    str r0, [sp]
    ldr r0, [r10]
    ldr r1, [r4, r8, lsl #2]
    ldr r2, [r5, r8, lsl #2]
    mov r3, #2
    bl func_0209386c
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169084:
    mov r0, #0
    str r0, [sp]
    add r3, r11, r6, lsl #3
    ldr r0, [r10]
    ldr r1, [r4, r8, lsl #2]
    ldr r2, [r5, r8, lsl #2]
    ldr r3, [r3, #4]
    bl func_020939c8
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021690ac:
    cmp r7, #9
    bge @L_02169100
    ldr r0, [r9, #0x10]
    cmp r0, #3
    beq @L_021690dc
    ldr r0, [r10]
    ldr r1, [r4, r8, lsl #2]
    ldr r2, [r5, r8, lsl #2]
    mov r3, #2
    bl func_02093928
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021690dc:
    mov r0, #0
    str r0, [sp]
    ldr r0, [r10]
    ldr r1, [r4, r8, lsl #2]
    ldr r2, [r5, r8, lsl #2]
    ldr r3, [r11, r6, lsl #3]
    bl func_020939c8
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169100:
    addne sp, sp, #0x40
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r9, r8, lsl #3
    mov r4, #0
    str r4, [r0, #0xda0]
    str r4, [r0, #0xda4]
    ldr r0, [r9, #0x10]
    cmp r0, #0
    bne @L_02169138
    mov r0, r9
    mov r1, #1
    bl func_ov044_02166afc
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169138:
    cmp r0, #1
    bne @L_02169190
    mov r0, r9
    bl func_ov044_02169374
    mov r6, r0
    mov r0, r9
    bl func_ov044_02169288
    ldr r5, =data_020e88a0
    mov r2, r0
    mov r0, r5
    mov r1, r6
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_02077eecEv
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_0206f064Ev
    mov r0, #1
    strb r0, [r9, #0x23]
    mov r0, r9
    mov r1, #5
    bl func_ov044_02166afc
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169190:
    cmp r0, #2
    bne @L_021691f8
    ldr r0, =data_ov044_0216a74c
    add r3, sp, #4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r9, #0xc5c]
    cmp r1, #3
    sub r0, r1, #1
    addls pc, pc, r1, lsl #2
    b @L_0216926c
    b @L_021691cc
    b @L_021691e0
    b @L_021691e0
    b @L_021691e0
@L_021691cc:
    mov r0, r9
    mov r1, #3
    bl func_ov044_02166afc
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021691e0:
    ldr r1, [r3, r0, lsl #2]
    mov r0, r9
    mov r2, r1
    bl func_ov044_02166a50
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021691f8:
    cmp r0, #3
    addne sp, sp, #0x40
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r9, #0xc80]
    mov r1, r4
    cmp r0, #0
    mov r0, r9
    bne @L_02169224
    bl func_ov044_02166afc
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169224:
    bl func_ov044_02166afc
    mov r0, r9
    bl func_ov044_02169288
    mov r1, r0
    ldr r0, =data_020e88a0
    mov r3, r4
    mov r2, #1
    bl _ZN17UnkClass_020621b413func_02076ba0Ev
    mov r0, r9
    bl func_ov044_02167a14
    mov r0, r9
    bl func_ov044_021663e4
    mov r0, r9
    bl func_ov044_02167714
    mov r0, r9
    bl func_ov044_02167658
    mov r0, r9
    bl func_ov044_021674e8
@L_0216926c:
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov044_02169288(void)
{
    ldr r2, [r0, #0xc14]
    ldr r1, [r0, #0xb4c]
    add r1, r2, r1, lsl #3
    add r0, r0, r1, lsl #1
    add r0, r0, #0x300
    ldrh r0, [r0, #0x40]
    bx lr
}

extern "C" asm void func_ov044_021692a4(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r0
    ldr r2, [r3, #0xc14]
    ldr r1, [r3, #0xb4c]
    ldr r0, =data_020e88a0
    add r1, r2, r1, lsl #3
    add r1, r3, r1, lsl #1
    add r1, r1, #0x300
    ldrh r1, [r1, #0x40]
    bl _ZN17UnkClass_020621b413func_020768fcEm
    ldrb r0, [r0, #0x21]
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov044_021692d8(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r0
    ldr r2, [r3, #0xc14]
    ldr r1, [r3, #0xb4c]
    ldr r0, =data_020e88a0
    add r1, r2, r1, lsl #3
    add r1, r3, r1, lsl #1
    add r1, r1, #0x300
    ldrh r1, [r1, #0x40]
    bl _ZN17UnkClass_020621b413func_020768fcEm
    bl _ZN17UnkClass_020621b413func_02078474Ev
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov044_0216930c(void)
{
    mov r3, r0
    ldr r2, [r3, #0xc14]
    ldr r1, [r3, #0xb4c]
    ldr r0, =data_020e88a0
    add r1, r2, r1, lsl #3
    add r1, r3, r1, lsl #1
    add r1, r1, #0x300
    ldrh r1, [r1, #0x40]
    ldr r12, =_ZN17UnkClass_020621b413func_02077104Ev
    mov r2, #1
    bx r12
}

extern "C" asm void func_ov044_02169340(void)
{
    mov r3, r0
    ldr r2, [r3, #0xc14]
    ldr r1, [r3, #0xb4c]
    ldr r0, =data_020e88a0
    add r1, r2, r1, lsl #3
    add r1, r3, r1, lsl #1
    add r1, r1, #0x300
    ldrh r1, [r1, #0x40]
    ldr r12, =_ZN17UnkClass_020621b413func_020771d4Ev
    mov r2, #0
    bx r12
}

extern "C" asm void func_ov044_02169374(void)
{
    ldr r3, [r0, #0xc38]
    ldr r2, [r0, #0xca4]
    mov r1, #0x30
    add r2, r3, r2
    mla r0, r2, r1, r0
    ldrh r0, [r0, #0x60]
    bx lr
}

extern "C" asm void func_ov044_02169390(void)
{
    ldr r3, [r0, #0xc38]
    ldr r2, [r0, #0xca4]
    mov r1, #0x30
    add r2, r3, r2
    mla r0, r2, r1, r0
    ldrh r0, [r0, #0x64]
    and r0, r0, #0xff
    bx lr
}

extern "C" void func_ov044_021693b0(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0xA4) + 0xC00), 0, 0x14);
}

extern "C" asm void func_ov044_021693cc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0x20
    mov r1, r2, asr #2
    add r1, r2, r1, lsr #29
    ldr r2, [r0, #0xca4]
    mov r1, r1, asr #3
    mul r2, r1, r2
    add r5, r2, #0x40
    mov r2, r5, lsl #0x10
    ldr r1, [r0, #0xc00]
    mov r4, #0x68
    str r5, [r0, #0xca8]
    mov r2, r2, asr #0x10
    ldr r0, =data_020c46d4
    str r2, [sp]
    ldr r0, [r0]
    mov r3, r4
    mov r2, #1
    bl func_02093524
    ldr r0, =data_020c46c4
    mov r2, r4
    ldr r0, [r0]
    mov r3, r5
    mov r1, #8
    bl func_ov015_021630d8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov044_0216943c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    ldr r1, =data_020c46c4
    mov r10, r0
    ldr r0, [r1]
    add r1, sp, #4
    ldr r5, [r10, #0xc00]
    mov r6, #1
    mov r7, #0x68
    mov r4, #0x40
    mov r9, #0x60
    bl func_ov015_021629d0
    ldrsh r0, [sp, #4]
    cmp r0, #0x68
    addlt sp, sp, #8
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r0, #0x78
    addgt sp, sp, #8
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrsh r2, [sp, #6]
    ldr r1, [r10, #0xcac]
    ldr r0, [r10, #0xca8]
    sub r1, r2, r1
    add r8, r0, r1
    cmp r8, r4
    movlt r8, r4
    cmp r8, r9
    movgt r8, r9
    ldrsh r2, [sp, #6]
    sub r1, r8, #0x40
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r1, r0, asr #2
    mov r0, r10
    str r2, [r10, #0xcac]
    str r8, [r10, #0xca8]
    str r1, [r10, #0xca4]
    bl func_ov044_02168190
    mov r0, r10
    bl func_ov044_02167d80
    mov r0, r8, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, =data_020c46d4
    mov r3, r7, lsl #0x10
    ldr r0, [r0]
    mov r1, r5
    mov r2, r6
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r0, =data_020c46c4
    mov r2, r7
    ldr r0, [r0]
    mov r3, r8
    mov r1, #8
    bl func_ov015_021630d8
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov044_0216952c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #6
    ldreq r0, [r4, #0xca4]
    ldr r2, [r4, #0xca4]
    cmpeq r0, #0
    sub r0, r1, #6
    rsb r0, r0, r0, lsl #3
    mov r3, #1
    rsb r0, r0, #8
    moveq r3, #0
    subs r0, r2, r0
    str r0, [r4, #0xca4]
    bpl @L_02169574
    mov r0, #0
    cmp r1, #7
    str r0, [r4, #0xca4]
    moveq r3, r0
@L_02169574:
    cmp r3, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov044_02168190
    mov r0, r4
    bl func_ov044_02167d80
    mov r0, r4
    bl func_ov044_021693cc
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov044_021695a8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #0xa
    ldreq r0, [r4, #0xca4]
    ldr r2, [r4, #0xca4]
    cmpeq r0, #8
    sub r0, r1, #9
    rsb r0, r0, r0, lsl #3
    add r0, r0, #1
    mov r3, #1
    add r0, r2, r0
    moveq r3, #0
    str r0, [r4, #0xca4]
    cmp r0, #8
    ble @L_021695f4
    mov r0, #8
    cmp r1, #9
    str r0, [r4, #0xca4]
    moveq r3, #0
@L_021695f4:
    cmp r3, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov044_02168190
    mov r0, r4
    bl func_ov044_02167d80
    mov r0, r4
    bl func_ov044_021693cc
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov044_02169628(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r2, [r4, #0xcb0]
    cmp r2, #0xf
    addlt r0, r2, #1
    strlt r0, [r4, #0xcb0]
    ldmltia sp!, {r4, pc}
    ldr r2, [r4, #0xcb4]
    cmp r2, #0
    bne @L_02169670
    cmp r1, #7
    beq @L_02169664
    cmp r1, #9
    beq @L_0216966c
    b @L_02169670
@L_02169664:
    bl func_ov044_0216952c
    b @L_02169670
@L_0216966c:
    bl func_ov044_021695a8
@L_02169670:
    ldr r0, [r4, #0xcb4]
    ldr r2, =0x66666667
    add r3, r0, #1
    mov r0, r3, lsr #0x1f
    smull r1, r12, r2, r3
    add r12, r0, r12, asr #1
    mov r2, #5
    smull r0, r1, r2, r12
    sub r12, r3, r0
    str r12, [r4, #0xcb4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov044_021696a0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =data_020c46b8
    mov r6, r0
    ldr r0, [r2]
    mov r5, r1
    mov r4, #0
    bl func_ov015_02161760
    cmp r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r6, #0xc]
    cmp r0, #6
    addeq r0, r6, #0x1000
    ldreq r0, [r0, #0x1c4]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, #0x24
    b @L_02169704
@L_021696e4:
    mla r1, r4, r0, r6
    ldr r1, [r1, #0xc30]
    cmp r1, #0
    addeq r1, r6, r4, lsl #3
    ldreq r1, [r1, #0xda0]
    cmpeq r1, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r4, r4, #1
@L_02169704:
    cmp r4, #4
    blt @L_021696e4
    ldr r0, =data_020c4814
    ldr r4, =data_020c46c4
    ldrh r1, [r0]
    ldr r0, [r4]
    orr r1, r1, r5
    mov r1, r1, lsl #0x10
    mov r7, r1, lsr #0x10
    bl func_ov015_021629ac
    cmp r0, #1
    bne @L_02169754
    ldr r0, [r4]
    add r0, r0, #0xf00
    ldrh r5, [r0, #0x38]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0
    mov r7, r5
    strh r1, [r0, #0x38]
@L_02169754:
    tst r5, #1
    beq @L_02169768
    mov r0, r6
    bl func_ov044_02169804
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169768:
    tst r5, #2
    beq @L_0216977c
    mov r0, r6
    bl func_ov044_02169928
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216977c:
    tst r5, #0x800
    beq @L_02169790
    mov r0, r6
    bl func_ov044_021699d4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169790:
    tst r5, #0x200
    beq @L_021697a4
    mov r0, r6
    bl func_ov044_02169a2c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021697a4:
    tst r5, #0x100
    beq @L_021697b8
    mov r0, r6
    bl func_ov044_02169a98
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021697b8:
    tst r5, #0x20
    beq @L_021697cc
    mov r0, r6
    bl func_ov044_02169b00
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021697cc:
    tst r5, #0x10
    beq @L_021697e0
    mov r0, r6
    bl func_ov044_02169b98
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021697e0:
    tst r7, #0xc0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r7
    bl func_ov044_02169c28
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov044_02169804(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r1, [r5, #0x10]
    mov r4, #1
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    b @L_021698fc
    b @L_02169838
    b @L_02169868
    b @L_021698a4
    b @L_021698d0
    b @L_021698fc
    b @L_021698e4
@L_02169838:
    bl func_ov044_02169340
    cmp r0, #0
    beq @L_02169850
    ldr r0, [r5, #0xb48]
    cmp r0, #0
    beq @L_02169860
@L_02169850:
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_02169860:
    str r4, [r5, #0xda0]
    b @L_021698fc
@L_02169868:
    bl func_ov044_02169390
    cmp r0, #0
    bne @L_02169884
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_02169884:
    mov r0, r5
    mov r1, #3
    str r4, [r5, #0xda8]
    bl func_ov044_02169f3c
    ldr r0, =data_020c5e40
    mov r1, #0x15
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_021698a4:
    bl func_ov044_0216930c
    cmp r0, #0
    ldreq r0, [r5, #0xc5c]
    cmpeq r0, #0
    bne @L_021698c8
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_021698c8:
    str r4, [r5, #0xdb0]
    b @L_021698fc
@L_021698d0:
    ldr r0, =data_020c5e40
    mov r1, r4
    str r1, [r5, #0xdb8]
    bl _ZN12SoundManager9PlaySoundEi
    b @L_021698fc
@L_021698e4:
    ldr r0, =data_020c5e40
    add r2, r5, #0x1000
    mov r1, r4
    str r1, [r2, #0x1c4]
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_021698fc:
    ldr r0, [r5, #0x10]
    cmp r0, #3
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, #3
    bl func_ov044_02169f3c
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov044_02169928(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x10]
    cmp r1, #3
    cmpne r1, #5
    ldmeqia sp!, {r4, pc}
    cmp r1, #0
    beq @L_0216995c
    cmp r1, #1
    beq @L_02169990
    cmp r1, #2
    beq @L_021699a8
    b @L_021699b0
@L_0216995c:
    ldr r0, =data_020c4ab4
    mov r1, #0
    ldrb r2, [r0, #0x74]
    cmp r2, #0
    movne r1, #0x5a
    bne @L_02169980
    ldrb r0, [r0, #0x75]
    cmp r0, #0
    movne r1, #0x71
@L_02169980:
    mov r0, r4
    mov r2, r1
    bl func_ov044_02166a50
    b @L_021699b0
@L_02169990:
    mov r1, #0
    bl func_ov044_02166afc
    add r0, r4, #0x1000
    mov r1, #1
    str r1, [r0, #0x1cc]
    b @L_021699b0
@L_021699a8:
    mov r1, #0
    bl func_ov044_02166afc
@L_021699b0:
    mov r0, r4
    mov r1, #1
    bl func_ov044_02169f3c
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov044_021699d4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r1, [r5, #0x10]
    cmp r1, #0
    bne @L_02169a10
    mov r4, #2
    mov r1, r4
    bl func_ov044_02166afc
    mov r0, r5
    mov r1, r4
    bl func_ov044_02169f3c
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_02169a10:
    cmp r1, #1
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov044_02169a2c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x10]
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    ldr r1, [r4, #0xb50]
    ldr r2, [r4, #0xb4c]
    sub r0, r1, #1
    add r0, r2, r0
    bl func_0202273c
    mov r0, r4
    str r1, [r4, #0xb4c]
    bl func_ov044_02167658
    mov r0, r4
    bl func_ov044_021674e8
    mov r0, r4
    bl func_ov044_02167a14
    mov r0, r4
    bl func_ov044_02167714
    mov r0, r4
    mov r1, #4
    bl func_ov044_02169f3c
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov044_02169a98(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x10]
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    ldr r0, [r4, #0xb4c]
    ldr r1, [r4, #0xb50]
    add r0, r0, #1
    bl func_0202273c
    mov r0, r4
    str r1, [r4, #0xb4c]
    bl func_ov044_02167658
    mov r0, r4
    bl func_ov044_021674e8
    mov r0, r4
    bl func_ov044_02167a14
    mov r0, r4
    bl func_ov044_02167714
    mov r0, r4
    mov r1, #5
    bl func_ov044_02169f3c
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov044_02169b00(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    ldr r1, [r0, #0x10]
    cmp r1, #0
    bne @L_02169b20
    bl func_ov044_02169a2c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02169b20:
    cmp r1, #3
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, pc}
    ldr r6, [r0, #0xc0c]
    mov r3, #1
    mov r2, #0x38
    mov r5, #2
    mov r1, #0x60
    str r3, [r0, #0xc80]
    str r2, [r0, #0xc8c]
    str r1, [r0, #0xc90]
    ldr r4, =data_020c46d4
    str r3, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r5
    mov r3, r5
    bl func_0209386c
    ldr r0, [r4]
    mov r1, r6
    mov r3, r5
    add r2, r5, #1
    bl func_02093928
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov044_02169b98(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, [r0, #0x10]
    cmp r1, #0
    bne @L_02169bb0
    bl func_ov044_02169a98
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169bb0:
    cmp r1, #3
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r5, [r0, #0xc0c]
    mov r3, #0
    mov r2, #0x98
    mov r1, #0x60
    mov r4, #3
    mov r7, #2
    str r3, [r0, #0xc80]
    str r2, [r0, #0xc8c]
    str r1, [r0, #0xc90]
    mov r0, #1
    ldr r6, =data_020c46d4
    str r0, [sp]
    ldr r0, [r6]
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0209386c
    ldr r0, [r6]
    mov r1, r5
    mov r3, r7
    sub r2, r4, #1
    bl func_02093928
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov044_02169c28(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x24
    mov r8, r0
    ldr r6, [r8, #0x10]
    cmp r6, #3
    cmpne r6, #5
    addeq sp, sp, #0x24
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr lr, =data_ov044_0216a784
    add r12, sp, #0xc
    tst r1, #0x80
    mov r5, #0x24
    mov r7, r12
    ldmia lr!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    add r3, r7, r6, lsl #3
    ldmia lr, {r0, r1}
    mov r4, #0
    mla r5, r6, r5, r8
    ldr r2, =data_ov044_0216a728
    stmia r12, {r0, r1}
    add r7, sp, #0
    ldmia r2, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    movne r4, #1
    ldr r5, [r5, #0xc14]
    ldr r0, [r3, r4, lsl #2]
    ldr r1, [r7, r6, lsl #2]
    add r9, r5, r0
    mov r0, r9
    bl func_0202273c
    mov r7, r1
    cmp r6, #0
    bne @L_02169ce0
    cmp r4, #0
    cmpeq r5, #0
    bne @L_02169cc8
    mov r0, r8
    bl func_ov044_02169a2c
    b @L_02169d7c
@L_02169cc8:
    cmp r4, #1
    cmpeq r5, #7
    bne @L_02169d7c
    mov r0, r8
    bl func_ov044_02169a98
    b @L_02169d7c
@L_02169ce0:
    cmp r6, #1
    bne @L_02169d7c
    mov r7, r9
    cmp r4, #0
    bne @L_02169d38
    cmp r9, #0
    bge @L_02169d7c
    ldr r0, [r8, #0xca4]
    mov r7, #0
    cmp r0, #0
    ble @L_02169d7c
    sub r1, r0, #1
    mov r0, r8
    str r1, [r8, #0xca4]
    bl func_ov044_02168190
    mov r0, r8
    bl func_ov044_02167d80
    mov r0, r8
    bl func_ov044_021693cc
    mov r0, r8
    mov r1, #7
    b @L_02169d78
@L_02169d38:
    cmp r9, #7
    ble @L_02169d7c
    ldr r0, [r8, #0xca4]
    mov r7, #7
    cmp r0, #8
    bge @L_02169d7c
    add r1, r0, #1
    mov r0, r8
    str r1, [r8, #0xca4]
    bl func_ov044_02168190
    mov r0, r8
    bl func_ov044_02167d80
    mov r0, r8
    bl func_ov044_021693cc
    mov r0, r8
    mov r1, #9
@L_02169d78:
    bl func_ov044_02169f3c
@L_02169d7c:
    mov r0, r8
    mov r1, r6
    mov r2, r7
    bl func_ov044_02168cc4
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov044_02169d9c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, =data_020c46d4
    mov r10, r0
    ldr r0, [r4]
    mov r8, r2
    mov r11, #2
    mov r9, r1
    mov r1, r11
    mov r2, #1
    mov r7, r3
    mov r5, #0
    mov r6, #0x64
    bl func_020920c4
    add r1, r10, r9, lsl #2
    str r0, [r1, #0xbd4]
    add r1, r10, r8, lsl #2
    ldr r1, [r1, #0xb88]
    mov r8, r0
    and r3, r1, #0xff
    ldr r0, [r4]
    mov r1, r8
    mov r2, #1
    bl func_02093188
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r8
    mov r2, #1
    mov r3, r7
    bl func_020939c8
    ldr r0, [sp, #0x34]
    ldr r3, [sp, #0x30]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    mov r3, r3, lsl #0x10
    ldr r0, [r4]
    mov r1, r8
    mov r2, #1
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r3, [sp, #0x3c]
    ldr r0, [r4]
    mov r3, r3, lsl #0x10
    mov r1, r8
    mov r2, #1
    mov r3, r3, lsr #0x10
    bl func_02093368
    mov r0, #1
    str r0, [sp]
    ldr r0, [r4]
    mov r2, #1
    mov r1, r8
    mov r3, r11
    bl func_0209386c
    ldr r0, [r10, #0x10]
    ldr r1, [sp, #0x38]
    cmp r0, #1
    mov r2, r1, lsl #0x10
    mov r4, #1
    addeq r6, r11, #0x260
    ldr r0, =data_020c46c4
    stmia sp, {r4, r6}
    ldr r0, [r0]
    mov r1, r4
    mov r3, r8
    mov r2, r2, lsr #0x10
    bl func_ov015_02163040
    movs r6, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    ldrb r0, [sp, #0x40]
    strb r5, [r6, #0x10]
    strb r5, [r6, #0xf]
    strh r5, [r6, #0xc]
    cmp r0, #1
    addne sp, sp, #8
    strb r5, [r6, #0x11]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r5
    mov r2, r4
    mov r3, r5
    add r0, r6, #0x3a
    bl func_ov015_02161d00
    mov r1, r5
    mov r2, r7
    mov r3, r5
    add r0, r6, #0x3a
    bl func_ov015_02161d24
    mov r1, r5
    mov r2, r4
    mov r3, r5
    add r0, r6, #0x3e
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    add r2, r7, #1
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d24
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov044_02169f3c(void)
{
    func_ov015_021624f0(*(s32 *)(data_020c46c4));
}

extern "C" asm void func_ov044_02169f54(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r4, [sp, #0x20]
    ldr r5, =data_020c46c4
    mov r9, r0
    ldr r0, [r5]
    mov r4, r4, lsl #0x10
    mov r8, r1
    mov r1, r4, lsr #0x10
    mov r7, r2
    mov r6, r3
    mov r5, #0
    bl func_ov015_02161dd4
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_020c46d4
    str r5, [sp]
    add r1, r9, r8, lsl #2
    mov r8, #1
    ldr r0, [r0]
    ldr r1, [r1, #0xbd4]
    mov r2, r8
    mov r3, r7
    bl func_020939c8
    mov r1, r5
    mov r2, r8
    mov r3, r5
    add r0, r4, #0x3a
    bl func_ov015_02161d00
    mov r1, r5
    mov r2, r7
    add r0, r4, #0x3a
    mov r3, r5
    bl func_ov015_02161d24
    mov r2, r8
    add r0, r4, #0x3e
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d00
    add r0, r4, #0x3e
    mov r2, r6
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov044_0216a00c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =data_020c46b8
    mov r6, r0
    ldr r0, [r2]
    mov r5, r1
    mov r4, #0
    bl func_ov015_02161760
    cmp r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r6, #0xc]
    cmp r0, #6
    addeq r0, r6, #0x1000
    ldreq r0, [r0, #0x1c4]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, #0x24
    b @L_0216a070
@L_0216a050:
    mla r1, r4, r0, r6
    ldr r1, [r1, #0xc30]
    cmp r1, #0
    addeq r1, r6, r4, lsl #3
    ldreq r1, [r1, #0xda0]
    cmpeq r1, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r4, r4, #1
@L_0216a070:
    cmp r4, #4
    blt @L_0216a050
    ldr r4, =data_020c46c4
    mov r7, #1
    ldr r0, [r4]
    mov r1, r5
    mov r2, r7
    bl func_ov015_02162750
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_0216a134
    b @L_0216a134
    b @L_0216a0b4
    b @L_0216a0e4
    b @L_0216a0fc
    b @L_0216a118
    b @L_0216a0cc
@L_0216a0b4:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov044_0216a184
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a0cc:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov044_0216a32c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a0e4:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov044_0216a35c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a0fc:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    mov r2, #0
    bl func_ov044_0216a444
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a118:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    mov r2, r7
    bl func_ov044_0216a444
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a134:
    ldr r1, [r6, #0x10]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_0216a15c
    b @L_0216a15c
    b @L_0216a15c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_0216a16c
@L_0216a15c:
    mov r0, r6
    mov r2, #0
    bl func_ov044_0216a538
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a16c:
    mov r0, r6
    mov r1, #0
    bl func_ov044_02168be0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov044_0216a184(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r9, r0
    mov r8, r1
    add r2, r9, #0x1000
    str r8, [r2, #0x1d0]
    cmp r8, #0x22
    sub r4, r8, #0xb
    sub r5, r8, #0x13
    sub r10, r8, #0x1c
    ldr r6, [r9, #0xc14]
    ldr r7, [r9, #0xc38]
    bgt @L_0216a1f8
    cmp r8, #0x22
    bge @L_0216a240
    cmp r8, #0xa
    addls pc, pc, r8, lsl #2
    b @L_0216a250
    b @L_0216a250
    b @L_0216a250
    b @L_0216a250
    b @L_0216a250
    b @L_0216a250
    b @L_0216a250
    b @L_0216a220
    b @L_0216a220
    b @L_0216a204
    b @L_0216a230
    b @L_0216a230
@L_0216a1f8:
    cmp r8, #0x23
    beq @L_0216a248
    b @L_0216a250
@L_0216a204:
    ldr r0, =data_020c46c4
    add r1, sp, #0
    ldr r0, [r0]
    bl func_ov015_021629d0
    ldrsh r0, [sp, #2]
    str r0, [r9, #0xcac]
    b @L_0216a250
@L_0216a220:
    mov r2, #0
    str r2, [r9, #0xcb0]
    bl func_ov044_0216952c
    b @L_0216a250
@L_0216a230:
    mov r2, #0
    str r2, [r9, #0xcb0]
    bl func_ov044_021695a8
    b @L_0216a250
@L_0216a240:
    bl func_ov044_02169b00
    b @L_0216a250
@L_0216a248:
    mov r0, r9
    bl func_ov044_02169b98
@L_0216a250:
    cmp r8, #0xb
    blt @L_0216a294
    cmp r8, #0x12
    bgt @L_0216a294
    cmp r4, r6
    bne @L_0216a274
@L_0216a268:
    mov r0, r9
    bl func_ov044_02169804
    b @L_0216a308
@L_0216a274:
    mov r5, #0
    mov r0, r9
    mov r1, r5
    mov r2, r4
    bl func_ov044_02168cc4
    mov r0, r9
    mov r1, r5
    b @L_0216a300
@L_0216a294:
    cmp r8, #0x13
    blt @L_0216a2d4
    cmp r8, #0x1a
    bgt @L_0216a2d4
    cmp r5, r7
    bne @L_0216a2b0
    b @L_0216a268
@L_0216a2b0:
    mov r4, #1
    mov r0, r9
    mov r1, r4
    mov r2, r5
    bl func_ov044_02168cc4
    mov r0, r9
    mov r1, r4
    mov r2, r4
    b @L_0216a304
@L_0216a2d4:
    cmp r8, #0x1c
    blt @L_0216a308
    cmp r8, #0x20
    bgt @L_0216a308
    mov r4, #2
    mov r0, r9
    mov r1, r4
    mov r2, r10
    bl func_ov044_02168cc4
    mov r0, r9
    mov r1, r4
@L_0216a300:
    mov r2, #1
@L_0216a304:
    bl func_ov044_0216a538
@L_0216a308:
    cmp r8, #0x25
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r9
    mov r1, #1
    bl func_ov044_02168be0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov044_0216a32c(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #7
    beq @L_0216a354
    cmp r1, #8
    beq @L_0216a34c
    cmp r1, #9
    beq @L_0216a354
    ldmia sp!, {r3, pc}
@L_0216a34c:
    bl func_ov044_0216943c
    ldmia sp!, {r3, pc}
@L_0216a354:
    bl func_ov044_02169628
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov044_0216a35c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #0x21
    bgt @L_0216a3ac
    bge @L_0216a40c
    cmp r4, #5
    bgt @L_0216a3a0
    cmp r4, #0
    addge pc, pc, r4, lsl #2
    b @L_0216a414
    b @L_0216a414
    b @L_0216a3f0
    b @L_0216a3e8
    b @L_0216a3e0
    b @L_0216a3f4
    b @L_0216a3fc
@L_0216a3a0:
    cmp r4, #0x1b
    beq @L_0216a40c
    b @L_0216a414
@L_0216a3ac:
    cmp r4, #0x23
    bgt @L_0216a3c4
    bge @L_0216a404
    cmp r4, #0x22
    beq @L_0216a404
    b @L_0216a414
@L_0216a3c4:
    cmp r4, #0x26
    bgt @L_0216a414
    cmp r4, #0x24
    blt @L_0216a414
    cmpne r4, #0x26
    beq @L_0216a40c
    b @L_0216a414
@L_0216a3e0:
    bl func_ov044_02169804
    b @L_0216a414
@L_0216a3e8:
    bl func_ov044_021699d4
    b @L_0216a414
@L_0216a3f0:
    b @L_0216a410
@L_0216a3f4:
    bl func_ov044_02169a2c
    b @L_0216a414
@L_0216a3fc:
    bl func_ov044_02169a98
    b @L_0216a414
@L_0216a404:
    mov r0, r5
    b @L_0216a3e0
@L_0216a40c:
    mov r0, r5
@L_0216a410:
    bl func_ov044_02169928
@L_0216a414:
    cmp r4, #0x1c
    blt @L_0216a430
    cmp r4, #0x20
    bgt @L_0216a430
    mov r0, r5
    bl func_ov044_02169804
    ldmia sp!, {r3, r4, r5, pc}
@L_0216a430:
    cmp r4, #0x25
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl func_ov044_02169804
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov044_0216a444(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    ldr r4, =data_020c46c4
    mov r8, r0
    mov r5, #0
    mov r7, r1
    ldr r0, [r4]
    add r1, sp, #4
    str r5, [sp, #8]
    mov r6, r2
    bl func_ov015_021629d0
    str r5, [sp]
    ldrsh r1, [sp, #4]
    ldrsh r2, [sp, #6]
    ldr r0, [r4]
    add r3, sp, #8
    bl func_ov015_02162260
    cmp r6, #0
    bne @L_0216a524
    cmp r7, #0x1b
    bgt @L_0216a4a4
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    b @L_0216a4c4
@L_0216a4a4:
    cmp r7, #0x26
    bgt @L_0216a4c4
    cmp r7, #0x21
    blt @L_0216a4c4
    cmpne r7, #0x24
    cmpne r7, #0x26
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0216a4c4:
    ldr r0, [sp, #8]
    cmp r0, #0
    ldr r0, [r8, #0x10]
    movne r5, #1
    cmp r0, #1
    cmpeq r7, #8
    bne @L_0216a4e8
    mov r0, r8
    bl func_ov044_0216943c
@L_0216a4e8:
    ldr r1, [r8, #0x10]
    cmp r1, #5
    beq @L_0216a50c
    ldr r3, [sp, #8]
    mov r0, r8
    mov r2, r5
    bl func_ov044_0216a5ec
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0216a50c:
    ldr r2, [sp, #8]
    mov r0, r8
    mov r1, r5
    bl func_ov044_02168c34
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0216a524:
    add r0, r8, #0x1000
    str r5, [r0, #0x1d0]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov044_0216a538(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    mov r4, r1
    mov r1, #0x24
    mla r5, r4, r1, r0
    ldr r3, [r5, #0xc24]
    ldr r8, [r0, #0xbf4]
    ldr r6, [r0, #0xbf0]
    ldr r1, [r0, #0xbd4]
    mov r3, r3, lsl #0x10
    str r8, [sp, #8]
    ldr r5, [r5, #0xc20]
    mov r0, r3, asr #0x10
    mov r3, r5, lsl #0x10
    ldr r5, =data_020c46d4
    str r0, [sp]
    add r7, sp, #4
    str r6, [sp, #0xc]
    str r1, [sp, #4]
    ldr r0, [r5]
    ldr r1, [r7, r4, lsl #2]
    mov r8, #3
    mov r9, r2
    mov r2, r8
    mov r3, r3, asr #0x10
    bl func_02093524
    mov r6, #2
    ldr r0, [r5]
    ldr r1, [r7, r4, lsl #2]
    mov r2, r8
    mov r3, r6
    bl func_02093928
    cmp r9, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, #1
    str r0, [sp]
    ldr r0, [r5]
    ldr r1, [r7, r4, lsl #2]
    mov r2, r8
    mov r3, r6
    bl func_0209386c
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov044_0216a5ec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    mov r4, r0
    ldr r6, [r4, #0xbd4]
    ldr r5, [r4, #0xbf4]
    ldr r8, [r4, #0xbf0]
    str r6, [sp, #0x1c]
    str r5, [sp, #0x20]
    ldr r0, =data_ov044_0216a710
    ldr r6, =data_ov044_0216a734
    add r7, sp, #0x10
    add r5, sp, #4
    movs r12, r2
    mov lr, r1
    ldmia r0, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    ldmia r6, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    str r8, [sp, #0x24]
    mov r2, #3
    bne @L_0216a660
    ldr r0, =data_020c46d4
    add r1, sp, #0x1c
    ldr r0, [r0]
    ldr r1, [r1, lr, lsl #2]
    mov r3, #2
    bl func_02093928
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216a660:
    add r0, r4, #0x1000
    ldrh r1, [r3, #8]
    ldr r3, [r0, #0x1d0]
    cmp r3, r1
    bne @L_0216a6bc
    ldr r0, [r7, lr, lsl #2]
    cmp r3, r0
    addlt sp, sp, #0x28
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r5, lr, lsl #2]
    cmp r3, r0
    addgt sp, sp, #0x28
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
    mov r3, #1
    add r1, sp, #0x1c
    str r3, [sp]
    ldr r0, =data_020c46d4
    ldr r1, [r1, lr, lsl #2]
    ldr r0, [r0]
    mov r3, #2
    bl func_0209386c
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216a6bc:
    ldr r0, =data_020c46d4
    add r1, sp, #0x1c
    ldr r0, [r0]
    ldr r1, [r1, lr, lsl #2]
    mov r3, #2
    bl func_02093928
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov044_0216a6e8(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov044_0216a6fc(void)
{
}
