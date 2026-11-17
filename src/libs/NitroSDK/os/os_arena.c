// (asm for now)

void OS_AllocFromArenaLo(void);
void DLAddFront(void);

void OS_GetArenaLo(void);
void OS_GetArenaHi(void);
void OS_SetArenaLo(void);

asm void OS_AllocFromArenaLo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl OS_GetArenaLo
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r0, r5
    sub r1, r5, #1
    mvn r2, r1
    sub r0, r0, #1
    and r4, r2, r0
    add r0, r4, r6
    add r0, r0, r5
    sub r1, r0, #1
    mov r0, r7
    and r5, r2, r1
    bl OS_GetArenaHi
    cmp r5, r0
    movhi r0, #0
    ldmhiia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    mov r1, r5
    bl OS_SetArenaLo
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void DLAddFront(void)
{
    mov r2, #0
    str r0, [r1, #4]
    str r2, [r1]
    cmp r0, #0
    strne r1, [r0]
    mov r0, r1
    bx lr
}
