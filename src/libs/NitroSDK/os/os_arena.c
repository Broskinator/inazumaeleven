// (asm for now)

void func_02006fa4(void);
void func_02006f90(void);
void func_02007150(void);

asm void OS_AllocFromArenaLo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_02006fa4
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
    bl func_02006f90
    cmp r5, r0
    movhi r0, #0
    ldmhiia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    mov r1, r5
    bl func_02007150
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020071d0(void)
{
    mov r2, #0
    str r0, [r1, #4]
    str r2, [r1]
    cmp r0, #0
    strne r1, [r0]
    mov r0, r1
    bx lr
}
