// (asm for now)

asm void STD_CopyString(void)
{
    ldrsb r2, [r1]
    mov r3, r0
    cmp r2, #0
    beq @L_02016cfc
@L_02016ce8:
    ldrsb r2, [r1]
    strb r2, [r0], #1
    ldrsb r2, [r1, #1]!
    cmp r2, #0
    bne @L_02016ce8
@L_02016cfc:
    mov r1, #0
    strb r1, [r0]
    mov r0, r3
    bx lr
}

asm void func_02016d0c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    and lr, r0, #3
    and r4, r1, #3
    mov r3, r1
    teq lr, r4
    mov r4, #0
    bne @L_02016da8
    cmp lr, #0
    beq @L_02016d68
    sub r5, r2, #1
    b @L_02016d54
@L_02016d38:
    ldrsb r12, [r3]
    strb r12, [r0, r4]
    ldrsb r12, [r3]
    cmp r12, #0
    beq @L_02016dd8
    add r3, r3, #1
    add r4, r4, #1
@L_02016d54:
    add r12, r4, lr
    cmp r12, #4
    bhs @L_02016d68
    cmp r4, r5
    blt @L_02016d38
@L_02016d68:
    sub r5, r2, #4
    cmp r4, r5
    bge @L_02016da4
    ldr r3, =0x7f7f7f7f
@L_02016d78:
    ldr lr, [r1, r4]
    and r12, lr, r3
    add r12, r12, r3
    orr r12, r12, lr
    orr r12, r12, r3
    mvns r12, r12
    bne @L_02016da4
    str lr, [r0, r4]
    add r4, r4, #4
    cmp r4, r5
    blt @L_02016d78
@L_02016da4:
    add r3, r1, r4
@L_02016da8:
    sub r12, r2, #1
    cmp r4, r12
    bge @L_02016dd8
@L_02016db4:
    ldrsb r1, [r3]
    strb r1, [r0, r4]
    ldrsb r1, [r3]
    cmp r1, #0
    beq @L_02016dd8
    add r4, r4, #1
    cmp r4, r12
    add r3, r3, #1
    blt @L_02016db4
@L_02016dd8:
    sub r1, r2, #1
    cmp r4, r1
    cmpge r2, #0
    movgt r1, #0
    strgtb r1, [r0, r4]
    ldrsb r0, [r3]
    cmp r0, #0
    beq @L_02016e04
    mov r0, r3
    bl STD_GetStringLength
    add r4, r4, r0
@L_02016e04:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02016e10(void)
{
@L_02016e10:
    ldrsb r2, [r0]
    cmp r1, r2
    bxeq lr
    cmp r2, #0
    moveq r0, #0
    bxeq lr
    add r0, r0, #1
    b @L_02016e10
}

asm void func_02016e30(void)
{
    bx lr
}

asm void func_02016e34(void)
{
    mov r2, #0
@L_02016e38:
    ldrsb r3, [r0]
    cmp r1, r3
    moveq r2, r0
    cmp r3, #0
    moveq r0, r2
    bxeq lr
    add r0, r0, #1
    b @L_02016e38
}

asm void func_02016e58(void)
{
    bx lr
}

asm void func_02016e5c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldrsb r2, [r0]
    mov r5, #0
    cmp r2, #0
    beq @L_02016eb8
    mov r3, r5
@L_02016e74:
    mov r12, r3
    add lr, r0, r5
    b @L_02016e84
@L_02016e80:
    add r12, r12, #1
@L_02016e84:
    ldrsb r4, [r1, r12]
    cmp r4, #0
    beq @L_02016e9c
    ldrsb r2, [lr, r12]
    cmp r2, r4
    beq @L_02016e80
@L_02016e9c:
    cmp r4, #0
    addeq r0, r0, r5
    ldmeqia sp!, {r3, r4, r5, pc}
    add r5, r5, #1
    ldrsb r2, [r0, r5]
    cmp r2, #0
    bne @L_02016e74
@L_02016eb8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void STD_GetStringLength(void)
{
    stmdb sp!, {r3, lr}
    tst r0, #3
    mov r12, #0
    beq @L_02016ef0
@L_02016ed0:
    ldrsb r1, [r0, r12]
    cmp r1, #0
    moveq r0, r12
    ldmeqia sp!, {r3, pc}
    add r12, r12, #1
    add r1, r0, r12
    tst r1, #3
    bne @L_02016ed0
@L_02016ef0:
    ldr r1, =0x7f7f7f7f
    add lr, r0, r12
@L_02016ef8:
    ldr r3, [lr]
    and r2, r3, r1
    add r2, r2, r1
    orr r2, r2, r3
    orr r2, r2, r1
    mvns r2, r2
    addeq lr, lr, #4
    addeq r12, r12, #4
    beq @L_02016ef8
    ldrsb r1, [r0, r12]
    cmp r1, #0
    beq @L_02016f38
@L_02016f28:
    add r12, r12, #1
    ldrsb r1, [r0, r12]
    cmp r1, #0
    bne @L_02016f28
@L_02016f38:
    mov r0, r12
    ldmia sp!, {r3, pc}
}

asm void func_02016f44(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    b @L_02016f64
@L_02016f50:
    ldrsb r2, [r0, r4]
    cmp r2, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    add r4, r4, #1
@L_02016f64:
    add r5, r0, r4
    tst r5, #3
    beq @L_02016f78
    cmp r4, r1
    blt @L_02016f50
@L_02016f78:
    sub lr, r1, #4
    cmp r4, lr
    bge @L_02016fbc
    ldr r2, =0x7f7f7f7f
@L_02016f88:
    ldr r12, [r5]
    and r3, r12, r2
    add r3, r3, r2
    orr r3, r3, r12
    orr r3, r3, r2
    mvns r3, r3
    bne @L_02016fbc
    add r4, r4, #4
    cmp r4, lr
    add r5, r5, #4
    blt @L_02016f88
    b @L_02016fbc
@L_02016fb8:
    add r4, r4, #1
@L_02016fbc:
    ldrsb r2, [r0, r4]
    cmp r2, #0
    beq @L_02016fd0
    cmp r4, r1
    blt @L_02016fb8
@L_02016fd0:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void STD_ConcatenateString(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl STD_GetStringLength
    mov r1, r4
    add r0, r5, r0
    bl STD_CopyString
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}
