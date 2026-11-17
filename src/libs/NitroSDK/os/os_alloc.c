// (asm for now)

void DLExtract(void);
void DLInsert(void);
void OS_AllocFromHeap(void);
void OS_FreeToHeap(void);
void OS_SetCurrentHeap(void);
void OS_InitAlloc(void);
void OS_CreateHeap(void);
void OS_IsOnVram(void);
void OS_GetDTCMAddress(void);
void OS_EnableProtectionUnit(void);
void OS_DisableProtectionUnit(void);
void OS_EnableICacheForProtectionRegion(void);
void OS_DisableICacheForProtectionRegion(void);
void OS_EnableDCacheForProtectionRegion(void);
void OS_DisableDCacheForProtectionRegion(void);
void OS_SetDPermissionsForProtectionRegion(void);
void OS_EnableWriteBufferForProtectionRegion(void);
void OS_DisableWriteBufferForProtectionRegion(void);
void OS_SetProtectionRegionParam(void);
void func_0200768c(void);
void func_02007694(void);
void func_0200769c(void);
void func_020076a4(void);
void func_020076ac(void);
void func_020076b4(void);
void func_020076bc(void);
void func_020076c4(void);
void func_020076cc(void);
void func_020076d4(void);
void func_020076dc(void);
void func_020076e4(void);
void func_020076ec(void);
void func_020076f4(void);
void func_020076fc(void);
void func_02007704(void);
void OS_SetProtectionRegionEx(void);
void OS_InitException(void);
void func_0200779c(void);

void OS_DisableInterrupts(void);
extern char OSiHeapInfo[];
void OS_RestoreInterrupts(void);
void DLAddFront(void);
extern char data_020aad80[];
extern char OSi_DebuggerHandler[];
void OSi_ExceptionHandler(void);

