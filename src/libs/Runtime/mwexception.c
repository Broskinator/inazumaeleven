// (asm for now)

void _ZSt9terminatev(void);
void _ZSt10unexpectedv(void);
void __register_global_object(void);
void func_02025348(void);

extern char data_020ab724[];
extern char data_020bf410[];

asm void _ZSt9terminatev(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020ab724
    ldr r0, [r0]
    blx r0
    ldmia sp!, {r3, pc}
}

asm void _ZSt10unexpectedv(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020ab724
    ldr r0, [r0, #4]
    blx r0
    ldmia sp!, {r3, pc}
}

asm void __register_global_object(void)
{
    ldr r3, =data_020bf410
    ldr r12, [r3]
    str r12, [r2]
    str r1, [r2, #4]
    str r0, [r2, #8]
    str r2, [r3]
    bx lr
}

asm void func_02025348(void)
{
    stmdb sp!, {r3, lr}
    mov r12, #0
    mov r3, r1
    cmp r1, #0
    str r12, [r2]
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    ldrb r12, [r1]
    cmp r12, #0x50
    bne @L_020253ac
    ldrb r12, [r3, #1]!
    cmp r12, #0x56
    addeq r3, r3, #1
    ldrb r12, [r3]
    cmp r12, #0x4b
    addeq r3, r3, #1
    ldrb r3, [r3]
    cmp r3, #0x76
    bne @L_020253a8
    ldrb r3, [r0]
    cmp r3, #0x50
    cmpne r3, #0x2a
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
@L_020253a8:
    mov r3, r1
@L_020253ac:
    ldrb r12, [r0]
    cmp r12, #0x21
    beq @L_020253c0
    cmp r12, #0x2a
    bne @L_020254b0
@L_020253c0:
    ldrb lr, [r0], #1
    ldrb r12, [r3], #1
    cmp lr, r12
    movne r0, #0
    ldmneia sp!, {r3, pc}
@L_020253d4:
    ldrb lr, [r0]
    ldrb r12, [r3], #1
    cmp lr, r12
    bne @L_02025428
    cmp lr, #0x21
    add r0, r0, #1
    bne @L_020253d4
    ldrb r1, [r0]
    mov lr, #0
    cmp r1, #0x21
    beq @L_0202541c
    mov r1, #0xa
@L_02025404:
    ldrb r12, [r0]
    ldrb r3, [r0, #1]!
    mla r12, lr, r1, r12
    cmp r3, #0x21
    sub lr, r12, #0x30
    bne @L_02025404
@L_0202541c:
    str lr, [r2]
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_02025428:
    ldrb r3, [r0], #1
    cmp r3, #0x21
    bne @L_02025428
@L_02025434:
    ldrb r3, [r0], #1
    cmp r3, #0x21
    bne @L_02025434
    ldrb r3, [r0]
    cmp r3, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    add r3, r1, #1
    b @L_020253d4
@L_02025458:
    ldrb r1, [r3, #1]!
    add r0, r0, #1
    cmp r1, #0x4b
    bne @L_02025478
    ldrb r1, [r0]
    add r3, r3, #1
    cmp r1, #0x4b
    addeq r0, r0, #1
@L_02025478:
    ldrb r2, [r0]
    cmp r2, #0x4b
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldrb r1, [r3]
    cmp r1, #0x56
    bne @L_020254a0
    cmp r2, #0x56
    addeq r0, r0, #1
    add r3, r3, #1
@L_020254a0:
    ldrb r1, [r0]
    cmp r1, #0x56
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
@L_020254b0:
    ldrb r2, [r0]
    cmp r2, #0x50
    cmpne r2, #0x52
    bne @L_020254cc
    ldrb r1, [r3]
    cmp r2, r1
    beq @L_02025458
@L_020254cc:
    ldrb r1, [r3]
    cmp r2, r1
    bne @L_020254f4
@L_020254d8:
    cmp r2, #0
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    ldrb r2, [r0, #1]!
    ldrb r1, [r3, #1]!
    cmp r2, r1
    beq @L_020254d8
@L_020254f4:
    mov r0, #0
    ldmia sp!, {r3, pc}
}
