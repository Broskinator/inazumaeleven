// (asm for now)

void OSi_WaitVCount0(void);
void func_02006dd8(void);
void func_02006de4(void);
void OS_InitArena(void);
void OS_InitArenaEx(void);
void OS_GetArenaHi(void);
void OS_GetArenaLo(void);
void OS_GetInitArenaHi(void);
void OS_GetInitArenaLo(void);
void OS_SetArenaHi(void);
void OS_SetArenaLo(void);

void PXI_Init(void);
void OS_InitLock(void);
void OS_InitIrqTable(void);
void OS_SetIrqStackChecker(void);
void OS_InitException(void);
void MI_Init(void);
void OS_InitVAlarm(void);
void OSi_InitVramExclusive(void);
void OS_InitThread(void);
void OS_InitReset(void);
void CTRDG_Init(void);
void CARD_Init(void);
void PM_Init(void);
extern char data_020bb390[];
void OS_GetConsoleType(void);
void OS_SetProtectionRegionEx(void);
extern char OS_IRQTable[];

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
    bl PXI_Init
    bl OS_InitArena
    bl OS_InitLock
    bl OS_InitArenaEx
    bl OS_InitIrqTable
    bl OS_SetIrqStackChecker
    bl OS_InitException
    bl MI_Init
    bl OS_InitVAlarm
    bl OSi_InitVramExclusive
    bl OS_InitThread
    bl OS_InitReset
    bl CTRDG_Init
    bl CARD_Init
    bl PM_Init
    bl OSi_WaitVCount0
    ldmia sp!, {r3, pc}
}

asm void OS_InitArena(void)
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
    bl OS_GetInitArenaHi
    mov r1, r0
    mov r0, r5
    bl OS_SetArenaHi
    mov r0, r5
    bl OS_GetInitArenaLo
    mov r1, r0
    mov r0, r5
    bl OS_SetArenaLo
    mov r4, #2
    mov r0, r4
    mov r1, r5
    bl OS_SetArenaLo
    mov r0, r4
    mov r1, r5
    bl OS_SetArenaHi
    mov r4, #3
    mov r0, r4
    bl OS_GetInitArenaHi
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaHi
    mov r0, r4
    bl OS_GetInitArenaLo
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaLo
    mov r4, #4
    mov r0, r4
    bl OS_GetInitArenaHi
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaHi
    mov r0, r4
    bl OS_GetInitArenaLo
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaLo
    mov r4, #5
    mov r0, r4
    bl OS_GetInitArenaHi
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaHi
    mov r0, r4
    bl OS_GetInitArenaLo
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaLo
    mov r4, #6
    mov r0, r4
    bl OS_GetInitArenaHi
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaHi
    mov r0, r4
    bl OS_GetInitArenaLo
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaLo
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OS_InitArenaEx(void)
{
    stmdb sp!, {r4, lr}
    bl OS_GetConsoleType
    mov r4, #2
    mov r0, r4
    bl OS_GetInitArenaHi
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaHi
    mov r0, r4
    bl OS_GetInitArenaLo
    mov r1, r0
    mov r0, r4
    bl OS_SetArenaLo
    mov r0, #1
    mov r1, #0x2000000
    mov r2, #0x2a
    bl OS_SetProtectionRegionEx
    ldmia sp!, {r4, pc}
}

asm void OS_GetArenaHi(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    ldr r0, [r0, #0xdc4]
    bx lr
}

asm void OS_GetArenaLo(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    ldr r0, [r0, #0xda0]
    bx lr
}

asm void OS_GetInitArenaHi(void)
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
    bl OS_GetConsoleType
    and r0, r0, #0xf
    cmp r0, #1
    moveq r0, #0
    movne r0, #0x2700000
    ldmia sp!, {r3, pc}
@L_02007018:
    mov r0, #0x2000000
    ldmia sp!, {r3, pc}
@L_02007020:
    ldr r0, =OS_IRQTable
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

asm void OS_GetInitArenaLo(void)
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
    bl OS_GetConsoleType
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

asm void OS_SetArenaHi(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    str r1, [r0, #0xdc4]
    bx lr
}

asm void OS_SetArenaLo(void)
{
    mov r0, r0, lsl #2
    add r0, r0, #0x2f00000
    add r0, r0, #0xff000
    str r1, [r0, #0xda0]
    bx lr
}
