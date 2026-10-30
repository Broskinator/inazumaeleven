// (asm for now)

void NNS_G3dMdlSetMdlDiff(void);
void NNS_G3dMdlSetMdlAlpha(void);
void func_0202bd7c(void);
void func_0202bdbc(void);
void func_0202bdfc(void);
void func_0202bfb8(void);
void func_0202c11c(void);

asm void NNS_G3dMdlSetMdlDiff(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    ldrne r3, [r0, #8]
    cmpne r3, #0
    addne lr, r0, r3
    moveq lr, #0
    cmp lr, #0
    beq @L_0202bce4
    adds r12, lr, #4
    beq @L_0202bcd0
    ldrb r0, [lr, #5]
    cmp r1, r0
    bhs @L_0202bcd0
    ldrh r3, [lr, #0xa]
    ldrh r0, [r12, r3]
    add r3, r12, r3
    add r3, r3, #4
    mla r1, r0, r1, r3
    b @L_0202bcd4
@L_0202bcd0:
    mov r1, #0
@L_0202bcd4:
    cmp r1, #0
    ldrne r0, [r1]
    addne r3, lr, r0
    bne @L_0202bce8
@L_0202bce4:
    mov r3, #0
@L_0202bce8:
    mov r0, #0x8000
    ldr r1, [r3, #4]
    rsb r0, r0, #0
    and r0, r1, r0
    orr r0, r0, r2
    str r0, [r3, #4]
    ldmia sp!, {r3, pc}
}

asm void NNS_G3dMdlSetMdlAlpha(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    ldrne r3, [r0, #8]
    cmpne r3, #0
    addne lr, r0, r3
    moveq lr, #0
    cmp lr, #0
    beq @L_0202bd64
    adds r12, lr, #4
    beq @L_0202bd50
    ldrb r0, [lr, #5]
    cmp r1, r0
    bhs @L_0202bd50
    ldrh r3, [lr, #0xa]
    ldrh r0, [r12, r3]
    add r3, r12, r3
    add r3, r3, #4
    mla r1, r0, r1, r3
    b @L_0202bd54
@L_0202bd50:
    mov r1, #0
@L_0202bd54:
    cmp r1, #0
    ldrne r0, [r1]
    addne r1, lr, r0
    bne @L_0202bd68
@L_0202bd64:
    mov r1, #0
@L_0202bd68:
    ldr r0, [r1, #0xc]
    bic r0, r0, #0x1f0000
    orr r0, r0, r2, lsl #16
    str r0, [r1, #0xc]
    ldmia sp!, {r3, pc}
}

asm void func_0202bd7c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrb r0, [r6, #0x18]
    mov r5, r1
    mov r4, #0
    cmp r0, #0
    ldmlsia sp!, {r4, r5, r6, pc}
@L_0202bd98:
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl NNS_G3dMdlSetMdlDiff
    ldrb r0, [r6, #0x18]
    add r4, r4, #1
    cmp r4, r0
    blo @L_0202bd98
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0202bdbc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrb r0, [r6, #0x18]
    mov r5, r1
    mov r4, #0
    cmp r0, #0
    ldmlsia sp!, {r4, r5, r6, pc}
@L_0202bdd8:
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl NNS_G3dMdlSetMdlAlpha
    ldrb r0, [r6, #0x18]
    add r4, r4, #1
    cmp r4, r0
    blo @L_0202bdd8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0202bdfc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #0
    cmp r1, #0
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r4, [r0, #1]
    cmp r4, #0x10
    bhs @L_0202bec8
    cmp r4, #0
    ldmia r1, {r2, r3, r12}
    ldr lr, [r1, #0xc]
    mov r1, r6
    bls @L_0202bfb0
@L_0202be30:
    cmp r0, #0
    beq @L_0202be5c
    ldrb r5, [r0, #1]
    cmp r1, r5
    bhs @L_0202be5c
    ldrh r5, [r0, #6]
    add r7, r0, r5
    ldrh r5, [r7, #2]
    add r5, r7, r5
    add r7, r5, r1, lsl #4
    b @L_0202be60
@L_0202be5c:
    mov r7, r6
@L_0202be60:
    ldr r5, [r7]
    cmp r5, r2
    ldreq r5, [r7, #4]
    cmpeq r5, r3
    ldreq r5, [r7, #8]
    cmpeq r5, r12
    ldreq r5, [r7, #0xc]
    cmpeq r5, lr
    bne @L_0202beb4
    cmp r0, #0
    beq @L_0202beac
    cmp r1, r4
    bhs @L_0202beac
    ldrh r3, [r0, #6]
    ldrh r2, [r0, r3]
    add r0, r0, r3
    add r0, r0, #4
    mla r0, r2, r1, r0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202beac:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202beb4:
    ldrb r5, [r0, #1]
    add r1, r1, #1
    cmp r1, r5
    blo @L_0202be30
    b @L_0202bfb0
@L_0202bec8:
    add r5, r0, #8
    ldrb r3, [r5, #1]
    cmp r3, #0
    beq @L_0202bfb0
    ldrb r7, [r5, r3, lsl #2]
    ldrb r2, [r5]
    add r6, r5, r3, lsl #2
    cmp r2, r7
    bls @L_0202bf1c
@L_0202beec:
    mov r2, r7, asr #5
    ldr r3, [r1, r2, lsl #2]
    and r2, r7, #0x1f
    mov r2, r3, lsr r2
    and r2, r2, #1
    add r2, r6, r2
    ldrb r3, [r2, #1]
    ldrb r2, [r6]
    ldrb r7, [r5, r3, lsl #2]
    add r6, r5, r3, lsl #2
    cmp r2, r7
    bhi @L_0202beec
@L_0202bf1c:
    cmp r0, #0
    ldrb r2, [r6, #3]
    beq @L_0202bf48
    cmp r2, r4
    bhs @L_0202bf48
    ldrh r3, [r0, #6]
    add r12, r0, r3
    ldrh r3, [r12, #2]
    add r3, r12, r3
    add r5, r3, r2, lsl #4
    b @L_0202bf4c
@L_0202bf48:
    mov r5, #0
@L_0202bf4c:
    ldr r12, [r5]
    ldr r3, [r1]
    cmp r12, r3
    ldreq r12, [r5, #4]
    ldreq r3, [r1, #4]
    cmpeq r12, r3
    ldreq r12, [r5, #8]
    ldreq r3, [r1, #8]
    cmpeq r12, r3
    ldreq r3, [r5, #0xc]
    ldreq r1, [r1, #0xc]
    cmpeq r3, r1
    bne @L_0202bfb0
    cmp r0, #0
    beq @L_0202bfa8
    cmp r2, r4
    bhs @L_0202bfa8
    ldrh r3, [r0, #6]
    ldrh r1, [r0, r3]
    add r0, r0, r3
    add r0, r0, #4
    mla r0, r1, r2, r0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202bfa8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202bfb0:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202bfb8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    cmp r1, #0
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r2, [r0, #1]
    cmp r2, #0x10
    bhs @L_0202c058
    cmp r2, #0
    ldmia r1, {r2, r3, r12}
    ldr lr, [r1, #0xc]
    mov r1, #0
    bls @L_0202c114
    mov r5, r1
@L_0202bfec:
    cmp r0, #0
    beq @L_0202c018
    ldrb r4, [r0, #1]
    cmp r1, r4
    bhs @L_0202c018
    ldrh r4, [r0, #6]
    add r6, r0, r4
    ldrh r4, [r6, #2]
    add r4, r6, r4
    add r6, r4, r1, lsl #4
    b @L_0202c01c
@L_0202c018:
    mov r6, r5
@L_0202c01c:
    ldr r4, [r6]
    cmp r4, r2
    ldreq r4, [r6, #4]
    cmpeq r4, r3
    ldreq r4, [r6, #8]
    cmpeq r4, r12
    ldreq r4, [r6, #0xc]
    cmpeq r4, lr
    moveq r0, r1
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r4, [r0, #1]
    add r1, r1, #1
    cmp r1, r4
    blo @L_0202bfec
    b @L_0202c114
@L_0202c058:
    add r4, r0, #8
    ldrb r12, [r4, #1]
    cmp r12, #0
    beq @L_0202c114
    ldrb r6, [r4, r12, lsl #2]
    ldrb r3, [r4]
    add r5, r4, r12, lsl #2
    cmp r3, r6
    bls @L_0202c0ac
@L_0202c07c:
    mov r3, r6, asr #5
    ldr r12, [r1, r3, lsl #2]
    and r3, r6, #0x1f
    mov r3, r12, lsr r3
    and r3, r3, #1
    add r3, r5, r3
    ldrb r12, [r3, #1]
    ldrb r3, [r5]
    ldrb r6, [r4, r12, lsl #2]
    add r5, r4, r12, lsl #2
    cmp r3, r6
    bhi @L_0202c07c
@L_0202c0ac:
    cmp r0, #0
    ldrb r3, [r5, #3]
    beq @L_0202c0d8
    cmp r3, r2
    bhs @L_0202c0d8
    ldrh r2, [r0, #6]
    add r2, r0, r2
    ldrh r0, [r2, #2]
    add r0, r2, r0
    add r4, r0, r3, lsl #4
    b @L_0202c0dc
@L_0202c0d8:
    mov r4, #0
@L_0202c0dc:
    ldr r2, [r4]
    ldr r0, [r1]
    cmp r2, r0
    ldreq r2, [r4, #4]
    ldreq r0, [r1, #4]
    cmpeq r2, r0
    ldreq r2, [r4, #8]
    ldreq r0, [r1, #8]
    cmpeq r2, r0
    ldreq r2, [r4, #0xc]
    ldreq r0, [r1, #0xc]
    cmpeq r2, r0
    moveq r0, r3
    ldmeqia sp!, {r4, r5, r6, pc}
@L_0202c114:
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0202c11c(void)
{
    ldrh r1, [r0, #0xc]
    ldr r1, [r0, r1]
    add r0, r0, r1
    bx lr
}