asm void DLExtract(void)
{
    ldr r3, [r1, #4]
    cmp r3, #0
    ldrne r2, [r1]
    strne r2, [r3]
    ldr r2, [r1]
    cmp r2, #0
    ldreq r0, [r1, #4]
    ldrne r1, [r1, #4]
    strne r1, [r2, #4]
    bx lr
}

asm void DLInsert(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r0
    cmp r0, #0
    mov r12, #0
    beq @L_02007240
@L_02007228:
    cmp r1, lr
    bls @L_02007240
    mov r12, lr
    ldr lr, [lr, #4]
    cmp lr, #0
    bne @L_02007228
@L_02007240:
    stmia r1, {r12, lr}
    cmp lr, #0
    beq @L_0200727c
    str r1, [lr]
    ldr r3, [r1, #8]
    add r2, r1, r3
    cmp r2, lr
    bne @L_0200727c
    ldr r2, [lr, #8]
    add r2, r3, r2
    str r2, [r1, #8]
    ldr lr, [lr, #4]
    str lr, [r1, #4]
    cmp lr, #0
    strne r1, [lr]
@L_0200727c:
    cmp r12, #0
    beq @L_020072b4
    str r1, [r12, #4]
    ldr r2, [r12, #8]
    add r3, r12, r2
    cmp r3, r1
    ldmneia sp!, {r3, pc}
    ldr r1, [r1, #8]
    cmp lr, #0
    add r1, r2, r1
    str r1, [r12, #8]
    str lr, [r12, #4]
    strne r12, [lr]
    ldmia sp!, {r3, pc}
@L_020072b4:
    mov r0, r1
    ldmia sp!, {r3, pc}
}

asm void OS_AllocFromHeap(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r5, r1
    mov r7, r2
    bl OS_DisableInterrupts
    ldr r1, =OSiHeapInfo
    mov r6, r0
    ldr r1, [r1, r4, lsl #2]
    cmp r1, #0
    bne @L_020072f0
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020072f0:
    cmp r5, #0
    ldrlt r5, [r1]
    ldr r1, [r1, #0x10]
    mov r0, #0xc
    mla r4, r5, r0, r1
    ldr r0, [r4, #4]
    add r1, r7, #0x3f
    mov r5, r0
    cmp r0, #0
    bic r7, r1, #0x1f
    beq @L_02007334
@L_0200731c:
    ldr r1, [r5, #8]
    cmp r7, r1
    ble @L_02007334
    ldr r5, [r5, #4]
    cmp r5, #0
    bne @L_0200731c
@L_02007334:
    cmp r5, #0
    bne @L_0200734c
    mov r0, r6
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0200734c:
    ldr r1, [r5, #8]
    sub r1, r1, r7
    cmp r1, #0x40
    bhs @L_0200736c
    mov r1, r5
    bl DLExtract
    str r0, [r4, #4]
    b @L_020073a0
@L_0200736c:
    str r7, [r5, #8]
    add r2, r5, r7
    str r1, [r2, #8]
    ldr r0, [r5]
    str r0, [r5, r7]
    ldr r0, [r5, #4]
    str r0, [r2, #4]
    cmp r0, #0
    strne r2, [r0]
    ldr r0, [r2]
    cmp r0, #0
    strne r2, [r0, #4]
    streq r2, [r4, #4]
@L_020073a0:
    ldr r0, [r4, #8]
    mov r1, r5
    bl DLAddFront
    str r0, [r4, #8]
    mov r0, r6
    bl OS_RestoreInterrupts
    add r0, r5, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void OS_FreeToHeap(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl OS_DisableInterrupts
    ldr r1, =OSiHeapInfo
    mov r4, r0
    ldr r0, [r1, r7, lsl #2]
    cmp r6, #0
    ldrlt r6, [r0]
    ldr r1, [r0, #0x10]
    mov r0, #0xc
    mla r7, r6, r0, r1
    sub r5, r5, #0x20
    ldr r0, [r7, #8]
    mov r1, r5
    bl DLExtract
    str r0, [r7, #8]
    ldr r0, [r7, #4]
    mov r1, r5
    bl DLInsert
    str r0, [r7, #4]
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void OS_SetCurrentHeap(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r5, r1
    bl OS_DisableInterrupts
    ldr r1, =OSiHeapInfo
    ldr r1, [r1, r4, lsl #2]
    ldr r4, [r1]
    str r5, [r1]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OS_InitAlloc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r5, r1
    mov r4, r2
    mov r6, r3
    bl OS_DisableInterrupts
    mov r1, #0xc
    ldr r2, =OSiHeapInfo
    mul r1, r6, r1
    str r5, [r2, r7, lsl #2]
    add r2, r5, #0x14
    str r2, [r5, #0x10]
    str r6, [r5, #4]
    cmp r6, #0
    mov r7, #0
    ble @L_020074d0
    mvn lr, #0
    mov r12, r7
    mov r2, #0xc
@L_020074a8:
    mul r3, r7, r2
    ldr r6, [r5, #0x10]
    add r7, r7, #1
    str lr, [r6, r3]
    add r3, r6, r3
    str r12, [r3, #8]
    str r12, [r3, #4]
    ldr r3, [r5, #4]
    cmp r7, r3
    blt @L_020074a8
@L_020074d0:
    ldr r3, [r5, #0x10]
    bic r2, r4, #0x1f
    add r1, r3, r1
    add r1, r1, #0x1f
    bic r1, r1, #0x1f
    mvn r3, #0
    str r3, [r5]
    str r1, [r5, #8]
    str r2, [r5, #0xc]
    bl OS_RestoreInterrupts
    ldr r0, [r5, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void OS_CreateHeap(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r6, r1
    mov r5, r2
    bl OS_DisableInterrupts
    ldr r2, =OSiHeapInfo
    add r1, r6, #0x1f
    ldr r2, [r2, r4, lsl #2]
    bic r6, r1, #0x1f
    ldr lr, [r2, #4]
    bic r5, r5, #0x1f
    cmp lr, #0
    mov r4, #0
    ble @L_02007594
    ldr r12, [r2, #0x10]
    mov r1, #0xc
@L_02007544:
    mul r3, r4, r1
    ldr r2, [r12, r3]
    add r3, r12, r3
    cmp r2, #0
    bge @L_02007588
    sub r1, r5, r6
    str r1, [r3]
    mov r2, #0
    str r2, [r6]
    str r2, [r6, #4]
    ldr r1, [r3]
    str r1, [r6, #8]
    str r6, [r3, #4]
    str r2, [r3, #8]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
@L_02007588:
    add r4, r4, #1
    cmp r4, lr
    blt @L_02007544
@L_02007594:
    bl OS_RestoreInterrupts
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void OS_IsOnVram(void)
{
    cmp r0, #0x5000000
    blo @L_020075bc
    ldr r1, =0x7000800
    cmp r0, r1
    movlo r0, #1
    bxlo lr
@L_020075bc:
    mov r0, #0
    bx lr
}

asm void OS_GetDTCMAddress(void)
{
    mrc p15, 0, r0, c9, c1, 0
    ldr r1, =0xfffff000
    and r0, r0, r1
    bx lr
}

asm void OS_EnableProtectionUnit(void)
{
    mrc p15, 0, r0, c1, c0, 0
    orr r0, r0, #1
    mcr p15, 0, r0, c1, c0, 0
    bx lr
}

asm void OS_DisableProtectionUnit(void)
{
    mrc p15, 0, r0, c1, c0, 0
    bic r0, r0, #1
    mcr p15, 0, r0, c1, c0, 0
    bx lr
}

asm void OS_EnableICacheForProtectionRegion(void)
{
    mrc p15, 0, r1, c2, c0, 1
    orr r1, r1, r0
    mcr p15, 0, r1, c2, c0, 1
    bx lr
}

asm void OS_DisableICacheForProtectionRegion(void)
{
    mrc p15, 0, r1, c2, c0, 1
    bic r1, r1, r0
    mcr p15, 0, r1, c2, c0, 1
    bx lr
}

asm void OS_EnableDCacheForProtectionRegion(void)
{
    mrc p15, 0, r1, c2, c0, 0
    orr r1, r1, r0
    mcr p15, 0, r1, c2, c0, 0
    bx lr
}

asm void OS_DisableDCacheForProtectionRegion(void)
{
    mrc p15, 0, r1, c2, c0, 0
    bic r1, r1, r0
    mcr p15, 0, r1, c2, c0, 0
    bx lr
}

asm void OS_SetDPermissionsForProtectionRegion(void)
{
    mrc p15, 0, r2, c5, c0, 2
    bic r2, r2, r0
    orr r2, r2, r1
    mcr p15, 0, r2, c5, c0, 2
    bx lr
}

asm void OS_EnableWriteBufferForProtectionRegion(void)
{
    mrc p15, 0, r1, c3, c0, 0
    orr r1, r1, r0
    mcr p15, 0, r1, c3, c0, 0
    bx lr
}

asm void OS_DisableWriteBufferForProtectionRegion(void)
{
    mrc p15, 0, r1, c3, c0, 0
    bic r1, r1, r0
    mcr p15, 0, r1, c3, c0, 0
    bx lr
}

asm void OS_SetProtectionRegionParam(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_020aad80
    ldr r2, [r2, r0, lsl #2]
    mov r0, r1
    blx r2
    ldmia sp!, {r3, pc}
}

asm void func_0200768c(void)
{
    mcr p15, 0, r0, c6, c0, 0
    bx lr
}

asm void func_02007694(void)
{
    mcr p15, 0, r0, c6, c1, 0
    bx lr
}

asm void func_0200769c(void)
{
    mcr p15, 0, r0, c6, c2, 0
    bx lr
}

asm void func_020076a4(void)
{
    mcr p15, 0, r0, c6, c3, 0
    bx lr
}

asm void func_020076ac(void)
{
    mcr p15, 0, r0, c6, c4, 0
    bx lr
}

asm void func_020076b4(void)
{
    mcr p15, 0, r0, c6, c5, 0
    bx lr
}

asm void func_020076bc(void)
{
    mcr p15, 0, r0, c6, c6, 0
    bx lr
}

asm void func_020076c4(void)
{
    mcr p15, 0, r0, c6, c7, 0
    bx lr
}

asm void func_020076cc(void)
{
    mrc p15, 0, r0, c6, c0, 0
    bx lr
}

asm void func_020076d4(void)
{
    mrc p15, 0, r0, c6, c1, 0
    bx lr
}

asm void func_020076dc(void)
{
    mrc p15, 0, r0, c6, c2, 0
    bx lr
}

asm void func_020076e4(void)
{
    mrc p15, 0, r0, c6, c3, 0
    bx lr
}

asm void func_020076ec(void)
{
    mrc p15, 0, r0, c6, c4, 0
    bx lr
}

asm void func_020076f4(void)
{
    mrc p15, 0, r0, c6, c5, 0
    bx lr
}

asm void func_020076fc(void)
{
    mrc p15, 0, r0, c6, c6, 0
    bx lr
}

asm void func_02007704(void)
{
    mrc p15, 0, r0, c6, c7, 0
    bx lr
}

asm void OS_SetProtectionRegionEx(void)
{
    stmdb sp!, {r3, lr}
    sub r3, r2, #0x16
    mov r12, #0x1000
    rsb r12, r12, #0
    mov r3, r3, lsr #1
    and r1, r1, r12, lsl r3
    orr r1, r2, r1
    orr r1, r1, #1
    bl OS_SetProtectionRegionParam
    ldmia sp!, {r3, pc}
}

asm void OS_InitException(void)
{
    ldr r1, =0x2fffd9c
    ldr r0, =OSi_DebuggerHandler
    ldr r2, [r1]
    mov r1, #0
    str r2, [r0, #8]
    cmp r2, #0x2600000
    blo @L_02007758
    cmp r2, #0x2800000
    movlo r1, #1
@L_02007758:
    ldr r0, =OSi_DebuggerHandler
    cmp r1, #0
    moveq r2, #0
    cmp r2, #0
    str r2, [r0]
    ldreq r1, =0x2fffd9c
    ldreq r2, =OSi_ExceptionHandler
    biceq r0, r1, #0x800000
    streq r2, [r1]
    streq r2, [r0]
    ldr r0, =OSi_DebuggerHandler
    mov r1, #0
    str r1, [r0, #0xc]
    bx lr
}

asm void func_0200779c(void)
{
    ldr r0, =OSi_DebuggerHandler
    ldr r0, [r0, #8]
    bx lr
}
