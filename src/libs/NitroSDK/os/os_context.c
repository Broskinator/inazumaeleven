// (asm for now)

void OS_InitContext(void);
void OS_SaveContext(void);
void OS_LoadContext(void);
void func_0200659c(void);
void func_020065d0(void);
void func_02006654(void);
void func_0200666c(void);
void func_02006698(void);
void func_020067a8(void);
void func_020067c0(void);

void CP_SaveContext(void);
void CPi_RestoreContext(void);
extern char data_020aad78[];
void WaitByLoop(void);
void func_0200848c(void);
extern char data_020a3e6c[];
extern char data_020bb378[];

asm void OS_InitContext(void)
{
    add r1, r1, #4
    str r1, [r0, #0x40]
    str r2, [r0, #0x44]
    sub r2, r2, #0x40
    tst r2, #4
    subne r2, r2, #4
    str r2, [r0, #0x38]
    ands r1, r1, #1
    movne r1, #0x3f
    moveq r1, #0x1f
    str r1, [r0]
    mov r1, #0
    str r1, [r0, #4]
    str r1, [r0, #8]
    str r1, [r0, #0xc]
    str r1, [r0, #0x10]
    str r1, [r0, #0x14]
    str r1, [r0, #0x18]
    str r1, [r0, #0x1c]
    str r1, [r0, #0x20]
    str r1, [r0, #0x24]
    str r1, [r0, #0x28]
    str r1, [r0, #0x2c]
    str r1, [r0, #0x30]
    str r1, [r0, #0x34]
    str r1, [r0, #0x3c]
    bx lr
}

asm void OS_SaveContext(void)
{
    stmdb sp!, {r0, lr}
    add r0, r0, #0x48
    ldr r1, =CP_SaveContext
    blx r1
    ldmia sp!, {r0, lr}
    add r1, r0, #0
    mrs r2, CPSR
    str r2, [r1], #4
    mov r0, #0xd3
    msr cpsr_c, r0
    str sp, [r1, #0x40]
    msr cpsr_c, r2
    mov r0, #1
    stmia r1, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, sp, lr}
    add r0, pc, #8
    str r0, [r1, #0x3c]
    mov r0, #0
    bx lr
}

asm void OS_LoadContext(void)
{
    stmdb sp!, {r0, lr}
    add r0, r0, #0x48
    ldr r1, =CPi_RestoreContext
    blx r1
    ldmia sp!, {r0, lr}
    mrs r1, CPSR
    bic r1, r1, #0x1f
    orr r1, r1, #0xd3
    msr cpsr_c, r1
    ldr r1, [r0], #4
    msr spsr_fsxc, r1
    ldr sp, [r0, #0x40]
    ldr lr, [r0, #0x3c]
    ldmia r0, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, sp, lr} ^
    mov r0, r0
    subs pc, lr, #4
}

asm void func_0200659c(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020aad78
    ldr r0, [r4, #4]
    cmn r0, #1
    ldmneia sp!, {r4, pc}
    mov r0, #0x80000001
    str r0, [r4, #4]
    bl func_02006654
    ldr r1, [r4, #4]
    orr r0, r1, r0
    str r0, [r4, #4]
    ldmia sp!, {r4, pc}
}

asm void func_020065d0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =0x2fffffa
    ldrh r0, [r5]
    cmp r0, #0
    bne @L_020065fc
    mov r4, #0x40
@L_020065e8:
    mov r0, r4
    bl WaitByLoop
    ldrh r0, [r5]
    cmp r0, #0
    beq @L_020065e8
@L_020065fc:
    ldr r0, =data_020aad78
    ldr r0, [r0]
    cmn r0, #1
    bne @L_02006640
    bl func_0200666c
    movs r4, r0
    bne @L_02006620
    bl func_02006698
    mov r4, r0
@L_02006620:
    bl func_02006654
    ldr r2, =0x2fffffa
    orr r1, r0, r4
    ldrh r2, [r2]
    ldr r0, =data_020aad78
    and r2, r2, #0xf
    orr r1, r2, r1
    str r1, [r0]
@L_02006640:
    ldr r0, =data_020aad78
    ldr r0, [r0]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02006654(void)
{
    stmdb sp!, {r3, lr}
    bl func_0200848c
    ldr r1, =data_020a3e6c
    ldr r0, [r1, r0, lsl #2]
    ldmia sp!, {r3, pc}
}

asm void func_0200666c(void)
{
    ldr r0, =data_020bb378
    ldr r1, [r0, #0x10]
    cmp r1, #0
    moveq r1, #0
    streq r1, [r0, #0xc]
    moveq r1, #1
    streq r1, [r0, #0x10]
    ldr r0, =data_020bb378
    ldr r0, [r0, #0xc]
    bx lr
}

asm void func_02006698(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020bb378
    ldr r0, [r4, #8]
    cmp r0, #0
    bne @L_02006794
    ldr r1, =0x2fffdf4
    ldrb r0, [r1]
    and r0, r0, #3
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0200678c
    b @L_020066d4
    b @L_02006758
    b @L_02006768
    b @L_02006784
@L_020066d4:
    ldr r0, =0x2fffffa
    ldrh r0, [r0]
    and r0, r0, #0xf
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_02006750
    b @L_02006750
    b @L_02006710
    b @L_02006724
    b @L_02006750
    b @L_02006744
    b @L_02006750
    b @L_02006750
    b @L_02006750
    b @L_0200674c
@L_02006710:
    bl func_020067c0
    cmp r0, #0
    movne r0, #0x1800000
    moveq r0, #0x80000000
    b @L_02006788
@L_02006724:
    sub r0, r1, #0x1e0
    ldrh r0, [r0]
    cmp r0, #1
    moveq r0, #0x40000000
    streq r0, [r4, #0x14]
    movne r0, #0
    strne r0, [r4, #0x14]
    b @L_0200678c
@L_02006744:
    mov r0, #0x1800000
    b @L_02006788
@L_0200674c:
    b @L_02006750
@L_02006750:
    mov r0, #0
    b @L_02006788
@L_02006758:
    ldrb r0, [r1, #1]
    tst r0, #2
    movne r0, #0x2100000
    b @L_02006774
@L_02006768:
    ldrb r0, [r1, #1]
    tst r0, #2
    movne r0, #0x2200000
@L_02006774:
    strne r0, [r4, #0x14]
    moveq r0, #0x1400000
    streq r0, [r4, #0x14]
    b @L_0200678c
@L_02006784:
    mov r0, #0x1480000
@L_02006788:
    str r0, [r4, #0x14]
@L_0200678c:
    mov r0, #1
    str r0, [r4, #8]
@L_02006794:
    ldr r0, [r4, #0x14]
    ldmia sp!, {r4, pc}
}

asm void func_020067a8(void)
{
    stmdb sp!, {r3, lr}
    bl func_0200659c
    tst r0, #0x10000000
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, pc}
}

asm void func_020067c0(void)
{
    ldr r0, =data_020bb378
    ldr r1, [r0]
    cmp r1, #0
    bne @L_020067f0
    ldr r1, =0x2fffffa
    ldrh r1, [r1]
    tst r1, #0x8000
    movne r1, #1
    strne r1, [r0, #4]
    ldr r0, =data_020bb378
    mov r1, #1
    str r1, [r0]
@L_020067f0:
    ldr r0, =data_020bb378
    ldr r0, [r0, #4]
    bx lr
}
