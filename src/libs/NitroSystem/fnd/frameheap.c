// (asm for now)

void func_02033080(void);
void func_020330dc(void);
void func_02033134(void);
void FreeTail(void);
void NNS_FndCreateFrmHeapEx(void);
void func_020331ac(void);
void NNS_FndAllocFromFrmHeapEx(void);
void NNS_FndFreeToFrmHeap(void);

void func_0200919c(void);
void func_02033038(void);
void func_020329e0(void);

asm void func_02033080(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r3, [r4]
    sub r0, r2, #1
    mvn r2, r0
    add r0, r0, r3
    and r5, r2, r0
    ldr r0, [r4, #4]
    add r6, r1, r5
    cmp r6, r0
    movhi r0, #0
    ldmhiia sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #-4]
    sub r2, r6, r3
    and r0, r0, #0xff
    tst r0, #1
    beq @L_020330d0
    mov r1, r3
    mov r0, #0
    bl func_0200919c
@L_020330d0:
    mov r0, r5
    str r6, [r4]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020330dc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r3, [r4, #4]
    sub r0, r2, #1
    mvn r2, r0
    sub r1, r3, r1
    ldr r0, [r4]
    and r5, r2, r1
    cmp r5, r0
    movlo r0, #0
    ldmloia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #-4]
    sub r2, r3, r5
    and r0, r0, #0xff
    tst r0, #1
    beq @L_02033128
    mov r1, r5
    mov r0, #0
    bl func_0200919c
@L_02033128:
    mov r0, r5
    str r5, [r4, #4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02033134(void)
{
    ldr r2, [r0, #0x18]
    mov r1, #0
    str r2, [r0, #0x24]
    str r1, [r0, #0x2c]
    bx lr
}

asm void FreeTail(void)
{
    ldr r2, [r0, #0x2c]
    cmp r2, #0
    beq @L_02033168
@L_02033154:
    ldr r1, [r0, #0x1c]
    str r1, [r2, #8]
    ldr r2, [r2, #0xc]
    cmp r2, #0
    bne @L_02033154
@L_02033168:
    ldr r1, [r0, #0x1c]
    str r1, [r0, #0x28]
    bx lr
}

asm void NNS_FndCreateFrmHeapEx(void)
{
    stmdb sp!, {r3, lr}
    add r1, r1, r0
    add r0, r0, #3
    bic r1, r1, #3
    bic r0, r0, #3
    cmp r0, r1
    bhi @L_0203319c
    sub r3, r1, r0
    cmp r3, #0x30
    bhs @L_020331a4
@L_0203319c:
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_020331a4:
    bl func_02033038
    ldmia sp!, {r3, pc}
}

asm void func_020331ac(void)
{
    ldr r12, =func_020329e0
    bx r12
}

asm void NNS_FndAllocFromFrmHeapEx(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    moveq r1, #1
    add r1, r1, #3
    cmp r2, #0
    bic r1, r1, #3
    add r0, r0, #0x24
    blt @L_020331e0
    bl func_02033080
    ldmia sp!, {r3, pc}
@L_020331e0:
    rsb r2, r2, #0
    bl func_020330dc
    ldmia sp!, {r3, pc}
}

asm void NNS_FndFreeToFrmHeap(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    tst r4, #1
    beq @L_02033204
    bl func_02033134
@L_02033204:
    tst r4, #2
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl FreeTail
    ldmia sp!, {r3, r4, r5, pc}
}
