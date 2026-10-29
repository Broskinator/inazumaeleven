// (asm for now)

void func_0200a298(void);
void DC_StoreRange(void);
void func_0200a2ac(void);

asm void SND_DestroyWaveArc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    bl func_0200a298
    ldr r0, [r4, #0x18]
    cmp r0, #0
    beq @L_0200ad74
    mov r5, #0
    mov r4, #8
@L_0200ad54:
    ldr r6, [r0, #4]
    mov r1, r4
    str r5, [r0]
    str r5, [r0, #4]
    bl DC_StoreRange
    mov r0, r6
    cmp r6, #0
    bne @L_0200ad54
@L_0200ad74:
    bl func_0200a2ac
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0200ad7c(void)
{
    sub sp, sp, #8
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [r0]
    str r1, [r0, #4]
    add sp, sp, #8
    bx lr
}

asm void func_0200ad9c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, [r2]
    ldr r3, [r0, #0x38]
    cmp r4, r3
    bhs @L_0200af40
    mov r12, #0
@L_0200adb4:
    add r3, r0, r4, lsl #2
    ldr r4, [r3, #0x3c]
    and r3, r4, #0xff
    strb r4, [r1]
    cmp r3, #0x10
    mov r4, r4, lsr #8
    bgt @L_0200adfc
    cmp r3, #0x10
    bge @L_0200ae48
    cmp r3, #5
    addls pc, pc, r3, lsl #2
    b @L_0200af28
    b @L_0200af28
    b @L_0200ae08
    b @L_0200ae08
    b @L_0200ae08
    b @L_0200ae08
    b @L_0200ae08
@L_0200adfc:
    cmp r3, #0x11
    beq @L_0200aebc
    b @L_0200af28
@L_0200ae08:
    add lr, r0, r4
    ldrh r12, [r0, r4]
    ldrh r5, [lr, #2]
    ldrh r4, [lr, #4]
    ldrh r3, [lr, #6]
    ldrh r0, [lr, #8]
    strh r12, [r1, #2]
    strh r5, [r1, #4]
    strh r0, [r1, #0xa]
    strh r4, [r1, #6]
    strh r3, [r1, #8]
    ldr r1, [r2]
    mov r0, #1
    add r1, r1, #1
    str r1, [r2]
    ldmia sp!, {r3, r4, r5, pc}
@L_0200ae48:
    add lr, r0, r4
    b @L_0200ae9c
@L_0200ae50:
    mov r0, #0xc
    mla r0, r5, r0, lr
    ldrh lr, [r0, #2]
    ldrh r12, [r0, #4]
    ldrh r5, [r0, #6]
    ldrh r4, [r0, #8]
    ldrh r3, [r0, #0xa]
    ldrh r0, [r0, #0xc]
    strh lr, [r1]
    strh r12, [r1, #2]
    strh r0, [r1, #0xa]
    strh r5, [r1, #4]
    strh r4, [r1, #6]
    strh r3, [r1, #8]
    ldr r1, [r2, #4]
    mov r0, #1
    add r1, r1, #1
    str r1, [r2, #4]
    ldmia sp!, {r3, r4, r5, pc}
@L_0200ae9c:
    ldrb r4, [lr, #1]
    ldrb r3, [lr]
    ldr r5, [r2, #4]
    sub r3, r4, r3
    add r3, r3, #1
    cmp r5, r3
    blo @L_0200ae50
    b @L_0200af28
@L_0200aebc:
    add r5, r0, r4
    b @L_0200af1c
@L_0200aec4:
    ldrb r4, [r5, r3]
    cmp r4, #0
    beq @L_0200af28
    mov r0, #0xc
    mla r0, r3, r0, r5
    ldrh r5, [r0, #8]
    ldrh r4, [r0, #0xa]
    ldrh lr, [r0, #0xc]
    ldrh r12, [r0, #0xe]
    ldrh r3, [r0, #0x10]
    ldrh r0, [r0, #0x12]
    strh r5, [r1]
    strh r4, [r1, #2]
    strh r0, [r1, #0xa]
    strh lr, [r1, #4]
    strh r12, [r1, #6]
    strh r3, [r1, #8]
    ldr r1, [r2, #4]
    mov r0, #1
    add r1, r1, #1
    str r1, [r2, #4]
    ldmia sp!, {r3, r4, r5, pc}
@L_0200af1c:
    ldr r3, [r2, #4]
    cmp r3, #8
    blo @L_0200aec4
@L_0200af28:
    ldr lr, [r2]
    ldr r3, [r0, #0x38]
    add r4, lr, #1
    stmia r2, {r4, r12}
    cmp r4, r3
    blo @L_0200adb4
@L_0200af40:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200af48(void)
{
    ldr r0, [r0, #0x38]
    bx lr
}

asm void SND_SetWaveDataAddress(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_0200a298
    add r0, r6, #0x3c
    add r2, r6, r5, lsl #2
    add r0, r0, r5, lsl #2
    mov r1, #4
    str r4, [r2, #0x3c]
    bl DC_StoreRange
    bl func_0200a2ac
    ldmia sp!, {r4, r5, r6, pc}
}

asm void SND_GetWaveDataAddress(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_0200a298
    add r0, r5, r4, lsl #2
    ldr r4, [r0, #0x3c]
    cmp r4, #0
    beq @L_0200afb0
    cmp r4, #0x2000000
    addlo r4, r5, r4
    b @L_0200afb4
@L_0200afb0:
    mov r4, #0
@L_0200afb4:
    bl func_0200a2ac
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}
