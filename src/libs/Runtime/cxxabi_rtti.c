// (asm for now)

void _ZNKSt9type_infoeqERKS_(void);
void func_02025928(void);
void func_0202593c(void);
void func_02025958(void);
void func_0202596c(void);
void func_02025980(void);
void func_0202599c(void);
void func_020259f8(void);
void __FindExceptionTable(void);
void func_02025ab8(void);
void func_02025ae0(void);
void func_02025b10(void);
void func_02025b58(void);

void strcmp(void);
void func_020258f4(void);
void _ZdlPv(void);
void func_02023f18(void);
void func_02025130(void);

asm void _ZNKSt9type_infoeqERKS_(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, r1
    beq @L_02025918
    ldr r0, [r0, #4]
    ldr r1, [r1, #4]
    bl strcmp
    cmp r0, #0
    bne @L_02025920
@L_02025918:
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_02025920:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void func_02025928(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_020258f4
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0202593c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_020258f4
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02025958(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_020258f4
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0202596c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02025958
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02025980(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02025958
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0202599c(void)
{
    stmdb sp!, {r4, lr}
    ldrb r1, [r0, #0x6a]
    ldr r12, [r0, #0x60]
    mov r2, #0x10
    cmp r1, #0
    ldr r1, [r0, #0x18]
    moveq r2, #0
    add r1, r1, r12
    mov r4, #0xf
    sub lr, r1, r2
    mov r3, #1
@L_020259c8:
    ldrh r1, [r0, #0x68]
    tst r1, r3, lsl r4
    ldrne r2, [lr, #-4]!
    addne r1, r0, r4, lsl #2
    strne r2, [r1, #0x1c]
    subs r4, r4, #1
    bpl @L_020259c8
    ldr r1, [r0, #0x18]
    add r1, r1, r12
    str r1, [r0, #0x14]
    ldr r0, [r0, #0x54]
    ldmia sp!, {r4, pc}
}

asm void func_020259f8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r1, [r1, #4]
    mov r6, r0
    ldrb r0, [r1]
    ands r4, r0, #0x40
    movne r2, #1
    moveq r2, #0
    strb r2, [r6, #0x6b]
    tst r0, #0x20
    movne r2, #1
    moveq r2, #0
    ands r5, r0, #0x80
    movne r0, #1
    moveq r0, #0
    strb r0, [r6, #0x6c]
    strb r2, [r6, #0x6a]
    ldrb r2, [r1, #1]
    add r0, r1, #2
    add r1, r6, #0x60
    mov r2, r2, lsl #4
    strh r2, [r6, #0x68]
    ldrh r2, [r6, #0x68]
    orr r2, r2, #0x4000
    strh r2, [r6, #0x68]
    bl func_02023f18
    cmp r4, #0
    beq @L_02025a6c
    add r1, r6, #0x64
    bl func_02023f18
@L_02025a6c:
    cmp r4, #0
    beq @L_02025a8c
    cmp r5, #0
    ldrne r0, [r6, #0x38]
    strne r0, [r6, #0x18]
    ldreq r0, [r6, #0x48]
    streq r0, [r6, #0x18]
    ldmia sp!, {r4, r5, r6, pc}
@L_02025a8c:
    ldr r0, [r6, #0x14]
    str r0, [r6, #0x18]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void __FindExceptionTable(void)
{
    ldr r2, [pc, #0x10]
    ldr r1, [pc, #0x10]
    str r2, [r0, #0xc]
    str r1, [r0, #0x10]
    mov r0, #1
    bx lr
    dcd 0x0209e94c
    dcd 0x0209e94c
}

asm void func_02025ab8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldrb r5, [r0], #2
    add r4, sp, #0
    mov r1, r4
    bl func_02023f18
    tst r5, #0x40
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r1, r4
    bl func_02023f18
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02025ae0(void)
{
    ldr r4, [r0, #0x2c]
    ldr r5, [r0, #0x30]
    ldr r6, [r0, #0x34]
    ldr r7, [r0, #0x38]
    ldr r8, [r0, #0x3c]
    ldr r9, [r0, #0x40]
    ldr r10, [r0, #0x44]
    ldr r11, [r0, #0x48]
    ldr sp, [r0, #0x5c]
    ldr r12, [r0, #0x64]
    sub sp, sp, r12
    bx r2
}

asm void func_02025b10(void)
{
    mov r12, sp
    sub sp, sp, #0x70
    str r4, [sp, #0x2c]
    str r5, [sp, #0x30]
    str r6, [sp, #0x34]
    str r7, [sp, #0x38]
    str r8, [sp, #0x3c]
    str r9, [sp, #0x40]
    str r10, [sp, #0x44]
    str r11, [sp, #0x48]
    str r12, [sp, #0x14]
    str r12, [sp, #0x5c]
    str lr, [sp, #0x10]
    str r0, [sp]
    str r1, [sp, #4]
    str r2, [sp, #8]
    mov r0, sp
    b func_02025130
}

asm void func_02025b58(void)
{
    mov r12, sp
    sub sp, sp, #0x70
    str r4, [sp, #0x2c]
    str r5, [sp, #0x30]
    str r6, [sp, #0x34]
    str r7, [sp, #0x38]
    str r8, [sp, #0x3c]
    str r9, [sp, #0x40]
    str r10, [sp, #0x44]
    str r11, [sp, #0x48]
    str r12, [sp, #0x14]
    str r12, [sp, #0x5c]
    str lr, [sp, #0x10]
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    str r12, [sp, #8]
    mov r0, sp
    b func_02025130
}
