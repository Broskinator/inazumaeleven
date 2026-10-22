#include "game/UnkClass_0203dc7c.hpp"

extern "C" char data_020abe94[];
extern "C" char data_020e88a0[];
extern "C" void FS_UnloadOverlay(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZdlPv(void);
extern "C" void func_0206b3c4(void);
extern "C" void func_ov015_02132554(void);
extern "C" void func_ov015_02132600(void);
extern "C" void func_ov015_02132614(void);
extern "C" void func_ov015_02132774(void);
extern "C" void func_ov015_02132784(void);
extern "C" void func_ov015_021327ec(void);

asm void UnkClass_0203dc7c::func_0203dc7c()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020abe94
    mov r4, r0
    str r1, [r4]
    bl func_0203dc9c
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_0203dc7c::func_0203dc9c()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
    mov r1, r4
    add r0, r5, #0x20
    mov r2, #0x60
    str r4, [r5, #0x18]
    str r4, [r5, #0x1c]
    bl MI_CpuFill8
    str r4, [r5, #0x80]
    str r4, [r5, #0x84]
    strb r4, [r5, #0x89]
    strb r4, [r5, #0x88]
    strb r4, [r5, #4]
    strb r4, [r5, #5]
    str r4, [r5, #8]
    str r4, [r5, #0xc]
    str r4, [r5, #0x10]
    str r4, [r5, #0x14]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_0203dc7c::func_0203dcec()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrb r0, [r6, #0x88]
    mov r5, r1
    mov r4, r2
    cmp r0, #0
    beq @L_0203dd28
    ldr r0, [r6, #0x84]
    cmp r0, #0
    beq @L_0203dd58
    bl func_ov015_02132784
    cmp r0, #0
    bne @L_0203dd58
    ldr r0, [r6, #0x84]
    b @L_0203dd44
@L_0203dd28:
    ldr r0, [r6, #0x80]
    cmp r0, #0
    beq @L_0203dd58
    bl func_ov015_02132774
    cmp r0, #0
    bne @L_0203dd58
    ldr r0, [r6, #0x80]
@L_0203dd44:
    ldr r3, [r0]
    mov r1, r5
    ldr r3, [r3, #8]
    mov r2, r4
    blx r3
@L_0203dd58:
    ldr r0, =data_020e88a0
    mov r1, r5
    mov r2, r4
    bl func_0206b3c4
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_0203dc7c::func_0203dd74()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrb r0, [r5, #0x88]
    mov r4, r1
    cmp r0, #0
    beq @L_0203ddac
    ldr r0, [r5, #0x84]
    cmp r0, #0
    beq @L_0203ddd8
    bl func_ov015_02132784
    cmp r0, #0
    bne @L_0203ddd8
    ldr r0, [r5, #0x84]
    b @L_0203ddc8
@L_0203ddac:
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_0203ddd8
    bl func_ov015_02132774
    cmp r0, #0
    bne @L_0203ddd8
    ldr r0, [r5, #0x80]
@L_0203ddc8:
    ldr r2, [r0]
    mov r1, r4
    ldr r2, [r2, #0xc]
    blx r2
@L_0203ddd8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_0203dc7c::func_0203dde0()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #0
    bne @L_0203de14
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_0203de40
    ldr r1, [r0]
    ldr r1, [r1, #0x14]
    blx r1
    mov r1, r0
    ldr r0, [r4, #0x80]
    b @L_0203de34
@L_0203de14:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_0203de40
    ldr r1, [r0]
    ldr r1, [r1, #0x14]
    blx r1
    mov r1, r0
    ldr r0, [r4, #0x84]
@L_0203de34:
    ldr r2, [r0]
    ldr r2, [r2, #0x18]
    blx r2
@L_0203de40:
    mov r0, #0
    ldmia sp!, {r4, pc}
}

asm void UnkClass_0203dc7c::func_0203de48()
{
    mov r0, #0
    bx lr
}

asm void UnkClass_0203dc7c::func_0203de50()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    mov r0, r4
    bl func_ov015_021327ec
    cmp r4, #0
    bne @L_0203de7c
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_0203de94
    b @L_0203de88
@L_0203de7c:
    ldr r0, [r5, #0x84]
    cmp r0, #0
    beq @L_0203de94
@L_0203de88:
    ldr r1, [r0]
    ldr r1, [r1, #0x1c]
    blx r1
@L_0203de94:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_0203dc7c::func_0203de9c()
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    ldr r0, [r4]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
@L_0203deb0:
    ldrb r0, [r4, #8]
    cmp r0, #0
    beq @L_0203def8
    ldr r0, [r4, #4]
    cmp r0, r1
    bne @L_0203def8
    ldr r1, [r4, #0xc]
    mov r0, #0
    bl FS_UnloadOverlay
    ldr r0, [r4, #4]
    cmp r0, #0
    beq @L_0203deec
    ldr r1, [r0]
    ldr r1, [r1, #4]
    blx r1
@L_0203deec:
    mov r0, #0
    str r0, [r4, #4]
    ldmia sp!, {r4, pc}
@L_0203def8:
    ldr r0, [r4, #0x10]!
    cmp r0, #0
    bne @L_0203deb0
    ldmia sp!, {r4, pc}
}

asm void UnkClass_0203dc7c::func_0203df08()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x80]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, #6
    bl func_ov015_02132554
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203df24()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x80]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, #6
    bl func_ov015_02132600
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203df40()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x84]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, #6
    bl func_ov015_02132614
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203df5c()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x80]
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r2, [r0]
    ldr r2, [r2, #0x60]
    blx r2
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203df80()
{
    mvn r0, #0
    bx lr
}

asm void UnkClass_0203dc7c::func_0203df88()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x84]
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r2, [r0]
    ldr r2, [r2, #0x60]
    blx r2
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203dfac()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x80]
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r2, [r0]
    ldr r2, [r2, #0x64]
    blx r2
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203dfd0()
{
    mvn r0, #0
    bx lr
}

asm void UnkClass_0203dc7c::func_0203dfd8()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x84]
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r2, [r0]
    ldr r2, [r2, #0x64]
    blx r2
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203dffc()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x80]
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r1, [r0]
    ldr r1, [r1, #0x68]
    blx r1
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203e020()
{
    mvn r0, #0
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e028()
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0x84]
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r1, [r0]
    ldr r1, [r1, #0x68]
    blx r1
    ldmia sp!, {r3, pc}
}

asm void UnkClass_0203dc7c::func_0203e04c()
{
    stmdb sp!, {r4, lr}
    add lr, r0, r1, lsl #2
    ldr r12, [lr, #0x18]
    add r4, r0, #0x20
    mov r3, #0x18
    mla r4, r12, r3, r4
    mov r3, #0xc
    mla r4, r1, r3, r4
    mov r12, #0
    str r12, [lr, #8]
    ldr r3, [r4, #8]
    add r0, r0, r1
    cmp r3, r2
    movne r12, #1
    strb r12, [r0, #4]
    str r2, [r4, #8]
    ldmia sp!, {r4, pc}
}

asm void UnkClass_0203dc7c::func_0203e090()
{
    stmdb sp!, {r3, r4, r5, lr}
    add lr, r0, r1, lsl #2
    ldr r3, [lr, #0x18]
    mov r12, #1
    add r5, r0, #0x20
    add r4, r3, #1
    mov r3, #0x18
    mla r5, r4, r3, r5
    mov r3, #0xc
    mla r3, r1, r3, r5
    str r12, [lr, #8]
    add r0, r0, r1
    strb r12, [r0, #4]
    str r2, [r3, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_0203dc7c::func_0203e0cc()
{
    stmdb sp!, {r4, lr}
    add r12, r0, r1, lsl #2
    ldr r2, [r12, #0x18]
    add r4, r0, #0x20
    sub lr, r2, #1
    mov r2, #0x18
    mla r4, lr, r2, r4
    mov r2, #0xc
    mla r2, r1, r2, r4
    mov r3, #2
    add r0, r0, r1
    str r3, [r12, #8]
    mov r1, #1
    strb r1, [r0, #4]
    ldr r1, [r2, #4]
    mov r0, #0
    stmib r2, {r0, r1}
    ldmia sp!, {r4, pc}
}

asm void UnkClass_0203dc7c::func_0203e114()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r5, r0, r1, lsl #2
    ldr r3, [r5, #0x18]
    mov r12, #0xc
    mov lr, #0x18
    mul r12, r1, r12
    mla r4, r3, lr, r0
    add r4, r4, r12
    ldr r4, [r4, #0x24]
    str r4, [r5, #0x10]
    ldr r4, [r5, #8]
    cmp r4, #1
    beq @L_0203e154
    cmp r4, #2
    subeq r3, r3, #1
    b @L_0203e158
@L_0203e154:
    add r3, r3, #1
@L_0203e158:
    add r4, r0, #0x20
    mov lr, #0x18
    mla r4, r3, lr, r4
    add lr, r0, r1, lsl #2
    str r3, [lr, #0x18]
    mov r3, #0
    add r0, r0, r1
    str r3, [lr, #8]
    add r1, r4, r12
    strb r3, [r0, #4]
    ldr r0, [r1, #4]
    stmia r1, {r0, r2}
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_0203dc7c::func_0203e18c()
{
    ldr r1, [r0, #8]
    ldr r2, [r0, #0x18]
    cmp r1, #1
    beq @L_0203e1a8
    cmp r1, #2
    subeq r2, r2, #1
    b @L_0203e1ac
@L_0203e1a8:
    add r2, r2, #1
@L_0203e1ac:
    mov r1, #0x18
    mla r0, r2, r1, r0
    ldr r0, [r0, #0x24]
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e1bc()
{
    ldr r1, [r0, #8]
    ldr r2, [r0, #0x18]
    cmp r1, #1
    beq @L_0203e1d8
    cmp r1, #2
    subeq r2, r2, #1
    b @L_0203e1dc
@L_0203e1d8:
    add r2, r2, #1
@L_0203e1dc:
    mov r1, #0x18
    mla r0, r2, r1, r0
    ldr r0, [r0, #0x28]
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e1ec()
{
    ldr r0, [r0, #0x10]
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e1f4()
{
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #0x1c]
    cmp r1, #1
    beq @L_0203e210
    cmp r1, #2
    subeq r2, r2, #1
    b @L_0203e214
@L_0203e210:
    add r2, r2, #1
@L_0203e214:
    mov r1, #0x18
    mla r0, r2, r1, r0
    ldr r0, [r0, #0x30]
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e224()
{
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #0x1c]
    cmp r1, #1
    beq @L_0203e240
    cmp r1, #2
    subeq r2, r2, #1
    b @L_0203e244
@L_0203e240:
    add r2, r2, #1
@L_0203e244:
    mov r1, #0x18
    mla r0, r2, r1, r0
    ldr r0, [r0, #0x34]
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e254()
{
    ldr r0, [r0, #0x14]
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e25c()
{
    ldrb r1, [r0, #0x89]
    cmp r1, #0
    bxeq lr
    ldrb r1, [r0, #0x88]
    ldr r2, =0x4000304
    cmp r1, #0
    ldrneh r1, [r2]
    bicne r1, r1, #0x8000
    strneh r1, [r2]
    ldreqh r1, [r2]
    orreq r1, r1, #0x8000
    streqh r1, [r2]
    ldrb r1, [r0, #0x88]
    mov r2, #1
    cmp r1, #0
    movne r2, #0
    mov r1, #0
    strb r2, [r0, #0x88]
    strb r1, [r0, #0x89]
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2b0()
{
    sub r0, r1, #0x5a
    cmp r0, #3
    movls r0, #1
    movhi r0, #0
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2c4()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2c8()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2cc()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_0203dc7c::func_0203e2e0()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2e4()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2e8()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2ec()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2f0()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2f4()
{
    bx lr
}

asm void UnkClass_0203dc7c::func_0203e2f8()
{
    bx lr
}
