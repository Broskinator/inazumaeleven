#include "ov000/Unk_ov000_02116308.hpp"

extern "C" void func_ov000_02116308(void);
extern "C" void func_ov000_02116348(void);
extern "C" void func_ov000_02116530(void);
extern "C" void func_ov000_021168bc(void);
extern "C" void func_ov000_02116938(void);
extern "C" void func_ov000_02116958(void);
extern "C" void func_ov000_021169e0(void);
extern "C" void func_ov000_02116a68(void);
extern "C" void func_ov000_02116b84(void);
extern "C" void func_ov000_02116bd8(void);
extern "C" void func_ov000_02116bf0(void);
extern "C" void func_ov000_02116c84(void);
extern "C" s32 func_ov000_02116d08(s32 arg0);
extern "C" void func_ov000_02116d18(void);
extern "C" void func_ov000_02116e58(void);
extern "C" void func_ov000_02116e8c(void);
extern "C" void func_ov000_02116f2c(void);
extern "C" void func_ov000_02116fcc(void);

extern "C" char data_020c47b4[];
extern "C" char data_020cac9c[];
extern "C" char data_020cacc4[];
extern "C" char data_020cacc8[];
extern "C" char data_020cafe0[];
extern "C" char data_020cb0d8[];
extern "C" char data_020e88a0[];
extern "C" char data_ov000_0211769c[];
extern "C" char data_ov000_021176d4[];
extern "C" char data_ov000_02118684[];
extern "C" void MI_CpuFill8(void);
extern "C" void STD_CompareString(void);
extern "C" void STD_CopyString(void);
extern "C" void STD_GetStringLength(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a534Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a5c0Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207aedcEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0207af84Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207e5fcEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0207efd8Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207f07cEv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_01ffca10(void);
extern "C" void func_0200919c(void);
extern "C" void func_02016e10(void);
extern "C" void func_020816b0(void);
extern "C" void func_020816dc(void);
extern "C" void func_0208170c(void);
extern "C" void func_020817bc(void);
extern "C" void func_02084aec(void);
extern "C" void func_ov015_021309a4(void);
extern "C" void func_ov015_02133efc(void);
extern "C" void func_ov015_02134208(void);
extern "C" void gGameState(void);

extern "C" asm void func_ov000_02116308(void)
{
    cmp r1, #0xe7
    blt @L_0211633c
    cmp r1, #0xf0
    bgt @L_0211633c
    ldr r0, =data_020cafe0
    sub r1, r1, #0xe7
    ldrh r2, [r0, #0xf6]
    mov r0, #1
    mov r1, r0, lsl r1
    mov r2, r2, lsl #0x13
    tst r1, r2, lsr #22
    movne r0, #2
    bx lr
@L_0211633c:
    mov r0, #0
    bx lr
}

extern "C" asm void func_ov000_02116348(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x118
    str r2, [sp]
    mov r2, #0
    mov r7, r1
    ldr r0, =data_ov000_02118684
    add r1, sp, #0x10c
    str r2, [sp, #8]
    bl func_ov015_02133efc
    ldr r6, [sp, #0x10c]
    ldrh r0, [r6]
    cmp r0, #0
    beq @L_0211650c
    ldr r1, =0xfff
    ldr r5, =data_ov000_021176d4
    and r1, r7, r1
    add r4, sp, #0x44
    str r1, [sp, #4]
    mov r3, #0x1c
@L_02116394:
    ldrb r1, [r5, #1]
    ldrb r2, [r5], #2
    subs r3, r3, #1
    strb r1, [r4, #1]
    strb r2, [r4], #2
    bne @L_02116394
    ldr r5, =data_ov000_0211769c
    add r4, sp, #0xc
    mov r3, #0x1c
@L_021163b8:
    ldrb r1, [r5, #1]
    ldrb r2, [r5], #2
    subs r3, r3, #1
    strb r1, [r4, #1]
    strb r2, [r4], #2
    bne @L_021163b8
    add r8, sp, #0x7c
@L_021163d4:
    ldr r1, [sp, #4]
    cmp r0, r1
    bne @L_02116500
    add r0, sp, #0xec
    mov r1, #0
    mov r2, #0x20
    bl MI_CpuFill8
    add r4, sp, #0x44
    add r3, sp, #0x7c
    mov r2, #0x1c
@L_021163fc:
    ldrb r0, [r4, #1]
    ldrb r1, [r4], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021163fc
    add r4, sp, #0xc
    add r3, sp, #0xb4
    mov r2, #0x1c
@L_02116420:
    ldrb r0, [r4, #1]
    ldrb r1, [r4], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02116420
    add r0, r6, #2
    bl STD_GetStringLength
    mov r7, r0
    cmp r7, #0
    mov r10, #0
    ble @L_021164e4
    mov r11, #1
    add r4, sp, #0xec
    add r5, sp, #0xb4
@L_0211645c:
    add r9, r6, r10
    ldrsb r1, [r9, #2]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02116478
    cmp r0, #0x9f
    bls @L_02116488
@L_02116478:
    cmp r0, #0xe0
    blo @L_02116490
    cmp r0, #0xfc
    bhi @L_02116490
@L_02116488:
    mov r0, r11
    b @L_02116494
@L_02116490:
    mov r0, #0
@L_02116494:
    cmp r0, #0
    bne @L_021164c0
    add r0, sp, #0x7c
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r8
    ldrnesb r0, [r5, r0]
    strneb r0, [r4, r10]
    ldreqsb r0, [r9, #2]
    streqb r0, [r4, r10]
    b @L_021164d8
@L_021164c0:
    strb r1, [r4, r10]
    add r0, r6, r10
    ldrsb r0, [r0, #3]
    add r1, r4, r10
    add r10, r10, #1
    strb r0, [r1, #1]
@L_021164d8:
    add r10, r10, #1
    cmp r10, r7
    blt @L_0211645c
@L_021164e4:
    ldr r0, [sp]
    add r1, sp, #0xec
    bl STD_CompareString
    cmp r0, #0
    moveq r0, #1
    streq r0, [sp, #8]
    beq @L_0211650c
@L_02116500:
    ldrh r0, [r6, #0x16]!
    cmp r0, #0
    bne @L_021163d4
@L_0211650c:
    add r0, sp, #0x10c
    bl func_ov015_02134208
    ldr r0, [sp, #8]
    add sp, sp, #0x118
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02116530(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1b4
    mov r9, r1
    mov r1, #0
    str r1, [sp, #8]
    mov r10, r0
    mov r8, r2
    mov r11, r3
    mov r4, #0xc
    bl _ZN17UnkClass_020621b413func_0207e5fcEv
    ldr r0, [sp, #8]
    cmp r9, #0
    str r0, [sp]
    cmpne r8, #0
    addle sp, sp, #0x1b4
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10, #0xbd4]
    cmp r0, #0
    bne @L_02116590
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r0, #1
    str r0, [sp, #8]
@L_02116590:
    mul r2, r8, r4
    mov r7, #0
    mov r0, r9
    mov r1, r7
    bl MI_CpuFill8
    add r0, r10, #0x11800
    ldrh r3, [r0, #0x42]
    ldr r0, =data_020c47b4
    mov r2, r7
    mul r1, r3, r4
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    movs r5, r0
    addeq sp, sp, #0x1b4
    moveq r0, r7
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x11800
    ldrh r3, [r0, #0x42]
    mov r0, r7
    mov r1, r5
    mul r2, r3, r4
    bl func_0200919c
    ldr r4, [r10, #0xbd4]
    add r6, r10, #0x11800
    b @L_02116640
@L_021165f4:
    ldrh r2, [r4, #0x2a]
    cmp r2, #0
    ldrneb r0, [r4, #0x2c]
    cmpne r0, #0xff
    beq @L_02116638
    ldrb r0, [r4, #0x30]
    cmp r11, r0
    ldreqb r0, [r4, #0x2d]
    cmpeq r0, #1
    bne @L_02116638
    mov r0, r10
    mov r1, #0
    bl _ZN17UnkClass_020621b413func_0207af84Ev
    cmp r0, #0
    movne r0, #1
    strne r0, [sp]
    bne @L_0211664c
@L_02116638:
    add r7, r7, #1
    add r4, r4, #0x38
@L_02116640:
    ldrh r0, [r6, #0x42]
    cmp r7, r0
    blt @L_021165f4
@L_0211664c:
    add r0, r10, #0x184
    mov r6, #0
    str r0, [sp, #0xc]
    add r0, r10, #0x11800
    mov r7, r6
    ldr r4, [r10, #0xbd4]
    str r0, [sp, #0x10]
    b @L_02116770
@L_0211666c:
    ldrh r0, [r4, #0x2a]
    cmp r0, #0
    ldrneb r1, [r4, #0x2c]
    cmpne r1, #0xff
    beq @L_02116768
    mov r0, r10
    bl func_ov000_02116308
    cmp r0, #1
    beq @L_02116768
    ldrb r1, [r4, #0x30]
    cmp r11, r1
    bne @L_02116768
    ldr r0, =data_020e88a0
    add r2, sp, #0x74
    bl func_01ffca10
    ldrh r2, [r4, #0x2a]
    mov r0, r10
    mov r1, #0
    bl _ZN17UnkClass_020621b413func_0207aedcEv
    cmp r0, #0
    bne @L_021166d8
    ldrh r2, [r4, #0x2a]
    mov r0, r10
    mov r1, #0
    bl _ZN17UnkClass_020621b413func_0207af84Ev
    cmp r0, #0
    beq @L_021166ec
@L_021166d8:
    ldrb r0, [r4, #0x2d]
    cmp r0, #1
    moveq r0, #1
    streq r0, [sp]
    b @L_02116768
@L_021166ec:
    ldr r0, [sp]
    cmp r0, #1
    bne @L_02116704
    ldrb r0, [r4, #0x2d]
    cmp r0, #1
    beq @L_02116768
@L_02116704:
    ldrh r1, [r4, #0x2a]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    ldr r0, [sp, #0xc]
    add r0, r0, #0x400
    bl func_0208170c
    cmp r0, #0
    bne @L_02116768
    mov r0, #0xc
    mul r3, r6, r0
    ldrh r2, [r4, #0x2a]
    add r1, r5, r3
    ldr r0, =data_020e88a0
    strh r2, [r1, #4]
    ldr r2, [r4, #0x34]
    str r2, [r5, r3]
    ldrb r3, [r4, #0x2e]
    add r2, sp, #0x14
    strb r3, [r1, #6]
    ldrb r3, [r4, #0x2c]
    strb r3, [r1, #8]
    ldrh r1, [r4, #0x2a]
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    add r6, r6, #1
@L_02116768:
    add r7, r7, #1
    add r4, r4, #0x38
@L_02116770:
    ldr r0, [sp, #0x10]
    ldrh r0, [r0, #0x42]
    cmp r7, r0
    blt @L_0211666c
    mov r0, #1
    cmp r6, r8
    mov r4, #0xc
    strle r0, [sp, #4]
    movle r8, r6
    mov r7, #0
    b @L_02116820
@L_0211679c:
    cmp r6, #0
    beq @L_02116828
    mov r0, r6
    bl func_ov015_021309a4
    mul r1, r0, r4
    add r2, r0, #1
    ldr r3, [r5, r1]
    add r1, r5, r1
    mul r0, r7, r4
    str r3, [r9, r0]
    add r0, r9, r0
    ldrh r11, [r1, #4]
    sub r3, r6, r2
    cmp r3, #0
    strh r11, [r0, #4]
    ldrb r11, [r1, #6]
    strb r11, [r0, #6]
    ldrb r11, [r1, #7]
    strb r11, [r0, #7]
    ldrb r11, [r1, #8]
    strb r11, [r0, #8]
    ldrb r12, [r1, #9]
    ldrb r11, [r1, #0xa]
    strb r12, [r0, #9]
    strb r11, [r0, #0xa]
    ldrb r11, [r1, #0xb]
    strb r11, [r0, #0xb]
    ble @L_02116818
    mla r0, r2, r4, r5
    mul r2, r3, r4
    bl func_02084aec
@L_02116818:
    sub r6, r6, #1
    add r7, r7, #1
@L_02116820:
    cmp r7, r8
    blt @L_0211679c
@L_02116828:
    ldr r0, [sp, #4]
    mov r4, #0xc
    cmp r0, #0
    bne @L_02116870
    mov r7, #0
    add r6, r10, #0x184
    b @L_02116864
@L_02116844:
    mla r0, r7, r4, r9
    ldrh r1, [r0, #4]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    add r0, r6, #0x400
    bl func_020816b0
    add r7, r7, #1
@L_02116864:
    cmp r7, r8
    blt @L_02116844
    b @L_02116878
@L_02116870:
    mov r0, r10
    bl func_ov000_021169e0
@L_02116878:
    ldr r0, [sp, #8]
    mov r4, #1
    cmp r0, #0
    beq @L_02116890
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116890:
    ldr r0, =data_020c47b4
    mov r1, r5
    bl _ZN8GameHeap4FreeEPv
    ldr r1, =gGameState
    mov r0, r8
    strb r4, [r1, #0x5e5]
    add sp, sp, #0x1b4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_021168bc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, =data_020cac9c
    mov r7, r0
    mov r8, r1
    mov r6, r2
    mov r0, r4
    mov r1, #0
    mov r2, #0x20
    mov r5, r3
    bl MI_CpuFill8
    cmp r8, #0
    beq @L_021168f8
    mov r0, r4
    mov r1, r8
    bl STD_CopyString
@L_021168f8:
    ldr lr, [sp, #0x18]
    ldr r12, [sp, #0x1c]
    ldr r3, [sp, #0x20]
    ldr r2, [sp, #0x24]
    mov r1, #0
    mov r0, r7
    strb r6, [r4, #0x20]
    strb r5, [r4, #0x22]
    strb lr, [r4, #0x21]
    strb r12, [r4, #0x25]
    strb r3, [r4, #0x23]
    strb r2, [r4, #0x26]
    strb r1, [r4, #0x24]
    bl func_ov000_02116958
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov000_02116938(void)
{
    ldr r3, =data_020cacc4
    mov r2, #0
    ldr r12, =func_ov000_02116958
    strb r1, [r3]
    strb r2, [r3, #1]
    bx r12
}

extern "C" asm void func_ov000_02116958(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    ldr r1, [r7, #0xbd4]
    mov r6, #0
    cmp r1, #0
    bne @L_02116978
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r6, #1
@L_02116978:
    add r9, r7, #0x11800
    ldrh r0, [r9, #0x42]
    ldr r4, [r7, #0xbd4]
    mov r5, #0
    cmp r0, #0
    ble @L_021169cc
    add r8, r7, #0x184
@L_02116994:
    ldrb r0, [r4, #0x30]
    cmp r0, #1
    bne @L_021169b8
    ldrh r1, [r4, #0x2a]
    mov r0, r7
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    add r0, r8, #0x400
    bl func_020816dc
@L_021169b8:
    ldrh r0, [r9, #0x42]
    add r5, r5, #1
    add r4, r4, #0x38
    cmp r5, r0
    blt @L_02116994
@L_021169cc:
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    bl _ZN17UnkClass_020621b413func_0207f07cEv
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov000_021169e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    ldr r1, [r7, #0xbd4]
    mov r6, #0
    cmp r1, #0
    bne @L_02116a00
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r6, #1
@L_02116a00:
    add r9, r7, #0x11800
    ldrh r0, [r9, #0x42]
    ldr r4, [r7, #0xbd4]
    mov r5, #0
    cmp r0, #0
    ble @L_02116a54
    add r8, r7, #0x184
@L_02116a1c:
    ldrb r0, [r4, #0x30]
    cmp r0, #1
    beq @L_02116a40
    ldrh r1, [r4, #0x2a]
    mov r0, r7
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    add r0, r8, #0x400
    bl func_020816dc
@L_02116a40:
    ldrh r0, [r9, #0x42]
    add r5, r5, #1
    add r4, r4, #0x38
    cmp r5, r0
    blt @L_02116a1c
@L_02116a54:
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    bl _ZN17UnkClass_020621b413func_0207f07cEv
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov000_02116a68(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r2, =data_020cafe0
    mov r5, r0
    ldrh r2, [r2, #0xf6]
    mov r4, r1
    mov r3, #0
    mov r1, r2, lsl #0x1d
    movs r1, r1, lsr #0x1d
    moveq r0, r3
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r5, #0xbd4]
    cmp r1, #0
    bne @L_02116aa4
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r3, #1
@L_02116aa4:
    cmp r4, #0
    beq @L_02116b64
    mov r12, #0
    add r8, r5, #0x11800
    ldr r2, =data_020cb0d8
    mov r1, r12
    mov r7, #0xc
    ldr r9, =data_020cafe0
    b @L_02116b30
@L_02116ac8:
    mov r0, r12, lsl #1
    mov r6, r1
    ldrh r0, [r2, r0]
    ldr lr, [r5, #0xbd4]
    b @L_02116ae4
@L_02116adc:
    add lr, lr, #0x38
    add r6, r6, #1
@L_02116ae4:
    ldrh r10, [r8, #0x42]
    cmp r6, r10
    bge @L_02116afc
    ldrh r10, [lr, #0x2a]
    cmp r10, r0
    bne @L_02116adc
@L_02116afc:
    mul r6, r12, r7
    ldr r10, [lr, #0x34]
    add r0, r4, r6
    str r10, [r4, r6]
    ldrh r6, [lr, #0x2a]
    add r12, r12, #1
    strh r6, [r0, #4]
    ldrb r6, [lr, #0x2e]
    strb r6, [r0, #6]
    ldrb r6, [lr, #0x31]
    strb r6, [r0, #7]
    ldrb r6, [lr, #0x2c]
    strb r6, [r0, #8]
@L_02116b30:
    ldrh r0, [r9, #0xf6]
    mov r0, r0, lsl #0x1d
    cmp r12, r0, lsr #29
    blt @L_02116ac8
    cmp r3, #0
    beq @L_02116b50
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116b50:
    ldr r0, =data_020cafe0
    ldrh r0, [r0, #0xf6]
    mov r0, r0, lsl #0x1d
    mov r0, r0, lsr #0x1d
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02116b64:
    cmp r3, #0
    beq @L_02116b74
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116b74:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov000_02116b84(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    mov lr, #0
    ldr r0, =data_020cb0d8
    b @L_02116bac
@L_02116b9c:
    mov r12, lr, lsl #1
    ldrh r3, [r1, r12]
    add lr, lr, #1
    strh r3, [r0, r12]
@L_02116bac:
    cmp lr, r2
    blt @L_02116b9c
    ldr r0, =data_020cafe0
    and r1, r2, #7
    ldrh r2, [r0, #0xf6]
    bic r2, r2, #7
    orr r1, r2, r1
    strh r1, [r0, #0xf6]
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov000_02116bd8(void)
{
    ldr r0, =data_020cafe0
    ldrh r1, [r0, #0xf6]
    bic r1, r1, #7
    strh r1, [r0, #0xf6]
    bx lr
}

extern "C" asm void func_ov000_02116bf0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    cmp r1, #0
    beq @L_02116c7c
    add r4, r0, #0x11000
    ldrb r2, [r4, #0x8dd]
    mov r3, #0
    cmp r2, #0
    ble @L_02116c74
    mov r12, #0xc
@L_02116c14:
    mul r6, r3, r12
    add r2, r0, r6
    ldr r5, [r2, #0xc34]
    add lr, r2, #0xc00
    str r5, [r1, r6]
    ldrh r5, [lr, #0x38]
    add r6, r1, r6
    add r3, r3, #1
    strh r5, [r6, #4]
    ldrb r5, [r2, #0xc3a]
    strb r5, [r6, #6]
    ldrb r5, [r2, #0xc3b]
    strb r5, [r6, #7]
    ldrb r5, [r2, #0xc3c]
    strb r5, [r6, #8]
    ldrb r5, [r2, #0xc3d]
    ldrb lr, [r2, #0xc3e]
    strb r5, [r6, #9]
    strb lr, [r6, #0xa]
    ldrb r2, [r2, #0xc3f]
    strb r2, [r6, #0xb]
    ldrb r2, [r4, #0x8dd]
    cmp r3, r2
    blt @L_02116c14
@L_02116c74:
    mov r0, r2
    ldmia sp!, {r4, r5, r6, pc}
@L_02116c7c:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov000_02116c84(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r2, #0
    mov r12, #0
    ble @L_02116cfc
    mov lr, #0xc
@L_02116ca0:
    mul r5, r12, lr
    ldr r4, [r1, r5]
    add r3, r0, r5
    str r4, [r3, #0xc34]
    add r6, r1, r5
    ldrh r5, [r6, #4]
    add r4, r3, #0xc00
    add r12, r12, #1
    strh r5, [r4, #0x38]
    ldrb r4, [r6, #6]
    cmp r12, r2
    strb r4, [r3, #0xc3a]
    ldrb r4, [r6, #7]
    strb r4, [r3, #0xc3b]
    ldrb r4, [r6, #8]
    strb r4, [r3, #0xc3c]
    ldrb r5, [r6, #9]
    ldrb r4, [r6, #0xa]
    strb r5, [r3, #0xc3d]
    strb r4, [r3, #0xc3e]
    ldrb r4, [r6, #0xb]
    strb r4, [r3, #0xc3f]
    blt @L_02116ca0
@L_02116cfc:
    add r0, r0, #0x11000
    strb r2, [r0, #0x8dd]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov000_02116d08(s32 arg0)
{
    *(u8 *)(((u8 *)(arg0 + 0x11000)) + 0x8DD) = 0;
    return (arg0 + 0x11000);
}

extern "C" asm void func_ov000_02116d18(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r1, [r10, #0xbd4]
    mov r6, #0
    str r6, [sp]
    cmp r1, #0
    bne @L_02116d40
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r0, #1
    str r0, [sp]
@L_02116d40:
    mov r0, r10
    ldr r7, [r10, #0xbd4]
    bl _ZN17UnkClass_020621b413func_0207e5fcEv
    mov r9, #0
    mov r8, r0
    add r4, r10, #0x11800
    mov r11, #1
    mov r5, r9
    b @L_02116e28
@L_02116d64:
    ldrb r1, [r7, #0x2c]
    cmp r1, #0xff
    beq @L_02116e20
    ldrb r0, [r7, #0x30]
    cmp r0, #1
    bne @L_02116e20
    cmp r1, #0xc9
    beq @L_02116e20
    cmp r1, #0xca
    blo @L_02116d94
    cmp r1, #0xd4
    blo @L_02116e20
@L_02116d94:
    ldrb r0, [r7, #0x2c]
    cmp r0, #0xd4
    cmpne r0, #0xd7
    beq @L_02116e20
    ldrh r2, [r7, #0x2a]
    mov r0, r10
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_0207af84Ev
    cmp r0, #0
    bne @L_02116e20
    ldrb r0, [r7, #0x31]
    tst r0, #0xc
    movne r0, #1
    moveq r0, r5
    cmp r0, #0
    bne @L_02116e20
    ldrb r0, [r7, #0x2c]
    cmp r0, #0xdd
    blo @L_02116e0c
    cmp r0, #0xe6
    bhi @L_02116e0c
    ldrh r1, [r7, #0x2a]
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    ldr r0, =data_020cacc8
    bl func_020817bc
    cmp r0, #0
    beq @L_02116e20
    b @L_02116e18
@L_02116e0c:
    ldrb r0, [r7, #0x2c]
    cmp r8, r0
    blt @L_02116e20
@L_02116e18:
    ldrb r0, [r7, #0x2e]
    orr r6, r6, r11, lsl r0
@L_02116e20:
    add r9, r9, #1
    add r7, r7, #0x38
@L_02116e28:
    ldrh r0, [r4, #0x42]
    cmp r9, r0
    blt @L_02116d64
    ldr r0, [sp]
    cmp r0, #0
    beq @L_02116e48
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116e48:
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02116e58(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r1, r5, #0x11800
    ldrh r4, [r1, #0x42]
    cmp r4, #0
    bne @L_02116e84
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    add r1, r5, #0x11800
    mov r0, r5
    ldrh r4, [r1, #0x42]
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116e84:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov000_02116e8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r2, [r7, #0xbd4]
    mov r3, #0
    mov r6, r1
    mov r5, r3
    cmp r2, #0
    mvn r4, #0
    bne @L_02116ec4
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r3, #1
@L_02116ec4:
    add r0, r7, #0x11800
    ldrh r12, [r0, #0x42]
    ldr r2, [r7, #0xbd4]
    mov r1, #0
    cmp r12, #0
    ble @L_02116f0c
@L_02116edc:
    ldrb r0, [r2, #0x31]
    tst r0, #4
    beq @L_02116efc
    ldrh r0, [r2, #0x2a]
    add r4, r4, #1
    cmp r0, r6
    moveq r5, #1
    beq @L_02116f0c
@L_02116efc:
    add r1, r1, #1
    cmp r1, r12
    add r2, r2, #0x38
    blt @L_02116edc
@L_02116f0c:
    cmp r3, #0
    beq @L_02116f1c
    mov r0, r7
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116f1c:
    mov r0, r4
    cmp r5, #0
    mvneq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov000_02116f2c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r2, [r7, #0xbd4]
    mov r3, #0
    mov r6, r1
    mov r5, r3
    cmp r2, #0
    mvn r4, #0
    bne @L_02116f64
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r3, #1
@L_02116f64:
    add r0, r7, #0x11800
    ldrh r12, [r0, #0x42]
    ldr r2, [r7, #0xbd4]
    mov r1, #0
    cmp r12, #0
    ble @L_02116fac
@L_02116f7c:
    ldrb r0, [r2, #0x31]
    tst r0, #8
    beq @L_02116f9c
    ldrh r0, [r2, #0x2a]
    add r4, r4, #1
    cmp r0, r6
    moveq r5, #1
    beq @L_02116fac
@L_02116f9c:
    add r1, r1, #1
    cmp r1, r12
    add r2, r2, #0x38
    blt @L_02116f7c
@L_02116fac:
    cmp r3, #0
    beq @L_02116fbc
    mov r0, r7
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116fbc:
    mov r0, r4
    cmp r5, #0
    mvneq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov000_02116fcc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r2, [r5, #0xbd4]
    mov r4, r1
    cmp r2, #0
    mov r2, #0
    bne @L_02116ff0
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r2, #1
@L_02116ff0:
    add r0, r5, #0x11800
    ldrh r12, [r0, #0x42]
    ldr r1, [r5, #0xbd4]
    mov r3, #0
    cmp r12, #0
    bls @L_02117040
@L_02117008:
    ldrh r0, [r1, #0x2a]
    cmp r0, r4
    bne @L_02117030
    cmp r2, #0
    ldr r4, [r1, #0x34]
    beq @L_02117028
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02117028:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
@L_02117030:
    add r3, r3, #1
    cmp r3, r12
    add r1, r1, #0x38
    blo @L_02117008
@L_02117040:
    cmp r2, #0
    beq @L_02117050
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02117050:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}
