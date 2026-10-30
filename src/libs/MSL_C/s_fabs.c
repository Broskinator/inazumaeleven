// (asm for now)

void fabs(void);
void func_02020610(void);
void func_020207d4(void);
void func_02020894(void);
void func_02020af4(void);
void func_02020c6c(void);
void func_02020c78(void);
void func_02020c84(void);
void func_02020cfc(void);
void func_02020d24(void);
void func_02020d34(void);
void func_02020d60(void);
void func_02020d6c(void);
void func_02020d74(void);
void func_02020d94(void);
void func_02020da8(void);
void func_02020dac(void);

void func_020213f8(void);
void func_02022058(void);
void func_02021adc(void);
void __fpclassifyd(void);
void func_02022230(void);
void copysign(void);
void __kernel_sin(void);
void func_02021728(void);
void func_0201eda4(void);
void func_0201f484(void);
void func_0201d4ec(void);
void func_0201dc1c(void);
void _Znwm(void);
extern char data_020ab48c[];
extern char data_020ab470[];
void _ZNKSt9type_infoeqERKS_(void);
void func_020255e4(void);
void _ZNSt3tr16detail25shared_ptr_deleter_common7releaseEv(void);
void func_02024de8(void);
void _ZdlPv(void);

asm void fabs(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    add r2, sp, #0
    ldr r1, [r2, #4]
    ldr r0, [sp]
    bic r1, r1, #0x80000000
    str r1, [r2, #4]
    add sp, sp, #0x10
    bx lr
}

asm void func_02020610(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r0, =0x7ff
    ldr r6, [sp, #0x24]
    rsb r1, r0, #0x400
    and r2, r0, r6, asr #20
    add r7, r2, r1
    cmp r7, #0x14
    ldr r8, [sp, #0x20]
    bge @L_020206ec
    cmp r7, #0
    bge @L_0202068c
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    ldr r0, =0x8800759c
    ldr r1, =0x7e37e43c
    bl func_020213f8
    mov r4, #0
    mov r2, r4
    mov r3, r4
    bl func_02022058
    bls @L_020207a4
    cmp r6, #0
    movge r8, r4
    movge r6, r4
    bge @L_020207a4
    bic r0, r6, #0x80000000
    orrs r0, r0, r8
    movne r8, r4
    ldrne r6, =0xbff00000
    b @L_020207a4
@L_0202068c:
    ldr r4, =0xfffff
    and r0, r6, r4, asr r7
    orrs r0, r8, r0
    ldreq r0, [sp, #0x20]
    ldreq r1, [sp, #0x24]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    ldr r0, =0x8800759c
    ldr r1, =0x7e37e43c
    bl func_020213f8
    mov r2, #0
    mov r3, r2
    bl func_02022058
    bls @L_020207a4
    cmp r6, #0
    movlt r0, #0x100000
    addlt r6, r6, r0, asr r7
    mvn r0, r4, asr r7
    and r6, r6, r0
    mov r8, #0
    b @L_020207a4
@L_020206ec:
    cmp r7, #0x33
    ble @L_0202072c
    cmp r7, #0x400
    ldrne r0, [sp, #0x20]
    ldrne r1, [sp, #0x24]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    addne sp, sp, #0x10
    bxne lr
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x24]
    mov r2, r0
    mov r3, r1
    bl func_020213f8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    add sp, sp, #0x10
    bx lr
@L_0202072c:
    sub r5, r0, #0x800
    sub r4, r7, #0x14
    tst r8, r5, lsr r4
    mov r9, r8
    ldreq r0, [sp, #0x20]
    ldreq r1, [sp, #0x24]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    ldr r0, =0x8800759c
    ldr r1, =0x7e37e43c
    bl func_020213f8
    mov r2, #0
    mov r3, r2
    bl func_02022058
    bls @L_020207a4
    cmp r6, #0
    bge @L_0202079c
    cmp r7, #0x14
    addeq r6, r6, #1
    beq @L_0202079c
    rsb r0, r7, #0x34
    mov r1, #1
    add r8, r8, r1, lsl r0
    cmp r8, r9
    addlo r6, r6, #1
@L_0202079c:
    mvn r0, r5, lsr r4
    and r8, r8, r0
@L_020207a4:
    mov r0, r8
    mov r1, r6
    str r6, [sp, #0x24]
    str r8, [sp, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_020207d4(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, [sp, #0x14]
    ldr r0, =0x7ff00000
    bic r3, r1, #0x80000000
    mov r4, r2
    mov r5, #0
    str r5, [r4]
    cmp r3, r0
    ldr r0, [sp, #0x10]
    bge @L_02020808
    orrs r0, r3, r0
    bne @L_0202081c
@L_02020808:
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
@L_0202081c:
    cmp r3, #0x100000
    bge @L_0202084c
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    ldr r3, =0x43500000
    mov r2, r5
    bl func_02021adc
    sub r2, r5, #0x36
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    str r2, [r4]
    bic r3, r1, #0x80000000
@L_0202084c:
    ldr r2, =0x800fffff
    ldr r0, =0xfffffc02
    and r1, r1, r2
    orr r1, r1, #0xfe00000
    orr r1, r1, #0x30000000
    ldr r2, [r4]
    add r0, r0, r3, asr #20
    add r2, r2, r0
    ldr r0, [sp, #0x10]
    str r2, [r4]
    str r1, [sp, #0x14]
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02020894(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, lr}
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    mov r4, r2
    bl __fpclassifyd
    cmp r0, #2
    ble @L_020208d0
    mov r6, #0
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    mov r0, r6
    mov r1, r6
    bl func_02022230
    bne @L_020208e4
@L_020208d0:
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
@L_020208e4:
    ldr r3, [sp, #0x14]
    ldr r5, =0x7ff00000
    ldr r1, [sp, #0x10]
    and r0, r3, r5
    movs r12, r0, asr #0x14
    bne @L_0202096c
    bic r0, r3, #0x80000000
    orrs r0, r1, r0
    ldreq r0, [sp, #0x10]
    ldreq r1, [sp, #0x14]
    ldmeqia sp!, {r4, r5, r6, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    ldr r3, =0x43500000
    mov r2, r6
    bl func_02021adc
    mov r3, r1
    and r5, r3, r5
    ldr r1, =0xffff3cb0
    mov r2, r0
    mov r0, r5, asr #0x14
    str r2, [sp, #0x10]
    str r3, [sp, #0x14]
    cmp r4, r1
    sub r12, r0, #0x36
    bge @L_0202096c
    ldr r0, =0xc2f8f359
    ldr r1, =0x1a56e1f
    bl func_02021adc
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
@L_0202096c:
    ldr r0, =0x7ff
    cmp r12, r0
    bne @L_02020998
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    mov r2, r0
    mov r3, r1
    bl func_020213f8
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
@L_02020998:
    add r2, r12, r4
    sub r0, r0, #1
    cmp r2, r0
    ble @L_020209e4
    ldr r5, =0x8800759c
    ldr r4, =0x7e37e43c
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    mov r0, r5
    mov r1, r4
    bl copysign
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl func_02021adc
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
@L_020209e4:
    cmp r2, #0
    ble @L_02020a0c
    ldr r1, =0x800fffff
    ldr r0, [sp, #0x10]
    and r1, r3, r1
    orr r1, r1, r2, lsl #20
    str r1, [sp, #0x14]
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
@L_02020a0c:
    cmn r2, #0x36
    bgt @L_02020a98
    ldr r0, =0xc350
    cmp r4, r0
    ble @L_02020a5c
    ldr r5, =0x8800759c
    ldr r4, =0x7e37e43c
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    mov r0, r5
    mov r1, r4
    bl copysign
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl func_02021adc
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
@L_02020a5c:
    ldr r5, =0xc2f8f359
    ldr r4, =0x1a56e1f
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    mov r0, r5
    mov r1, r4
    bl copysign
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl func_02021adc
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
@L_02020a98:
    ldr r0, =0x800fffff
    add r1, r2, #0x36
    and r0, r3, r0
    orr r3, r0, r1, lsl #20
    ldr r2, [sp, #0x10]
    ldr r1, =0x3c900000
    mov r0, #0
    str r3, [sp, #0x14]
    bl func_02021adc
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02020af4(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    ldr r1, [sp, #0x24]
    ldr r0, =0x3fe921fb
    bic r1, r1, #0x80000000
    cmp r1, r0
    mov r4, #0
    bgt @L_02020b40
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x24]
    mov r2, r4
    mov r3, r4
    str r4, [sp]
    bl __kernel_sin
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
@L_02020b40:
    ldr r0, =0x7ff00000
    cmp r1, r0
    blt @L_02020b70
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x24]
    mov r2, r0
    mov r3, r1
    bl func_02021728
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
@L_02020b70:
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x24]
    add r2, sp, #4
    bl func_0201eda4
    ands r0, r0, #3
    beq @L_02020b9c
    cmp r0, #1
    beq @L_02020bc8
    cmp r0, #2
    beq @L_02020bec
    b @L_02020c2c
@L_02020b9c:
    mov r0, #1
    str r0, [sp]
    ldr r0, [sp, #4]
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #0x10]
    bl __kernel_sin
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
@L_02020bc8:
    ldr r0, [sp, #4]
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #0x10]
    bl func_0201f484
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
@L_02020bec:
    mov r0, #1
    str r0, [sp]
    ldr r0, [sp, #4]
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #0x10]
    bl __kernel_sin
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r4
    bl func_02021728
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
@L_02020c2c:
    ldr r0, [sp, #4]
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #0x10]
    bl func_0201f484
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r4
    bl func_02021728
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02020c6c(void)
{
    ldr r12, =func_0201d4ec
    bx r12
}

asm void func_02020c78(void)
{
    ldr r12, =func_0201dc1c
    bx r12
}

asm void func_02020c84(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r5, r0
    mov r4, r1
    str r4, [r5]
    add r1, sp, #0x20
    mov r0, #0x10
    str r4, [sp]
    str r1, [sp, #4]
    bl _Znwm
    cmp r0, #0
    beq @L_02020cd0
    mov r2, #1
    str r2, [r0, #4]
    ldr r1, =data_020ab48c
    str r2, [r0, #8]
    str r1, [r0]
    str r4, [r0, #0xc]
@L_02020cd0:
    str r0, [r5, #4]
    mov r1, #0
    add r0, sp, #0
    str r1, [sp]
    bl func_02020d74
    mov r0, r5
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02020cfc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r0, r1
    ldr r1, =data_020ab470
    bl _ZNKSt9type_infoeqERKS_
    cmp r0, #0
    addne r0, r4, #0xc
    moveq r0, #0
    ldmia sp!, {r4, pc}
}

asm void func_02020d24(void)
{
    ldr r0, [r0, #0xc]
    ldr r12, =func_020255e4
    bx r12
}

asm void func_02020d34(void)
{
    stmdb sp!, {r3, r4, r11, lr}
    sub sp, sp, #0x18
    mov r11, sp
    mov r4, r0
    ldr r0, [r4, #4]
    cmp r0, #0
    beq @L_02020d54
    bl _ZNSt3tr16detail25shared_ptr_deleter_common7releaseEv
@L_02020d54:
    add sp, r11, #0x18
    mov r0, r4
    ldmia sp!, {r3, r4, r11, pc}
}

asm void func_02020d60(void)
{
    add r0, r11, #0
    bl func_02024de8
@L_02020d68:
    b @L_02020d68
}

asm void func_02020d6c(void)
{
    add sp, r11, #0x18
    ldmia sp!, {r3, r4, r11, pc}
}

asm void func_02020d74(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4]
    cmp r0, #0
    beq @L_02020d8c
    bl func_020255e4
@L_02020d8c:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02020d94(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02020da8(void)
{
    bx lr
}

asm void func_02020dac(void)
{
    ldr r0, [r0, #4]
    bx lr
}
