#include "match/MatchEngine.hpp"
extern "C" void _ZN9EntryPool3GetEi(void);
extern "C" void func_01ffde48(void);
extern "C" void func_020802a0(void);
extern "C" void func_02080b90(void);
extern "C" void func_02080c64(void);
extern "C" void gEntryPool(void);

extern "C" void _ZN11MatchEngine13func_0207a5c0Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207add4Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207ae40Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02082d5cEv(void);     // (for the asm functions)
asm void MatchEngine::func_02082d5c()
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x60
    add r4, sp, #0
    mov r2, r4
    bl _ZN11MatchEngine13func_0207a5c0Ev
    mov r0, r4
    bl func_020802a0
    add sp, sp, #0x60
    ldmia sp!, {r4, pc}
}

asm void MatchEngine::func_02082d80()
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    bl _ZN11MatchEngine13func_02082d5cEv
    cmp r4, r0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r4, pc}
}

asm void MatchEngine::func_02082d9c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    add r1, r10, r9, lsl #6
    add r0, r2, #0x3d4
    add r4, r0, #0x400
    add r5, r1, #0x17c
    mov r3, #0xf
@L_02082dbc:
    ldrb r0, [r4, #1]
    ldrb r1, [r4], #2
    subs r3, r3, #1
    strb r0, [r5, #1]
    strb r1, [r5], #2
    bne @L_02082dbc
    ldrb r4, [r4]
    add r1, r2, #0x700
    ldrb r3, [r2, #0x7f3]
    strb r4, [r5]
    add r0, r10, r9, lsl #6
    strb r3, [r0, #0x19b]
    ldrh r6, [r1, #0xf4]
    add r4, r0, #0x100
    ldrh r5, [r1, #0xf6]
    strh r6, [r4, #0x9c]
    ldrh r6, [r1, #0xf8]
    strh r5, [r4, #0x9e]
    ldrh r5, [r1, #0xfa]
    strh r6, [r4, #0xa0]
    ldrh r6, [r1, #0xfc]
    strh r5, [r4, #0xa2]
    ldrh r5, [r1, #0xfe]
    strh r6, [r4, #0xa4]
    ldrb r1, [r2, #0x800]
    strh r5, [r4, #0xa6]
    add r3, r2, #0x800
    strb r1, [r0, #0x1a8]
    ldrb r7, [r2, #0x801]
    ldrh r5, [r3, #2]
    add r6, r10, r9, lsl #5
    strb r7, [r0, #0x1a9]
    strh r5, [r4, #0xaa]
    ldrh r7, [r3, #4]
    ldrh r5, [r3, #6]
    add r1, r2, #0x14
    strh r7, [r4, #0xac]
    strh r5, [r4, #0xae]
    ldrh r7, [r3, #8]
    ldrsb r5, [r3, #0xa]
    strh r7, [r4, #0xb0]
    strb r5, [r0, #0x1b2]
    ldrsb r7, [r3, #0xb]
    ldrsb r5, [r3, #0xc]
    strb r7, [r0, #0x1b3]
    strb r5, [r0, #0x1b4]
    ldrsb r7, [r3, #0xd]
    ldrh r5, [r3, #0xe]
    ldrh r3, [r3, #0x12]
    strb r7, [r0, #0x1b5]
    strh r5, [r4, #0xb6]
    ldrb r7, [r2, #0x810]
    ldrb r5, [r2, #0x811]
    strb r7, [r0, #0x1b8]
    strb r5, [r0, #0x1b9]
    strh r3, [r4, #0xba]
    add r5, r1, #0x800
    add r4, r6, #0x34c
    mov r3, #8
@L_02082ea8:
    ldrh r0, [r5, #2]
    ldrh r1, [r5], #4
    subs r3, r3, #1
    strh r0, [r4, #2]
    strh r1, [r4], #4
    bne @L_02082ea8
    ldr r11, =gEntryPool
    ldr r4, =0xffdf
    add r7, r2, #0xd4
    mov r6, r9, lsl #0x1f
    mov r8, #0
@L_02082ed4:
    mov r0, r10
    mov r1, r7
    add r2, r8, #0x10
    bl func_01ffde48
    mov r0, r11
    add r1, r8, #0x10
    bl _ZN9EntryPool3GetEi
    movs r5, r0
    beq @L_02082f20
    mov r1, r9
    bl func_02080c64
    ldrh r0, [r5, #0x42]
    bic r0, r0, #0x8000
    orr r0, r0, r6, lsr #16
    strh r0, [r5, #0x42]
    ldrh r0, [r5, #0xf0]
    orr r0, r0, #0x40
    and r0, r0, r4
    strh r0, [r5, #0xf0]
@L_02082f20:
    add r8, r8, #1
    cmp r8, #0x10
    add r7, r7, #0x70
    blt @L_02082ed4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02082f3c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r2
    mov r7, #0x2000
    cmp r9, #2
    mov r10, r1
    mov r6, #0
    moveq r7, #0x4000
    beq @L_02082f64
    cmp r9, #3
    moveq r7, #0x8000
@L_02082f64:
    mvn r0, r7
    ldr r4, =data_020e88a0
    mov r8, #0
    mov r11, r0, lsl #0x10
@L_02082f74:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r5, r0
    beq @L_02083034
    ldrh r0, [r5, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02083034
    mov r0, r5
    bl func_02080b90
    cmp r10, r0
    bne @L_02083034
    ldrh r0, [r5, #0xba]
    tst r7, r0
    beq @L_02083034
    cmp r6, #0
    bne @L_02083020
    cmp r9, #1
    bne @L_02082fe0
    ldrh r2, [r5, #0x42]
    mov r0, r4
    mov r1, r10
    bl _ZN11MatchEngine13func_0207ae40Ei
    cmp r0, #0
    beq @L_02083020
@L_02082fe0:
    cmp r9, #2
    bne @L_02083000
    ldrh r2, [r5, #0x42]
    mov r0, r4
    mov r1, r10
    bl _ZN11MatchEngine13func_0207add4Ei
    cmp r0, #0
    beq @L_02083020
@L_02083000:
    cmp r9, #3
    bne @L_02083030
    ldrh r2, [r5, #0x42]
    mov r0, r4
    mov r1, #2
    bl _ZN11MatchEngine13func_0207ae40Ei
    cmp r0, #0
    bne @L_02083030
@L_02083020:
    ldrh r0, [r5, #0xba]
    and r0, r0, r11, lsr #16
    strh r0, [r5, #0xba]
    b @L_02083034
@L_02083030:
    mov r6, #1
@L_02083034:
    add r8, r8, #1
    cmp r8, #0x84
    blt @L_02082f74
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02083048()
{
    add r0, r0, #0x3ac
    add r0, r0, r1, lsl #4
    bx lr
}

asm void MatchEngine::func_02083054()
{
    add r0, r0, #0x34c
    add r0, r0, r1, lsl #5
    bx lr
}
