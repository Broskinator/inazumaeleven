// (asm for now)

extern char data_020bcfc0[];
extern char data_020bd020[];
void DC_InvalidateRange(void);
void DC_FlushRange(void);

asm void SNDi_IncAlarmId(void)
{
    ldr r2, =data_020bcfc0
    mov r1, #0xc
    mla r1, r0, r1, r2
    ldrb r0, [r1, #8]
    add r0, r0, #1
    strb r0, [r1, #8]
    bx lr
}

asm void SNDi_SetAlarmHandler(void)
{
    mov r3, #0xc
    mul r3, r0, r3
    ldr r0, =data_020bcfc0
    str r1, [r0, r3]
    add r1, r0, r3
    str r2, [r1, #4]
    ldrb r0, [r1, #8]
    add r0, r0, #1
    strb r0, [r1, #8]
    and r0, r0, #0xff
    bx lr
}

asm void SNDi_CallAlarmHandler(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =data_020bcfc0
    and r2, r0, #0xff
    mov r1, #0xc
    mla r3, r2, r1, r3
    mov r1, r0, asr #8
    ldrb r0, [r3, #8]
    and r1, r1, #0xff
    cmp r1, r0
    ldmneia sp!, {r3, pc}
    ldr r1, [r3]
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, [r3, #4]
    blx r1
    ldmia sp!, {r3, pc}
}

asm void func_0200aa6c(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020bd020
    mov r1, #4
    ldr r0, [r4]
    add r0, r0, #4
    bl DC_InvalidateRange
    ldr r0, [r4]
    ldr r0, [r0, #4]
    ldmia sp!, {r4, pc}
}

asm void func_0200aa94(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020bd020
    mov r1, #2
    ldr r0, [r4]
    add r0, r0, #8
    bl DC_InvalidateRange
    ldr r0, [r4]
    ldrh r0, [r0, #8]
    ldmia sp!, {r4, pc}
}

asm void func_0200aabc(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020bd020
    mov r1, #4
    ldr r0, [r4]
    bl DC_InvalidateRange
    ldr r0, [r4]
    ldr r0, [r0]
    ldmia sp!, {r4, pc}
}

asm void func_0200aae0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov lr, #0
    str lr, [r0, #4]
    strh lr, [r0, #8]
    strh lr, [r0, #0xa]
    str lr, [r0]
    mvn r3, #0
    mov r12, lr
    mov r1, #0x24
@L_0200ab04:
    mla r5, lr, r1, r0
    mov r4, r12
    str r12, [r5, #0x40]
@L_0200ab10:
    add r2, r5, r4, lsl #1
    add r4, r4, #1
    strh r3, [r2, #0x20]
    cmp r4, #0x10
    blt @L_0200ab10
    add lr, lr, #1
    cmp lr, #0x10
    blt @L_0200ab04
    mov r3, #0
    mvn r2, #0
@L_0200ab38:
    add r1, r0, r3, lsl #1
    add r1, r1, #0x200
    add r3, r3, #1
    strh r2, [r1, #0x60]
    cmp r3, #0x10
    blt @L_0200ab38
    mov r1, #0x280
    bl DC_FlushRange
    ldmia sp!, {r3, r4, r5, pc}
}
