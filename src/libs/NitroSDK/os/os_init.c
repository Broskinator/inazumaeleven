// (asm for now)

void func_0200afc0(void);
void func_02005598(void);
void OS_InitIrqTable(void);
void OS_SetIrqStackChecker(void);
void func_02007734(void);
void MI_Init(void);
void func_02007fc4(void);
void OSi_InitVramExclusive(void);
void func_02005c5c(void);
void func_020084a8(void);
void func_020155d0(void);
void CARD_Init(void);
void func_0200f38c(void);
extern char data_020bb390[];
void func_0200659c(void);
void func_0200770c(void);
extern char data_027e0000[];

asm void OSi_WaitVCount0(void)
{
    mov r12, #0x4000000
    ldr r1, [r12, #0x208]
    str r12, [r12, #0x208]
@L_02006dc4:
    ldrh r0, [r12, #6]
    cmp r0, #0
    bne @L_02006dc4
    str r1, [r12, #0x208]
    bx lr
}

asm void func_02006dd8(void)
{
    ldr r12, =func_02006de4
    bx r12
}

asm void func_02006de4(void)
{
    stmdb sp!, {r3, lr}
    bl func_0200afc0
    bl func_02006e2c
    bl func_02005598
    bl func_02006f48
    bl OS_InitIrqTable
    bl OS_SetIrqStackChecker
    bl func_02007734
    bl MI_Init
    bl func_02007fc4
    bl OSi_InitVramExclusive
    bl func_02005c5c
    bl func_020084a8
    bl func_020155d0
    bl CARD_Init
    bl func_0200f38c
    bl OSi_WaitVCount0
    ldmia sp!, {r3, pc}
}

asm void func_02006e2c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_020bb390
    ldr r0, [r1]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r5, #0
    mov r2, #1
    mov r0, r5
    str r2, [r1]
    bl func_02006fb8
    mov r1, r0
    mov r0, r5
    bl func_0200713c
    mov r0, r5
    bl func_02007098
    mov r1, r0
    mov r0, r5
    bl func_02007150
    mov r4, #2
    mov r0, r4
    mov r1, r5
    bl func_02007150
    mov r0, r4
    mov r1, r5
    bl func_0200713c
    mov r4, #3
    mov r0, r4
    bl func_02006fb8
    mov r1, r0
    mov r0, r4
    bl func_0200713c
    mov r0, r4
    bl func_02007098
    mov r1, r0
    mov r0, r4
    bl func_02007150
    mov r4, #4
    mov r0, r4
    bl func_02006fb8
    mov r1, r0
    mov r0, r4
    bl func_0200713c
    mov r0, r4
    bl func_02007098
    mov r1, r0
    mov r0, r4
    bl func_02007150
    mov r4, #5
    mov r0, r4
    bl func_02006fb8
    mov r1, r0
    mov r0, r4
    bl func_0200713c
    mov r0, r4
    bl func_02007098
    mov r1, r0
    mov r0, r4
    bl func_02007150
    mov r4, #6
    mov r0, r4
    bl func_02006fb8
    mov r1, r0
    mov r0, r4
    bl func_0200713c
    mov r0, r4
    bl func_02007098
    mov r1, r0
    mov r0, r4
    bl func_02007150
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02006f48(void)
{
    stmdb sp!, {r4, lr}
    bl func_0200659c
    mov r4, #2
    mov r0, r4
    bl func_02006fb8
    mov r1, r0
    mov r0, r4
    bl func_0200713c
    mov r0, r4
    bl func_02007098
    mov r1, r0
    mov r0, r4
    bl func_02007150
    mov r0, #1
    mov r1, #0x2000000
    mov r2, #0x2a
    bl func_0200770c
    ldmia sp!, {r4, pc}
}

asm void func_02006f90(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    ldr r0, [r0, #0xdc4]
    bx lr
}

asm void func_02006fa4(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    ldr r0, [r0, #0xda0]
    bx lr
}

asm void func_02006fb8(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    b @L_02007070
    b @L_02006fe4
    b @L_02007070
    b @L_02006fec
    b @L_02007018
    b @L_02007020
    b @L_02007060
    b @L_02007068
@L_02006fe4:
    ldr r0, =0x23e0000
    ldmia sp!, {r3, pc}
@L_02006fec:
    ldr r0, =data_020bb390
    ldr r0, [r0, #4]
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_0200659c
    and r0, r0, #0xf
    cmp r0, #1
    moveq r0, #0
    movne r0, #0x2700000
    ldmia sp!, {r3, pc}
@L_02007018:
    mov r0, #0x2000000
    ldmia sp!, {r3, pc}
@L_02007020:
    ldr r0, =data_027e0000
    ldr r1, =0x0
    ldr r2, =0x400
    add r3, r0, #0x3f80
    cmp r1, #0
    sub r2, r3, r2
    bne @L_0200704c
    ldr r1, =0x27e0080
    cmp r0, r1
    movlo r0, r1
    ldmia sp!, {r3, pc}
@L_0200704c:
    cmp r1, #0
    ldrlt r0, =0x27e0080
    sublt r0, r0, r1
    subge r0, r2, r1
    ldmia sp!, {r3, pc}
@L_02007060:
    ldr r0, =0x2fff680
    ldmia sp!, {r3, pc}
@L_02007068:
    ldr r0, =0x37f8000
    ldmia sp!, {r3, pc}
@L_02007070:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void func_02007098(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    b @L_02007118
    b @L_020070c4
    b @L_02007118
    b @L_020070cc
    b @L_020070f8
    b @L_02007100
    b @L_02007108
    b @L_02007110
@L_020070c4:
    ldr r0, =0x2182400
    ldmia sp!, {r3, pc}
@L_020070cc:
    ldr r0, =data_020bb390
    ldr r0, [r0, #4]
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_0200659c
    and r0, r0, #0xf
    cmp r0, #1
    moveq r0, #0
    ldrne r0, =0x23e0000
    ldmia sp!, {r3, pc}
@L_020070f8:
    ldr r0, =0x1fff420
    ldmia sp!, {r3, pc}
@L_02007100:
    ldr r0, =0x27e0080
    ldmia sp!, {r3, pc}
@L_02007108:
    ldr r0, =0x2fff000
    ldmia sp!, {r3, pc}
@L_02007110:
    ldr r0, =0x37f8000
    ldmia sp!, {r3, pc}
@L_02007118:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void func_0200713c(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    str r1, [r0, #0xdc4]
    bx lr
}

asm void func_02007150(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    str r1, [r0, #0xda0]
    bx lr
}
