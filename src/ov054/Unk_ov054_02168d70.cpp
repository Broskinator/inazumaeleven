#include "ov054/Unk_ov054_02168d70.hpp"

extern "C" void func_ov054_02168d70(void);
extern "C" void func_ov054_02168e44(void);
extern "C" void func_ov054_02168eb8(void);
extern "C" void func_ov054_02168f2c(void);
extern "C" void func_ov054_021690a4(void);
extern "C" void func_ov054_0216918c(void);
extern "C" void func_ov054_02169230(void);
extern "C" void func_ov054_0216929c(void);
extern "C" void func_ov054_02169344(void);
extern "C" void func_ov054_0216935c(void);
extern "C" s32 func_ov054_021693b8(s32 arg0);
extern "C" void func_ov054_021693cc(void);

extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c5e40[];
extern "C" char data_020d3d20[];
extern "C" char data_020e88a0[];
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_020621b413func_0206ea30Eit(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_020808c4(void);
extern "C" void func_02092270(void);
extern "C" void func_0209386c(void);
extern "C" void func_02093928(void);
extern "C" void func_02093bb0(void);
extern "C" void func_02097b3c(void);
extern "C" void func_0209b7b0(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02135ef4(void);
extern "C" void func_ov015_02136330(void);
extern "C" void func_ov015_021619f4(void);
extern "C" void func_ov015_02161bf4(void);
extern "C" void func_ov015_02162140(void);
extern "C" s32 func_ov015_021624f0(...);
extern "C" void func_ov015_02162e84(void);
extern "C" void func_ov015_02162ed0(void);
extern "C" void func_ov015_02162f70(void);
extern "C" void func_ov054_02166720(void);
extern "C" void func_ov054_0216787c(void);
extern "C" void func_ov054_021678c8(void);
extern "C" void func_ov054_0216791c(void);
extern "C" void func_ov054_02167b3c(void);
extern "C" void func_ov054_02167bb4(void);
extern "C" void func_ov054_02167cbc(void);
extern "C" void func_ov054_021683e4(void);
extern "C" void func_ov054_02168874(void);
extern "C" void func_ov054_021689e8(void);
extern "C" void func_ov054_02168b30(void);
extern "C" void func_ov054_02168cc4(void);

extern "C" asm void func_ov054_02168d70(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mvn r1, #0
    mov r5, r0
    bl func_ov054_02168cc4
    mov r4, #0
    add r7, r5, #0xd0
    mov r6, #0x218
    b @L_02168da0
@L_02168d90:
    mla r1, r4, r6, r7
    mov r0, r5
    bl func_ov054_02167b3c
    add r4, r4, #1
@L_02168da0:
    cmp r4, #3
    blt @L_02168d90
    mov r4, #0
    ldr r6, =data_020c46d4
    b @L_02168dd0
@L_02168db4:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0xb0]
    cmp r1, #0
    beq @L_02168dcc
    ldr r0, [r6]
    bl func_02092270
@L_02168dcc:
    add r4, r4, #1
@L_02168dd0:
    cmp r4, #8
    blt @L_02168db4
    mov r4, #0
    ldr r6, =data_020c46d4
    b @L_02168e00
@L_02168de4:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x64]
    cmp r1, #0
    beq @L_02168dfc
    ldr r0, [r6]
    bl func_02097b3c
@L_02168dfc:
    add r4, r4, #1
@L_02168e00:
    cmp r4, #0x13
    blt @L_02168de4
    add r0, r5, #0x18
    mvn r1, #0
    bl func_ov015_02136330
    add r0, r5, #0x18
    bl func_ov015_02135ef4
    ldr r2, =data_020c46d4
    add r0, r5, #0x1000
    ldr r1, [r0, #0xa08]
    ldr r0, [r2]
    bl func_02097b3c
    add r0, r5, #0x1000
    mov r1, #0
    str r1, [r0, #0xa08]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov054_02168e44(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl func_ov015_02162e84
    ldr r4, =data_020c46b8
    mov r5, #4
    ldrb r1, [r6, #0x11]
    ldr r0, [r4]
    mov r2, r5
    bl func_ov015_02161bf4
    mov r0, r6
    bl func_ov015_02162ed0
    ldrb r1, [r6, #0x11]
    ldr r0, [r4]
    mov r2, r5
    bl func_ov015_02161bf4
    mov r0, r6
    bl func_ov015_02162e84
    ldr r0, [r4]
    ldrb r1, [r6, #0x11]
    mov r2, r5
    bl func_ov015_02161bf4
    mov r0, r6
    bl func_ov015_02162ed0
    ldr r0, [r4]
    ldrb r1, [r6, #0x11]
    mov r2, r5
    bl func_ov015_02161bf4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov054_02168eb8(void)
{
    stmdb sp!, {r4, lr}
    add r1, r0, #0x1000
    ldr r2, [r1, #0xa00]
    cmp r2, #0
    bne @L_02168ef0
    mov r4, #0
    mov r1, r4
    mov r2, r4
    bl func_ov054_02167cbc
    ldr r0, =data_020d3d20
    ldr r1, =0x1c3
    mov r2, r4
    bl func_0209b7b0
    b @L_02168f10
@L_02168ef0:
    ldr r2, [r1, #0xa04]
    cmp r2, #0
    movne r0, #0
    strne r0, [r1, #0xa04]
    bne @L_02168f10
    mov r2, #0
    str r2, [r1, #0xa00]
    bl func_ov054_02166720
@L_02168f10:
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov054_02168f2c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl func_ov054_021683e4
    mov r4, r0
    ldr r5, [r4]
    mov r0, r6
    bl func_ov054_0216791c
    cmp r5, r0
    bge @L_0216908c
    add r0, r6, #0x1000
    ldr r1, [r0, #0xa00]
    cmp r1, #0
    bne @L_02168ff0
    mov r0, r6
    mov r1, r5
    bl func_ov054_02167bb4
    mov r1, r0
    mov r0, r6
    bl func_ov054_02169230
    cmp r0, #0
    bne @L_02168f8c
    mov r0, r6
    bl func_ov054_021690a4
    ldmia sp!, {r4, r5, r6, pc}
@L_02168f8c:
    ldr r2, [r4]
    ldr r1, [r6, #0x728]
    add r0, r6, #0x1000
    add r1, r2, r1, lsl #4
    strb r1, [r0, #0x9fc]
    ldr r1, [r4]
    mov r0, r6
    bl func_ov054_02167bb4
    add r4, r6, #0x1000
    ldrb r2, [r4, #0x9fc]
    mov r1, #0x78
    mov r6, #1
    mov r3, r2, lsr #0x1f
    mov r5, r2, lsr #3
    rsb r2, r3, r2, lsl #29
    smulbb r5, r5, r1
    add r1, r3, r2, ror #29
    mov r1, r1, lsl #4
    add r2, r5, #8
    add r1, r1, #0x20
    str r0, [r4, #0xa00]
    str r6, [r4, #0xa28]
    str r2, [r4, #0xa30]
    str r1, [r4, #0xa34]
    b @L_0216907c
@L_02168ff0:
    ldr r1, [r0, #0xa04]
    cmp r1, #0
    bne @L_0216907c
    ldr r1, [r6, #0x728]
    ldrb r2, [r0, #0x9fc]
    add r0, r5, r1, lsl #4
    cmp r2, r0
    bne @L_02169020
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, pc}
@L_02169020:
    mov r0, r6
    mov r1, r5
    bl func_ov054_02167bb4
    add r1, r6, #0x1000
    ldr r2, [r1, #0xa00]
    str r0, [r1, #0xa04]
    ldr r4, =data_020e88a0
    ldrh r2, [r2]
    mov r0, r4
    mov r1, #0
    bl _ZN17UnkClass_020621b413func_0206ea30Eit
    add r0, r6, #0x1000
    ldr r1, [r0, #0xa04]
    mov r0, r4
    ldrh r2, [r1]
    mov r1, #1
    bl _ZN17UnkClass_020621b413func_0206ea30Eit
    mov r1, #0x6d
    mov r0, r6
    mov r2, r1
    bl func_ov054_02167cbc
    mov r0, r6
    bl func_ov054_021678c8
@L_0216907c:
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, pc}
@L_0216908c:
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov054_021690a4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    mov r6, r0
    add r1, r6, #0x1000
    mov r5, #1
    str r5, [r1, #0xa0c]
    bl func_ov054_02168b30
    mov r0, #8
    str r0, [r6, #0x10]
    mov r4, #2
    str r5, [sp]
    add r0, r6, #0x1a00
    ldr r7, =data_020c46d4
    ldrsh r1, [r0, #0x22]
    ldr r0, [r7]
    mov r2, r5
    mov r3, r4
    bl func_0209386c
    str r5, [sp]
    add r0, r6, #0x1a00
    ldrsh r1, [r0, #0x22]
    ldr r0, [r7]
    mov r2, r4
    mov r3, r4
    bl func_0209386c
    mov r0, r6
    bl func_ov054_0216787c
    mov r0, r6
    mov r4, #0
    mov r1, r4
    bl func_ov054_0216929c
    ldr r0, [r7]
    add r1, r6, #0x1a00
    ldrsh r1, [r1, #0x22]
    rsb r2, r5, #0x8000
    bl func_02093bb0
    mov r0, #0xa2
    str r0, [sp]
    mov r0, #0x100
    str r0, [sp, #4]
    mov r0, #0x1e
    str r0, [sp, #8]
    mov r0, #0x258
    str r0, [sp, #0xc]
    ldr r0, =data_020c46c4
    mov r1, r4
    ldr r0, [r0]
    mov r3, r4
    mov r2, #0x1d
    bl func_ov015_02162f70
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov054_0216918c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    add r0, r5, #0x1a00
    mov r1, #7
    mov r4, #1
    mov r7, #2
    ldr r6, =data_020c46d4
    str r1, [r5, #0x10]
    ldrsh r1, [r0, #0x22]
    ldr r0, [r6]
    mov r2, r4
    mov r3, r7
    bl func_02093928
    add r0, r5, #0x1a00
    ldrsh r1, [r0, #0x22]
    ldr r0, [r6]
    mov r2, r7
    mov r3, r7
    bl func_02093928
    add r1, r5, #0x1a00
    ldr r0, [r6]
    ldrsh r1, [r1, #0x22]
    mov r3, r7
    mov r2, #3
    bl func_02093928
    ldr r0, =data_020c46c4
    mov r1, #0
    ldr r0, [r0]
    bl func_ov015_02162140
    mov r0, r5
    mov r1, r4
    bl func_ov054_02168874
    mov r0, r5
    mov r1, r4
    bl func_ov054_021689e8
    mov r0, r5
    mov r1, r4
    bl func_ov054_0216929c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov054_02169230(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    ldrh r0, [r1]
    mov r4, #0
    mov r1, r4
    bl func_ov015_02130b14
    mov r5, r0
    add r0, sp, #0
    mov r1, r4
    mov r2, #0x18
    bl MI_CpuFill8
    mov r4, #4
@L_02169260:
    cmp r5, #0
    beq @L_02169290
    mov r0, r5
    mov r1, r4
    bl func_020808c4
    cmp r0, #4
    addgt sp, sp, #0x18
    movgt r0, #1
    ldmgtia sp!, {r3, r4, r5, pc}
    add r4, r4, #1
    cmp r4, #6
    blt @L_02169260
@L_02169290:
    mov r0, #0
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov054_0216929c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r9, =0x7fff
    cmp r1, #0
    mov r5, r0
    ldreq r9, =0x3def
    mov r7, #0
    ldr r4, =data_020c46d4
    b @L_021692d4
@L_021692bc:
    add r1, r5, r7, lsl #2
    ldr r0, [r4]
    ldr r1, [r1, #0xb0]
    mov r2, r9
    bl func_02093bb0
    add r7, r7, #1
@L_021692d4:
    cmp r7, #6
    blt @L_021692bc
    mov r8, #0
    add r6, r5, #0xd0
    mov r11, r8
    ldr r5, =data_020c46d4
    mov r4, #0x218
    b @L_0216932c
@L_021692f4:
    mla r10, r8, r4, r6
    mov r7, r11
    b @L_02169320
@L_02169300:
    add r0, r10, r7, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_0216931c
    ldr r0, [r5]
    mov r2, r9
    bl func_02093bb0
@L_0216931c:
    add r7, r7, #1
@L_02169320:
    cmp r7, #0x64
    blt @L_02169300
    add r8, r8, #1
@L_0216932c:
    cmp r8, #3
    blt @L_021692f4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov054_02169344(void)
{
    func_ov015_021624f0(*(s32 *)(data_020c46c4));
}

extern "C" asm void func_ov054_0216935c(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    mov r1, #3
    str r1, [sp]
    mov r2, #0
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r5, #4
    str r5, [sp, #0xc]
    mov r6, r0
    str r2, [sp, #0x10]
    ldr r4, =data_020c46b8
    ldrb r1, [r6, #0x11]
    ldrh r3, [r6, #0x34]
    ldr r0, [r4]
    bl func_ov015_021619f4
    ldrb r1, [r6, #0x11]
    ldr r0, [r4]
    mov r2, r5
    bl func_ov015_02161bf4
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" s32 func_ov054_021693b8(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov054_021693cc(void)
{
}
