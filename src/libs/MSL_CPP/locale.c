// (asm for now)

void _ZNSsD1Ev(void);
void func_02020ddc(void);
void func_02020ef0(void);
void func_0202128c(void);
void _ZNSs7replaceIPcEERSsmmT_S3_PNN10Metrowerks11restrict_toIXsrNS4_4_notINS4_11is_integralIS3_EEEE5valueEvEE4typeE(void);
void func_020212f4(void);
void func_0202130c(void);
void func_0202132c(void);
void func_02021344(void);
void func_02021364(void);
void func_0202137c(void);

void _ZdlPv(void);
extern char data_020ab630[];
extern char data_020ab5ec[];
void strlen(void);
void _Znam(void);
void func_02020c84(void);
void strcpy(void);
extern char data_020ab5c4[];
extern char data_020ab64c[];
void func_02025b10(void);
extern char data_020ab684[];
extern char data_020ab5d8[];
extern char data_020ab5f8[];
void _Znwm(void);
void func_02018328(void);
void func_02018348(void);
extern char data_020ab554[];
void func_02020d34(void);

asm void _ZNSsD1Ev(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq @L_02020dd4
    ldr r0, [r4, #8]
    bl _ZdlPv
@L_02020dd4:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02020ddc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r4, [r3]
    mov r10, r0
    mov r0, r4, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldreqb r0, [r3]
    addeq r4, r3, #1
    mov r9, r1
    moveq r0, r0, lsl #0x18
    moveq r5, r0, lsr #0x19
    ldrne r5, [r3, #4]
    ldr r0, [sp, #0x40]
    ldrne r4, [r3, #8]
    mov r8, r2
    cmp r0, r5
    bls @L_02020e88
    ldr r11, =data_020ab630
    ldr r1, =data_020ab5ec
    add r7, sp, #0x10
    mov r0, r11
    str r1, [sp, #0x10]
    add r6, sp, #0x14
    bl strlen
    add r0, r0, #1
    rsb r0, r0, r0, lsl #1
    bl _Znam
    mov r1, #0
    sub r2, sp, #4
    strb r1, [r2]
    mov r1, r0
    ldr r2, [r2]
    mov r0, r6
    bl func_02020c84
    ldr r0, [r6]
    mov r1, r11
    bl strcpy
    ldr r3, =data_020ab5c4
    ldr r0, =data_020ab64c
    ldr r2, =func_02021364
    mov r1, r7
    str r3, [sp, #0x10]
    bl func_02025b10
@L_02020e88:
    ldr r2, [sp, #0x40]
    ldr r0, [sp, #0x44]
    sub r1, r5, r2
    cmp r1, r0
    addlo r0, sp, #0xc
    str r1, [sp, #0xc]
    add r4, r4, r2
    addhs r0, sp, #0x44
    ldr r0, [r0]
    ldrb r5, [sp, #9]
    str r0, [sp, #0x44]
    add r0, r4, r0
    str r0, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r4
    strb r5, [sp, #4]
    bl func_02020ef0
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02020ef0(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r5, r0
    ldr r0, [r5]
    mov r4, r1
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    movne r0, #1
    strne r0, [sp, #4]
    moveq r0, #0
    streq r0, [sp, #4]
    ldr r0, [sp, #4]
    str r3, [sp]
    cmp r0, #0
    ldmneia r5, {r0, r7}
    movne r0, r0, lsr #1
    ldr r11, [sp, #0x80]
    ldrne r6, [r5, #8]
    strne r0, [sp, #0x18]
    bne @L_02020f5c
    ldrb r1, [r5]
    mov r0, #0xb
    str r0, [sp, #0x18]
    mov r0, r1, lsl #0x18
    add r6, r5, #1
    mov r7, r0, lsr #0x19
@L_02020f5c:
    cmp r4, r7
    bls @L_02020fcc
    ldr r10, =data_020ab630
    ldr r1, =data_020ab5ec
    add r9, sp, #0x3c
    mov r0, r10
    str r1, [sp, #0x3c]
    add r8, sp, #0x40
    bl strlen
    add r0, r0, #1
    rsb r0, r0, r0, lsl #1
    bl _Znam
    mov r1, #0
    sub r2, sp, #4
    strb r1, [r2]
    mov r1, r0
    ldr r2, [r2]
    mov r0, r8
    bl func_02020c84
    ldr r0, [r8]
    mov r1, r10
    bl strcpy
    ldr r3, =data_020ab5c4
    ldr r0, =data_020ab64c
    ldr r2, =func_02021364
    mov r1, r9
    str r3, [sp, #0x3c]
    bl func_02025b10
@L_02020fcc:
    ldr r0, [sp, #0x78]
    sub r1, r7, r4
    cmp r1, r0
    ldr r0, [sp]
    str r1, [sp, #0x20]
    addlo r1, sp, #0x20
    addhs r1, sp, #0x78
    sub r9, r11, r0
    mvn r0, #0x80000001
    cmp r9, r0
    ldr r8, [r1]
    bhi @L_0202100c
    sub r1, r7, r8
    sub r0, r0, r9
    cmp r1, r0
    bls @L_02021078
@L_0202100c:
    ldr r1, =data_020ab5ec
    ldr r0, =data_020ab684
    str r1, [sp, #0x30]
    add r1, sp, #0x34
    add r10, sp, #0x30
    str r1, [sp, #0x10]
    bl strlen
    add r0, r0, #1
    rsb r0, r0, r0, lsl #1
    bl _Znam
    mov r2, #0
    sub r3, sp, #4
    mov r1, r0
    strb r2, [r3]
    ldr r0, [sp, #0x10]
    ldr r2, [r3]
    bl func_02020c84
    ldr r0, [sp, #0x10]
    ldr r1, =data_020ab684
    ldr r0, [r0]
    bl strcpy
    ldr r1, =data_020ab5d8
    ldr r0, =data_020ab5f8
    ldr r2, =func_0202132c
    str r1, [sp, #0x30]
    mov r1, r10
    bl func_02025b10
@L_02021078:
    sub r0, r7, r8
    add r10, r9, r0
    ldr r0, [sp, #0x18]
    add r1, r4, r8
    cmp r10, r0
    sub r0, r7, r1
    str r0, [sp, #0x14]
    blo @L_02021170
    ldr r0, [sp, #0x18]
    add r1, r10, #1
    add r0, r0, #0xf
    bic r7, r0, #0xf
    cmp r7, r1
    bhs @L_020210c4
@L_020210b0:
    mov r0, r7, lsl #1
    add r0, r0, #0xf
    bic r7, r0, #0xf
    cmp r7, r1
    blo @L_020210b0
@L_020210c4:
    mov r0, r7
    bl _Znwm
    str r0, [sp, #0xc]
    cmp r4, #0
    beq @L_020210e4
    mov r1, r6
    mov r2, r4
    bl func_02018328
@L_020210e4:
    ldr r0, [sp, #0xc]
    ldr r1, [sp]
    add r0, r0, r4
    sub r2, r11, r1
    str r0, [sp, #8]
    bl func_02018348
    ldr r0, [sp, #0x14]
    cmp r0, #0
    beq @L_02021120
    mov r2, r0
    ldr r0, [sp, #8]
    add r1, r6, r4
    add r0, r0, r9
    add r1, r1, r8
    bl func_02018328
@L_02021120:
    ldr r1, =data_020ab554
    ldr r0, [sp, #4]
    ldrb r1, [r1, #1]
    cmp r0, #0
    ldr r0, [sp, #0xc]
    strb r1, [r0, r10]
    ldreq r0, [r5]
    biceq r0, r0, #1
    orreq r0, r0, #1
    streq r0, [r5]
    beq @L_02021154
    mov r0, r6
    bl _ZdlPv
@L_02021154:
    ldr r0, [sp, #0xc]
    ldr r1, [r5]
    str r0, [r5, #8]
    and r0, r1, #1
    orr r0, r0, r7, lsl #1
    stmia r5, {r0, r10}
    b @L_02021250
@L_02021170:
    mov r1, #0
    add r0, sp, #0x24
    mov r3, r1
@L_0202117c:
    str r3, [r0, r1, lsl #2]
    add r1, r1, #1
    cmp r1, #3
    blo @L_0202117c
    ldr r0, [sp, #0x14]
    cmp r0, #0
    beq @L_020211e4
    add r0, r6, r4
    add r0, r0, r9
    cmp r0, r11
    bhs @L_020211e4
    add r0, r6, r7
    cmp r11, r0
    bhi @L_020211e4
    add r7, sp, #0x24
    ldr r1, [sp]
    mov r0, r7
    mov r2, r11
    bl func_0202128c
    ldr r0, [sp, #0x24]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    addeq r0, r7, #1
    streq r0, [sp]
    ldrne r0, [r7, #8]
    strne r0, [sp]
@L_020211e4:
    ldr r0, [sp, #0x14]
    cmp r0, #0
    beq @L_02021204
    add r1, r6, r4
    mov r2, r0
    add r0, r1, r9
    add r1, r1, r8
    bl func_02018348
@L_02021204:
    ldr r1, [sp]
    mov r2, r9
    add r0, r6, r4
    bl func_02018348
    ldr r0, [sp, #4]
    ldr r1, =data_020ab554
    cmp r0, #0
    ldrb r0, [r1]
    strb r0, [r6, r10]
    strne r10, [r5, #4]
    bne @L_02021248
    ldrb r1, [r5]
    and r0, r10, #0xff
    mov r0, r0, lsl #0x19
    bic r1, r1, #0xfe
    orr r0, r1, r0, lsr #24
    strb r0, [r5]
@L_02021248:
    add r0, sp, #0x24
    bl _ZNSsD1Ev
@L_02021250:
    mov r0, r5
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_0202128c(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r12, [r0]
    mov r3, r1
    mov r1, r12, lsl #0x1f
    movs r1, r1, lsr #0x1f
    ldreqb r1, [r0]
    moveq r1, r1, lsl #0x18
    moveq r12, r1, lsr #0x19
    ldrne r12, [r0, #4]
    mov r1, #0
    str r2, [sp]
    mov r2, r12
    str r1, [sp, #4]
    bl _ZNSs7replaceIPcEERSsmmT_S3_PNN10Metrowerks11restrict_toIXsrNS4_4_notINS4_11is_integralIS3_EEEE5valueEvEE4typeE
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void _ZNSs7replaceIPcEERSsmmT_S3_PNN10Metrowerks11restrict_toIXsrNS4_4_notINS4_11is_integralIS3_EEEE5valueEvEE4typeE(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    ldr lr, [sp, #0x10]
    ldrb r12, [sp, #8]
    str lr, [sp]
    strb r12, [sp, #4]
    bl func_02020ef0
    add sp, sp, #0xc
    ldmia sp!, {pc}
}

asm void func_020212f4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #4
    bl func_02020d34
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0202130c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #4
    bl func_02020d34
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0202132c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #4
    bl func_02020d34
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02021344(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #4
    bl func_02020d34
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02021364(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #4
    bl func_02020d34
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0202137c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #4
    bl func_02020d34
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}
