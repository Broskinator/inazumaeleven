#include "game/UnkClass_0206ee34.hpp"

extern "C" void func_020841d8(void);

asm void UnkClass_0206ee34::func_0206ee34(int a)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, #0
    mov r5, r1
    str r4, [r6, #0x10]
    strh r4, [r6, #0x1c]
    strh r4, [r6, #0x1e]
    strh r4, [r6, #0x20]
    strh r4, [r6, #0x22]
    strh r4, [r6, #0x24]
    strh r4, [r6, #0x26]
    strh r4, [r6, #0x28]
    strh r4, [r6, #0x2a]
    strb r4, [r6, #0x2c]
    strb r4, [r6, #0x2d]
    strb r4, [r6, #0x30]
    strh r4, [r6, #0x32]
    strb r4, [r6, #0x88]
    bl func_020841d8
    add r0, r6, #8
    bl func_020841d8
    sub r0, r4, #1
    strb r0, [r6, #0x2e]
    strb r5, [r6, #0x2f]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_0206ee34::func_0206ee98()
{
    ldrh r1, [r0, #6]
    orr r1, r1, #0x20
    strh r1, [r0, #6]
    bx lr
}

asm void UnkClass_0206ee34::func_0206eea8()
{
    ldrh r0, [r0, #6]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206eebc()
{
    ldrh r0, [r0, #6]
    tst r0, #4
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206eed0()
{
    ldrh r0, [r0, #6]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206eee4()
{
    ldrh r0, [r0, #6]
    tst r0, #0x10
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206eef8()
{
    ldrh r0, [r0, #6]
    tst r0, #0x80
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206ef0c()
{
    ldrh r0, [r0, #6]
    tst r0, #0x100
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206ef20()
{
    cmp r1, #0
    ldrh r0, [r0, #6]
    bne @L_0206ef3c
    tst r0, #0x400
    moveq r0, #1
    movne r0, #0
    bx lr
@L_0206ef3c:
    tst r0, #0x800
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206ef4c()
{
    ldrh r0, [r0, #6]
    tst r0, #0x200
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206ef60()
{
    ldrh r0, [r0, #6]
    tst r0, #0x20
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206ef74()
{
    ldrh r0, [r0, #6]
    tst r0, #0x2000
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206ef88()
{
    ldrh r0, [r0, #6]
    tst r0, #0x4000
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206ef9c()
{
    ldrh r0, [r0, #6]
    tst r0, #0x1000
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_0206ee34::func_0206efb0()
{
    ldrb r0, [r0, r1, lsl #1]
    bx lr
}

asm void UnkClass_0206ee34::func_0206efb8()
{
    add r0, r0, r1, lsl #1
    ldrsb r0, [r0, #1]
    bx lr
}

asm void UnkClass_0206ee34::func_0206efc4()
{
    ldrh r1, [r0, #6]
    orr r1, r1, #0xc
    strh r1, [r0, #6]
    bx lr
}

asm void UnkClass_0206ee34::func_0206efd4()
{
    ldrh r2, [r0, #6]
    ldr r1, =0xfff3
    and r1, r2, r1
    strh r1, [r0, #6]
    bx lr
}

asm void UnkClass_0206ee34::func_0206efec()
{
    ldrh r1, [r0, #6]
    orr r1, r1, #0x10
    strh r1, [r0, #6]
    bx lr
}

asm void UnkClass_0206ee34::func_0206effc()
{
    ldrh r2, [r0, #6]
    ldr r1, =0xffef
    and r1, r2, r1
    strh r1, [r0, #6]
    bx lr
}

asm void UnkClass_0206ee34::func_0206f014()
{
    ldrh r0, [r0, #6]
    tst r0, #0x40
    movne r0, #1
    moveq r0, #0
    bx lr
}
