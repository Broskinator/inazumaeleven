#include "ov084/Unk_ov084_0216ffa0.hpp"

extern "C" void func_ov084_0216ffa0(void);
extern "C" void func_ov084_021701ec(u8 *arg0);
extern "C" s32 func_ov084_0217020c(...);
extern "C" void func_ov084_02170244(void);
extern "C" void func_ov084_021709a4(void);
extern "C" void func_ov084_02170a8c(void);
extern "C" void func_ov084_02170b74(void);
extern "C" void func_ov084_02170c10(void);
extern "C" void func_ov084_02170c8c(void);
extern "C" void func_ov084_02170d34(s32 arg0);
extern "C" s32 func_ov084_02170d54(s32 arg0);
extern "C" void func_ov084_02170d68(void);

extern "C" char data_020c4850[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov084_02170d6c[];
extern "C" char data_ov084_02170ee8[];
extern "C" char data_ov084_02170ef4[];
extern "C" char data_ov084_02170f00[];
extern "C" char data_ov084_02170f0c[];
extern "C" char data_ov084_02170f18[];
extern "C" char data_ov084_02170f24[];
extern "C" char data_ov084_02170f30[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClear16(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN17UnkClass_020621b413func_0206a964Ei(void);
extern "C" void _ZN17UnkClass_020621b413func_0206b3dcEi(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" void func_020036e8(void);
extern "C" void func_020037c8(void);
extern "C" void func_02003b48(void);
extern "C" void func_ov001_02122c84(void);
extern "C" void func_ov001_02122d40(void);
extern "C" void func_ov001_02122ef8(void);
extern "C" void func_ov001_02125ef8(void);
extern "C" void func_ov001_0212602c(void);
extern "C" void func_ov001_021260f0(void);
extern "C" void func_ov001_02126128(void);
extern "C" s32 func_ov001_02126240(...);
extern "C" void func_ov001_021263a0(void);
extern "C" void func_ov001_021263b4(void);
extern "C" void func_ov001_02126458(void);
extern "C" void func_ov001_0212816c(void);
extern "C" void func_ov015_02131808(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132a38(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_02133d50(void);
extern "C" void func_ov015_02133e24(void);
extern "C" void func_ov015_02133e50(void);
extern "C" void func_ov015_02133e8c(void);
extern "C" void func_ov015_02134118(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134300(void);
extern "C" void gGameState(void);

extern "C" asm void func_ov084_0216ffa0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r5, r0
    str r1, [r5, #0xc]
    cmp r1, #1
    mov r4, #1
    beq @L_0216ffc8
    cmp r1, #2
    beq @L_02170048
    b @L_021701b4
@L_0216ffc8:
    ldr r0, =data_ov084_02170ee8
    add r1, r5, #0x3c
    bl func_ov001_0212602c
    ldr r0, =data_ov084_02170ef4
    add r1, r5, #0xc0
    bl func_ov001_021260f0
    ldr r0, =data_ov084_02170f00
    add r1, r5, #0xcc
    bl func_ov001_021260f0
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    bne @L_02170008
    bl func_ov015_02131808
    cmp r0, #0
    beq @L_021701b4
@L_02170008:
    mov r6, #0
    mov r0, r6
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_02170028
    mov r1, r6
    add r0, r5, #0x14
    bl func_ov001_02122ef8
@L_02170028:
    mov r0, r4
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_021701b4
    mov r1, r4
    add r0, r5, #0x28
    bl func_ov001_02122ef8
    b @L_021701b4
@L_02170048:
    mov r6, #0
    ldr r0, =data_020e88a0
    mov r1, r6
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    mov r0, r6
    bl func_ov001_02126458
    mov r6, r0
    ldr r0, [r5, #0xc0]
    add r2, sp, #8
    mov r1, r6
    add r3, sp, #4
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_02170098
    str r4, [sp]
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    ldr r0, =data_ov084_02170f0c
    add r1, r5, #0x90
    bl func_ov001_02126128
@L_02170098:
    mov r0, #0
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_021700dc
    ldr r0, [r5, #0xcc]
    add r2, sp, #8
    add r3, sp, #4
    mov r1, r6
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_021700dc
    str r4, [sp]
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    ldr r0, =data_ov084_02170f18
    add r1, r5, #0xa8
    bl func_ov001_02126128
@L_021700dc:
    ldr r0, =data_020e88a0
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    mov r0, r4
    bl func_ov001_02126458
    mov r6, r0
    ldr r0, [r5, #0xc0]
    add r2, sp, #8
    mov r1, r6
    add r3, sp, #4
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_02170128
    str r4, [sp]
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    ldr r0, =data_ov084_02170f24
    add r1, r5, #0x9c
    bl func_ov001_02126128
@L_02170128:
    mov r0, r4
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_0217016c
    ldr r0, [r5, #0xcc]
    add r2, sp, #8
    add r3, sp, #4
    mov r1, r6
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_0217016c
    str r4, [sp]
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    ldr r0, =data_ov084_02170f30
    add r1, r5, #0xb4
    bl func_ov001_02126128
@L_0217016c:
    ldr r6, =data_020d2d20
    mov r8, #0
    mov r7, #0x800
    mov r0, r8
    mov r1, r6
    mov r2, r7
    bl MIi_CpuClearFast
    mov r0, r6
    mov r1, r7
    bl DC_FlushRange
    ldr r6, =data_020d2520
    mov r0, r8
    mov r1, r6
    mov r2, r7
    bl MIi_CpuClearFast
    mov r0, r6
    mov r1, r7
    bl DC_FlushRange
@L_021701b4:
    str r4, [r5, #8]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov084_021701ec(u8 *arg0)
{
    func_ov001_02126240(*(s32 *)(arg0 + 0x3C), (arg0 + 0x3C), (s32)data_ov084_02170d6c);
}

extern "C" asm s32 func_ov084_0217020c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, #0
    add r5, r7, #0x3c
    mov r4, #0xc
@L_02170220:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #0xd
    blt @L_02170220
    add r0, r7, #0x14
    mov r1, #2
    bl func_ov015_02133e8c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov084_02170244(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r0, [r4, #0x60]
    mov r2, #1
    mvn r1, #0
    ldr r7, =data_020d2d20
    ldr r5, =gGameState
    mov r8, r2
    bl func_ov001_021263a0
    mov r11, #0
    ldr r0, [r4, #0x78]
    mov r1, r11
    mov r2, #2
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r4, #0x90]
    mov r2, #3
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r4, #0x9c]
    mov r2, #4
    bl func_ov001_021263a0
    mov r6, r0
    mov r0, r11
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_021702c8
    ldr r0, [r4, #0xa8]
    mov r1, r6
    mov r2, #5
    bl func_ov001_021263a0
    mov r6, r0
@L_021702c8:
    mov r0, #1
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_021702ec
    ldr r0, [r4, #0xb4]
    mov r1, r6
    mov r2, #6
    bl func_ov001_021263a0
    mov r6, r0
@L_021702ec:
    ldr r0, [r4, #0x48]
    mov r1, r6
    mov r2, #7
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r4, #0x54]
    mov r2, #8
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r4, #0x6c]
    mov r2, #9
    bl func_ov001_021263a0
    ldr r0, =data_020c4850
    ldr r1, [r0]
    ldrb r0, [r5, #0x1a]
    ldr r1, [r1, #0x18]
    cmp r0, #0
    mov r0, r1, lsr #5
    sub r6, r0, #1
    bne @L_02170348
    bl func_ov015_02131808
    cmp r0, #0
    beq @L_021703f8
@L_02170348:
    mov r9, #0
    mov r0, r9
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_021703a0
    ldr r0, [r4, #0x14]
    cmp r0, #0
    ldrne r0, [r4, #0x18]
    cmpne r0, #0
    movne r9, #1
    cmp r9, #0
    beq @L_021703a0
    ldr r0, [r4, #0x14]
    mov r1, #0xc
    mov r2, #2
    bl func_ov015_02133d50
    ldr r0, [r4, #0x14]
    add r2, r6, #1
    mov r1, #0x30
    mov r3, #0
    bl func_ov015_02132984
    mov r6, r0
@L_021703a0:
    mov r0, r8
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_021703f8
    ldr r0, [r4, #0x28]
    mov r1, #0
    cmp r0, #0
    ldrne r0, [r4, #0x2c]
    cmpne r0, #0
    movne r1, r8
    cmp r1, #0
    beq @L_021703f8
    ldr r0, [r4, #0x28]
    mov r1, #0xc
    mov r2, #2
    bl func_ov015_02133d50
    ldr r0, [r4, #0x28]
    add r2, r6, #1
    mov r1, #0x30
    mov r3, #0
    bl func_ov015_02132984
    mov r6, r0
@L_021703f8:
    ldrb r0, [r5, #0x1a]
    cmp r0, #0
    beq @L_02170414
    ldr r0, [r4, #0x84]
    mov r1, r6
    mov r2, #0xa
    bl func_ov001_021263a0
@L_02170414:
    bl func_ov015_02132240
    ldr r1, [r4, #0x60]
    mov r0, r11
    mov r2, r11
    bl func_ov015_02132b7c
    bl G2S_GetBG1CharPtr
    mov r6, #0x20
    mov r1, r0
    mov r0, r11
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r6
    bl DC_FlushRange
    ldr r1, [r4, #0x78]
    mov r2, r6
    mov r0, r8
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r4, #0x90]
    mov r0, r8
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r4, #0x9c]
    mov r0, r8
    bl func_ov015_02132b7c
    mov r9, r0
    mov r0, r11
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_021704a4
    ldr r1, [r4, #0xa8]
    mov r0, r8
    mov r2, r9
    bl func_ov015_02132b7c
    mov r9, r0
@L_021704a4:
    mov r0, r8
    mov r6, #0xc
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_021704cc
    ldr r1, [r4, #0xb4]
    mov r0, r8
    mov r2, r9
    bl func_ov015_02132b7c
    mov r9, r0
@L_021704cc:
    ldr r1, [r4, #0x48]
    mov r0, r8
    mov r2, r9
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r4, #0x54]
    mov r0, r8
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r4, #0x6c]
    mov r0, r8
    bl func_ov015_02132b7c
    ldr r0, =data_020c4850
    mov r1, #0
    ldr r10, [r0]
    ldr r0, [r10, #0x14]
    ldr r2, [r10, #0x18]
    add r0, r10, r0
    bl func_02003b48
    ldrb r0, [r5, #0x1a]
    ldr r9, [r10, #0x18]
    cmp r0, #0
    bne @L_02170534
    bl func_ov015_02131808
    cmp r0, #0
    beq @L_021705bc
@L_02170534:
    mov r10, #0
    mov r0, r10
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_02170578
    ldr r0, [r4, #0x14]
    cmp r0, #0
    ldrne r0, [r4, #0x18]
    cmpne r0, #0
    movne r10, #1
    cmp r10, #0
    beq @L_02170578
    ldr r0, [r4, #0x18]
    mov r1, r9
    mov r2, #0x300
    bl func_02003b48
    add r9, r9, #0x300
@L_02170578:
    mov r0, r8
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_021705bc
    ldr r0, [r4, #0x28]
    mov r1, #0
    cmp r0, #0
    ldrne r0, [r4, #0x2c]
    cmpne r0, #0
    movne r1, r8
    cmp r1, #0
    beq @L_021705bc
    ldr r0, [r4, #0x2c]
    mov r1, r9
    mov r2, #0x300
    bl func_02003b48
    add r9, r9, #0x300
@L_021705bc:
    ldrb r0, [r5, #0x1a]
    cmp r0, #0
    beq @L_021705dc
    ldr r1, [r4, #0x84]
    mov r2, r9
    mov r0, #2
    bl func_ov015_02132b7c
    mov r9, r0
@L_021705dc:
    ldr r10, [r4, #0x84]
    cmp r10, #0
    beq @L_02170608
    bl G2S_GetBG2CharPtr
    add r0, r9, r0
    str r0, [r4, #0x10]
    ldr r0, [r10, #0xc]
    ldr r2, [r10, #0x10]
    mov r1, r9
    add r0, r10, r0
    bl func_02003b48
@L_02170608:
    ldr r1, [r4, #0x60]
    cmp r1, #0
    beq @L_02170628
    ldr r0, [r1, #0xc]
    ldr r2, [r1, #0x10]
    add r0, r1, r0
    mov r1, #0
    bl func_02003608
@L_02170628:
    ldrb r0, [r5, #0x7d]
    ldr r10, [r4, #0x78]
    cmp r0, #0
    movne r1, #4
    bne @L_021706b0
    ldrb r0, [r5, #0x7e]
    cmp r0, #2
    movls r0, #1
    bls @L_021706ac
    cmp r0, #3
    blo @L_02170660
    cmp r0, #5
    movls r0, #2
    bls @L_021706ac
@L_02170660:
    ldrb r0, [r5, #0x7e]
    cmp r0, #6
    blo @L_02170678
    cmp r0, #8
    movls r0, #3
    bls @L_021706ac
@L_02170678:
    ldrb r0, [r5, #0x7e]
    cmp r0, #9
    blo @L_02170690
    cmp r0, #0xb
    movls r0, #4
    bls @L_021706ac
@L_02170690:
    ldrb r0, [r5, #0x7e]
    cmp r0, #0xc
    blo @L_021706a8
    cmp r0, #0xe
    movls r0, #5
    bls @L_021706ac
@L_021706a8:
    mvn r0, #0
@L_021706ac:
    sub r1, r0, #1
@L_021706b0:
    cmp r10, #0
    beq @L_021706e4
    mov r2, #0x12
    mul r0, r1, r2
    ldr r1, [r10, #0xc]
    mov r3, #4
    add r1, r10, r1
    add r0, r1, r0, lsl #3
    str r0, [sp]
    mov r0, #7
    mov r1, #0
    str r7, [sp, #4]
    bl func_ov015_02132a38
@L_021706e4:
    ldr r2, [r4, #0x90]
    cmp r2, #0
    beq @L_02170714
    ldr r0, [r2, #0xc]
    mov r1, #4
    add r0, r2, r0
    str r0, [sp]
    mov r2, r1
    mov r3, r1
    mov r0, #5
    str r7, [sp, #4]
    bl func_ov015_02132a38
@L_02170714:
    ldr r2, [r4, #0x9c]
    cmp r2, #0
    beq @L_02170744
    ldr r0, [r2, #0xc]
    mov r1, #4
    add r0, r2, r0
    str r0, [sp]
    mov r2, r1
    mov r3, r1
    mov r0, #0x17
    str r7, [sp, #4]
    bl func_ov015_02132a38
@L_02170744:
    mov r0, r11
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_02170784
    ldr r1, [r4, #0xa8]
    cmp r1, #0
    beq @L_02170784
    ldr r0, [r1, #0xc]
    mov r2, #0xf
    add r0, r1, r0
    str r0, [sp]
    mov r0, r11
    mov r1, #9
    mov r3, #2
    str r7, [sp, #4]
    bl func_ov015_02132a38
@L_02170784:
    mov r0, #1
    bl func_ov001_021263b4
    cmp r0, #0
    bne @L_021707c4
    ldr r1, [r4, #0xb4]
    cmp r1, #0
    beq @L_021707c4
    ldr r0, [r1, #0xc]
    mov r2, #0xf
    add r0, r1, r0
    str r0, [sp]
    mov r0, #0x11
    mov r1, #9
    mov r3, #2
    str r7, [sp, #4]
    bl func_ov015_02132a38
@L_021707c4:
    ldr r9, =data_020e88a0
    mov r1, #0
    mov r0, r9
    bl _ZN17UnkClass_020621b413func_0206b3dcEi
    mov r3, r0
    mov r0, r4
    mov r2, r6
    mov r1, #2
    bl func_ov084_021709a4
    mov r0, r9
    mov r1, #1
    bl _ZN17UnkClass_020621b413func_0206b3dcEi
    mov r3, r0
    mov r2, r6
    mov r0, r4
    mov r1, #0x13
    bl func_ov084_021709a4
    bl func_ov001_02122d40
    cmp r0, #0
    beq @L_02170880
    mov r0, r9
    add r1, sp, #8
    ldr r9, =data_020d2d20
    bl func_ov001_0212816c
    mov r6, #0x14
    ldr r3, [sp, #8]
    mov r0, r4
    mov r2, r6
    mov r1, #5
    bl func_ov084_02170a8c
    ldr r3, [sp, #0xc]
    mov r0, r4
    mov r1, #0x17
    mov r2, r6
    bl func_ov084_02170a8c
    ldr r1, [r4, #0x6c]
    cmp r1, #0
    beq @L_02170880
    ldr r0, [r1, #0xc]
    mov r2, #6
    add r0, r1, r0
    str r0, [sp]
    mov r1, r6
    mov r0, #0xd
    mov r3, #4
    str r9, [sp, #4]
    bl func_ov015_02132a38
@L_02170880:
    mov r6, #0x800
    mov r0, r7
    mov r1, r6
    bl DC_FlushRange
    mov r0, r7
    mov r2, r6
    mov r1, #0
    bl func_020036e8
    ldrb r0, [r5, #0x1a]
    cmp r0, #0
    bne @L_021708b8
    bl func_ov015_02131808
    cmp r0, #0
    beq @L_02170960
@L_021708b8:
    mov r5, #0
    mov r0, r5
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_0217090c
    ldr r0, [r4, #0x14]
    cmp r0, #0
    ldrne r0, [r4, #0x18]
    cmpne r0, #0
    movne r5, #1
    cmp r5, #0
    beq @L_0217090c
    ldr r0, [r4, #0x14]
    ldr r5, =data_020d2520
    str r0, [sp]
    mov r0, #1
    mov r1, #9
    mov r2, #0xc
    mov r3, #2
    str r5, [sp, #4]
    bl func_ov015_02132a38
@L_0217090c:
    mov r0, r8
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_02170960
    ldr r0, [r4, #0x28]
    mov r1, #0
    cmp r0, #0
    ldrne r0, [r4, #0x2c]
    cmpne r0, #0
    movne r1, r8
    cmp r1, #0
    beq @L_02170960
    ldr r0, [r4, #0x28]
    ldr r4, =data_020d2520
    str r0, [sp]
    mov r0, #0x13
    mov r1, #9
    mov r2, #0xc
    mov r3, #2
    str r4, [sp, #4]
    bl func_ov015_02132a38
@L_02170960:
    ldr r5, =data_020d2520
    mov r4, #0x800
    mov r0, r5
    mov r1, r4
    bl DC_FlushRange
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl func_020037c8
    mov r0, #1
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov084_021709a4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, [r0, #0x48]
    ldr r6, =data_020d2d20
    cmp r4, #0
    mov r10, r1
    mov r9, r2
    mov r8, r3
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0xc]
    add r0, r6, r9, lsl #6
    add r7, r4, r1
    add r4, r0, r10, lsl #1
    mov r5, #6
    mov r11, #0
    b @L_02170a00
@L_021709e8:
    mov r0, r11
    mov r1, r4
    mov r2, #0x16
    bl MIi_CpuClear16
    sub r5, r5, #1
    add r4, r4, #0x40
@L_02170a00:
    cmp r5, #0
    bgt @L_021709e8
    cmp r8, #0x63
    movgt r8, #0x63
    add r10, r10, #6
    cmp r8, #0xa
    ldr r5, =0x66666667
    sublt r10, r10, #3
    mov r11, #0xa
    mov r4, #0x1e
@L_02170a28:
    smull r1, r2, r5, r8
    mov r0, r8, lsr #0x1f
    add r2, r0, r2, asr #2
    smull r0, r1, r11, r2
    sub r2, r8, r0
    mul r0, r2, r4
    add r0, r7, r0, lsl #1
    str r0, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, #5
    mov r3, #6
    str r6, [sp, #4]
    bl func_ov015_02132a38
    mov r1, r8
    smull r0, r8, r5, r1
    mov r0, r1, lsr #0x1f
    add r8, r0, r8, asr #2
    cmp r8, #0
    sub r10, r10, #6
    bgt @L_02170a28
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov084_02170a8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, [r0, #0x54]
    ldr r6, =data_020d2d20
    cmp r4, #0
    mov r10, r1
    mov r9, r2
    mov r8, r3
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0xc]
    add r0, r6, r9, lsl #6
    add r7, r4, r1
    add r4, r0, r10, lsl #1
    mov r5, #3
    mov r11, #0
    b @L_02170ae8
@L_02170ad0:
    mov r0, r11
    mov r1, r4
    mov r2, #8
    bl MIi_CpuClear16
    sub r5, r5, #1
    add r4, r4, #0x40
@L_02170ae8:
    cmp r5, #0
    bgt @L_02170ad0
    cmp r8, #0x63
    movgt r8, #0x63
    add r10, r10, #2
    cmp r8, #0xa
    ldr r5, =0x66666667
    sublt r10, r10, #1
    mov r11, #0xa
    mov r4, #6
@L_02170b10:
    smull r1, r2, r5, r8
    mov r0, r8, lsr #0x1f
    add r2, r0, r2, asr #2
    smull r0, r1, r11, r2
    sub r2, r8, r0
    mul r0, r2, r4
    add r0, r7, r0, lsl #1
    str r0, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, #2
    mov r3, #3
    str r6, [sp, #4]
    bl func_ov015_02132a38
    mov r1, r8
    smull r0, r8, r5, r1
    mov r0, r1, lsr #0x1f
    add r8, r0, r8, asr #2
    cmp r8, #0
    sub r10, r10, #2
    bgt @L_02170b10
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov084_02170b74(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    cmp r0, #1
    beq @L_02170b94
    cmp r0, #3
    beq @L_02170bf4
    ldmia sp!, {r4, pc}
@L_02170b94:
    add r0, r4, #0x3c
    mov r1, #0xd
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02170bc0
    cmp r0, #2
    beq @L_02170bd0
    ldmia sp!, {r4, pc}
@L_02170bc0:
    mov r0, r4
    mov r1, #2
    bl func_ov084_0216ffa0
    ldmia sp!, {r4, pc}
@L_02170bd0:
    add r0, r4, #0xc0
    bl func_ov015_02134208
    add r0, r4, #0xcc
    bl func_ov015_02134208
    mov r0, r4
    bl func_ov084_021701ec
    mov r0, #2
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170bf4:
    ldr r2, [r4, #0x10]
    ldr r3, =data_020d2520
    mov r0, #0x1e
    mov r1, #0
    bl func_ov001_02125ef8
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov084_02170c10(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_02170c30
    cmp r1, #3
    beq @L_02170c60
    ldmia sp!, {r3, r4, r5, pc}
@L_02170c30:
    bl func_ov084_02170244
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, r4
    bl func_ov084_0217020c
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
@L_02170c60:
    ldr r5, =data_020d2520
    mov r4, #0x800
    mov r0, r5
    mov r1, r4
    bl DC_FlushRange
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl func_020037c8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov084_02170c8c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, #0
    add r0, r4, #0x3c
    mov r2, #0x9c
    str r1, [r4, #8]
    str r1, [r4, #0x10]
    bl MI_CpuFill8
    add r0, r4, #0x14
    mov r1, #2
    bl func_ov015_02133e24
    bl func_ov001_02122c84
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    bne @L_02170ce0
    bl func_ov015_02131808
    cmp r0, #0
    beq @L_02170d20
@L_02170ce0:
    mov r0, #0
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_02170d00
    add r0, r4, #0x14
    mov r1, #0xc
    mov r2, #2
    bl func_ov015_02133e50
@L_02170d00:
    mov r0, #1
    bl func_ov001_021263b4
    cmp r0, #0
    beq @L_02170d20
    add r0, r4, #0x28
    mov r1, #0xc
    mov r2, #2
    bl func_ov015_02133e50
@L_02170d20:
    mov r0, r4
    mov r1, #1
    bl func_ov084_0216ffa0
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov084_02170d34(s32 arg0)
{
    func_ov015_02134198((arg0 + 0x3C), 0xD);
    func_ov084_0217020c(arg0);
}

extern "C" s32 func_ov084_02170d54(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov084_02170d68(void)
{
}
