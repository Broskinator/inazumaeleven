// (asm for now)

void CTRDGi_InitTaskThread(void);
void func_0201599c(void);
void func_020159b0(void);
void func_02015aa0(void);
void func_02015ae4(void);
void func_02015e9c(void);
void func_02015ee0(void);
void func_02015fa8(void);
void func_0201605c(void);
void func_02016088(void);

void OS_DisableInterrupts(void);
extern char data_020bea88[];
extern char data_020bea8c[];
extern char data_020beeb0[];
void OS_CreateThread(void);
void OS_WakeupThreadDirect(void);
void OS_RestoreInterrupts(void);
void MI_CpuFill8(void);
void OS_SleepThread(void);
void func_02005ea8(void);
extern char data_020aaedc[];
extern char data_020aae1c[];
void MI_CpuCopy8(void);
extern char data_020aae18[];
void func_020169bc(void);
extern char data_020aafdc[];

asm void CTRDGi_InitTaskThread(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, =data_020bea88
    mov r4, r0
    ldr r0, [r1]
    cmp r0, #0
    bne @L_0201597c
    add r0, r5, #0xc4
    str r5, [r1]
    bl func_0201599c
    ldr r0, =data_020bea8c
    bl func_0201599c
    mov r0, #0
    str r0, [r5, #0xc0]
    mov r2, #0x400
    ldr r1, =func_020159b0
    ldr r3, =data_020beeb0
    mov r0, r5
    str r2, [sp]
    mov r2, #0x14
    str r2, [sp, #4]
    mov r2, r5
    bl OS_CreateThread
    mov r0, r5
    bl OS_WakeupThreadDirect
@L_0201597c:
    mov r0, r4
    bl OS_RestoreInterrupts
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0201599c(void)
{
    ldr r12, =MI_CpuFill8
    mov r1, #0
    mov r2, #0x24
    bx r12
}

asm void func_020159b0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    mov r4, #0
    mov r7, r0
    add r5, sp, #0
    mov r9, r4
    mov r8, r4
    mov r11, r4
@L_020159d0:
    mov r0, r5
    mov r1, r11
    mov r2, #0x24
    bl MI_CpuFill8
    bl OS_DisableInterrupts
    ldr r1, [r7, #0xc0]
    mov r6, r0
    cmp r1, #0
    bne @L_02015a08
@L_020159f4:
    mov r0, r4
    bl OS_SleepThread
    ldr r0, [r7, #0xc0]
    cmp r0, #0
    beq @L_020159f4
@L_02015a08:
    ldr lr, [r7, #0xc0]
    add r12, sp, #0
    ldmia lr!, {r0, r1, r2, r3}
    mov r10, r12
    stmia r12!, {r0, r1, r2, r3}
    ldmia lr!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    ldr r1, [lr]
    mov r0, r6
    str r1, [r12]
    bl OS_RestoreInterrupts
    ldr r1, [sp]
    cmp r1, #0
    beq @L_02015a4c
    mov r0, r10
    blx r1
    str r0, [sp, #8]
@L_02015a4c:
    bl OS_DisableInterrupts
    ldr r2, [sp, #4]
    ldr r1, =data_020bea88
    mov r6, r0
    strb r9, [r1, #0x26]
    cmp r2, #0
    beq @L_02015a70
    mov r0, r5
    blx r2
@L_02015a70:
    ldr r0, =data_020bea88
    ldr r0, [r0]
    cmp r0, #0
    beq @L_02015a90
    mov r0, r6
    str r8, [r7, #0xc0]
    bl OS_RestoreInterrupts
    b @L_020159d0
@L_02015a90:
    bl func_02005ea8
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02015aa0(void)
{
    ldr r1, =0x55555555
    ldr r2, =0x33333333
    and r1, r1, r0, lsr #1
    sub r0, r0, r1
    and r1, r0, r2
    and r0, r2, r0, lsr #2
    add r1, r1, r0
    ldr r0, =0xf0f0f0f
    add r1, r1, r1, lsr #4
    and r0, r1, r0
    add r0, r0, r0, lsr #8
    add r0, r0, r0, lsr #16
    and r0, r0, #0xff
    bx lr
}

asm void func_02015ae4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldmia r0, {r2, r3, r12}
    add r4, r0, #0x18
    ldr lr, [r0, #0xc]
    ldr r5, =data_020aaedc
    mov r7, r4
    mov r8, #0
@L_02015b00:
    mvn r1, r3
    and r6, r3, r12
    and r1, r1, lr
    orr r1, r6, r1
    ldr r6, [r7]
    add r1, r2, r1
    ldr r2, [r5]
    add r1, r6, r1
    add r2, r2, r1
    mov r1, r2, lsr #0x19
    orr r1, r1, r2, lsl #7
    add r2, r3, r1
    mvn r1, r2
    and r6, r2, r3
    and r1, r1, r12
    orr r1, r6, r1
    ldr r6, [r7, #4]
    add r1, lr, r1
    ldr r9, [r5, #4]
    add r1, r6, r1
    add r6, r9, r1
    mov r1, r6, lsr #0x14
    orr r1, r1, r6, lsl #12
    add lr, r2, r1
    mvn r1, lr
    and r6, lr, r2
    and r1, r1, r3
    orr r1, r6, r1
    ldr r9, [r7, #8]
    add r6, r12, r1
    ldr r1, [r7, #0xc]
    add r9, r9, r6
    ldr r10, [r5, #8]
    ldr r6, [r5, #0xc]
    add r10, r10, r9
    mov r9, r10, lsr #0xf
    orr r9, r9, r10, lsl #17
    add r12, lr, r9
    add r5, r5, #0x10
    add r7, r7, #0x10
    and r10, r12, lr
    mvn r9, r12
    and r9, r9, r2
    orr r9, r10, r9
    add r3, r3, r9
    add r1, r1, r3
    add r3, r6, r1
    mov r1, r3, lsr #0xa
    orr r1, r1, r3, lsl #22
    add r3, r12, r1
    add r8, r8, #1
    cmp r8, #4
    blt @L_02015b00
    ldr r1, =data_020aae1c
    mov r6, #0
@L_02015bdc:
    mvn r7, lr
    ldr r9, [r1]
    and r8, r3, lr
    and r7, r12, r7
    orr r7, r8, r7
    ldr r8, [r4, r9, lsl #2]
    add r2, r2, r7
    ldr r7, [r5]
    add r2, r8, r2
    add r7, r7, r2
    mov r2, r7, lsr #0x1b
    orr r2, r2, r7, lsl #5
    add r2, r3, r2
    mvn r8, r12
    ldr r7, [r1, #4]
    and r9, r2, r12
    and r8, r3, r8
    orr r10, r9, r8
    mvn r8, r3
    ldr r9, [r1, #8]
    ldr r11, [r4, r7, lsl #2]
    add r7, lr, r10
    add r7, r11, r7
    ldr r10, [r5, #4]
    ldr r9, [r4, r9, lsl #2]
    add r10, r10, r7
    ldr r7, [r1, #0xc]
    and r8, r2, r8
    ldr r7, [r4, r7, lsl #2]
    mov r11, r10, lsr #0x17
    orr r10, r11, r10, lsl #9
    add lr, r2, r10
    ldr r10, [r5, #8]
    and r11, lr, r3
    orr r8, r11, r8
    add r8, r12, r8
    add r8, r9, r8
    add r9, r10, r8
    mov r8, r9, lsr #0x12
    orr r8, r8, r9, lsl #14
    add r12, lr, r8
    mvn r8, r2
    and r9, lr, r8
    ldr r8, [r5, #0xc]
    add r5, r5, #0x10
    add r1, r1, #0x10
    and r10, r12, r2
    orr r9, r10, r9
    add r3, r3, r9
    add r3, r7, r3
    add r7, r8, r3
    mov r3, r7, lsr #0xc
    orr r3, r3, r7, lsl #20
    add r3, r12, r3
    add r6, r6, #1
    cmp r6, #4
    blt @L_02015bdc
    mov r6, #0
@L_02015cc4:
    ldr r8, [r1]
    eor r7, r3, r12
    eor r7, lr, r7
    ldr r8, [r4, r8, lsl #2]
    add r2, r2, r7
    ldr r7, [r5]
    add r2, r8, r2
    add r7, r7, r2
    mov r2, r7, lsr #0x1c
    orr r2, r2, r7, lsl #4
    add r2, r3, r2
    ldr r8, [r1, #4]
    eor r7, r2, r3
    eor r7, r12, r7
    ldr r8, [r4, r8, lsl #2]
    add r7, lr, r7
    ldr r9, [r1, #8]
    ldr r10, [r5, #4]
    add r7, r8, r7
    add r8, r10, r7
    mov r7, r8, lsr #0x15
    orr r7, r7, r8, lsl #11
    add lr, r2, r7
    eor r8, lr, r2
    ldr r7, [r1, #0xc]
    ldr r9, [r4, r9, lsl #2]
    eor r8, r3, r8
    add r8, r12, r8
    add r9, r9, r8
    ldr r10, [r5, #8]
    ldr r8, [r4, r7, lsl #2]
    add r9, r10, r9
    mov r7, r9, lsr #0x10
    orr r7, r7, r9, lsl #16
    add r12, lr, r7
    eor r7, r12, lr
    eor r7, r2, r7
    add r3, r3, r7
    add r3, r8, r3
    ldr r7, [r5, #0xc]
    add r5, r5, #0x10
    add r7, r7, r3
    add r1, r1, #0x10
    mov r3, r7, lsr #9
    orr r3, r3, r7, lsl #23
    add r3, r12, r3
    add r6, r6, #1
    cmp r6, #4
    blt @L_02015cc4
    mov r8, #0
@L_02015d8c:
    mvn r6, lr
    ldr r7, [r1]
    orr r6, r3, r6
    eor r6, r12, r6
    ldr r7, [r4, r7, lsl #2]
    add r2, r2, r6
    ldr r6, [r5]
    add r2, r7, r2
    add r6, r6, r2
    mov r2, r6, lsr #0x1a
    orr r2, r2, r6, lsl #6
    add r2, r3, r2
    mvn r6, r12
    ldr r9, [r1, #4]
    orr r6, r2, r6
    eor r7, r3, r6
    ldr r6, [r1, #8]
    ldr r9, [r4, r9, lsl #2]
    add r7, lr, r7
    ldr r10, [r5, #4]
    add r7, r9, r7
    add r9, r10, r7
    mov r7, r9, lsr #0x16
    orr r9, r7, r9, lsl #10
    ldr r7, [r1, #0xc]
    add lr, r2, r9
    mvn r9, r3
    ldr r6, [r4, r6, lsl #2]
    orr r9, lr, r9
    eor r9, r2, r9
    add r9, r12, r9
    add r9, r6, r9
    ldr r10, [r5, #8]
    ldr r6, [r4, r7, lsl #2]
    add r9, r10, r9
    mov r7, r9, lsr #0x11
    orr r9, r7, r9, lsl #15
    ldr r7, [r5, #0xc]
    add r12, lr, r9
    add r5, r5, #0x10
    add r1, r1, #0x10
    mvn r9, r2
    orr r9, r12, r9
    eor r9, lr, r9
    add r3, r3, r9
    add r3, r6, r3
    add r6, r7, r3
    mov r3, r6, lsr #0xb
    orr r3, r3, r6, lsl #21
    add r3, r12, r3
    add r8, r8, #1
    cmp r8, #4
    blt @L_02015d8c
    ldr r6, [r0]
    ldr r5, [r0, #4]
    ldr r4, [r0, #8]
    ldr r1, [r0, #0xc]
    add r6, r6, r2
    add r3, r5, r3
    add r2, r4, r12
    add r1, r1, lr
    str r6, [r0]
    str r3, [r0, #4]
    str r2, [r0, #8]
    str r1, [r0, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02015e9c(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, =0x67452301
    mov r2, #0
    ldr r12, =0xefcdab89
    ldr r3, =0x98badcfe
    ldr r1, =0x10325476
    str lr, [r0]
    str r12, [r0, #4]
    str r3, [r0, #8]
    str r1, [r0, #0xc]
    str r2, [r0, #0x10]
    str r2, [r0, #0x14]
    ldmia sp!, {r3, pc}
}

asm void func_02015ee0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    ldr r4, [r7, #0x10]
    ldr r0, [r7, #0x14]
    mov r5, r2
    adds r12, r4, r5
    and r3, r4, #0x3f
    adc lr, r0, #0
    rsb r4, r3, #0x40
    mov r6, r1
    str r12, [r7, #0x10]
    str lr, [r7, #0x14]
    cmp r4, r5
    bls @L_02015f34
    cmp r5, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r1, r7, #0x18
    mov r0, r6
    add r1, r1, r3
    bl MI_CpuCopy8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02015f34:
    add r1, r7, #0x18
    mov r0, r6
    mov r2, r4
    add r1, r1, r3
    bl MI_CpuCopy8
    mov r0, r7
    bl func_02015ae4
    sub r5, r5, r4
    mov r8, r5, lsr #6
    cmp r8, #0
    add r6, r6, r4
    ble @L_02015f90
    mov r4, #0x40
@L_02015f68:
    mov r0, r6
    mov r2, r4
    add r1, r7, #0x18
    bl MI_CpuCopy8
    mov r0, r7
    add r6, r6, #0x40
    bl func_02015ae4
    sub r8, r8, #1
    cmp r8, #0
    bgt @L_02015f68
@L_02015f90:
    ands r2, r5, #0x3f
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r6
    add r1, r7, #0x18
    bl MI_CpuCopy8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02015fa8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    ldr r2, [r5, #0x14]
    mov r4, r1
    ldr r12, [r5, #0x10]
    mov r7, r2, lsl #3
    ldr r1, =data_020aae18
    mov r2, #1
    orr r7, r7, r12, lsr #29
    mov r6, r12, lsl #3
    bl func_02015ee0
    ldr r0, [r5, #0x10]
    mov r1, #0
    and r8, r0, #0x3f
    rsb r2, r8, #0x40
    cmp r2, #8
    bhs @L_02016008
    add r0, r5, #0x18
    add r0, r0, r8
    mov r8, r1
    bl MI_CpuFill8
    mov r0, r5
    bl func_02015ae4
    mov r2, #0x40
@L_02016008:
    cmp r2, #8
    bls @L_02016024
    add r0, r5, #0x18
    add r0, r0, r8
    sub r2, r2, #8
    mov r1, #0
    bl MI_CpuFill8
@L_02016024:
    mov r0, r5
    str r6, [r5, #0x50]
    str r7, [r5, #0x54]
    bl func_02015ae4
    mov r0, r5
    mov r1, r4
    mov r2, #0x10
    bl MI_CpuCopy8
    mov r0, r5
    mov r1, #0
    mov r2, #0x58
    bl MI_CpuFill8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_0201605c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r4, [r6, #0x2c]
    mov r1, #0
    ldr r5, [r6, #0x4c]
    str r1, [r6, #0x2c]
    str r1, [r6, #0x4c]
    bl func_020169bc
    str r4, [r6, #0x2c]
    str r5, [r6, #0x4c]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02016088(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    movs r7, r2
    mov r9, r0
    mov r8, r1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r10, =data_020aafdc
    add r5, r9, #0x14
    mov r4, #0
@L_020160a8:
    ldr r0, [r9, #0x54]
    mov r1, r8
    rsb r6, r0, #0x40
    cmp r6, r7
    movhi r6, r7
    mov r2, r6
    add r0, r5, r0
    bl MI_CpuFill8
    ldr r0, [r9, #0x54]
    sub r7, r7, r6
    add r0, r0, r6
    str r0, [r9, #0x54]
    cmp r0, #0x40
    blo @L_02016108
    ldr r1, [r10]
    mov r0, r9
    blx r1
    ldr r0, [r9, #0x58]
    str r4, [r9, #0x54]
    adds r0, r0, #1
    str r0, [r9, #0x58]
    ldreq r0, [r9, #0x5c]
    addeq r0, r0, #1
    streq r0, [r9, #0x5c]
@L_02016108:
    cmp r7, #0
    bne @L_020160a8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
