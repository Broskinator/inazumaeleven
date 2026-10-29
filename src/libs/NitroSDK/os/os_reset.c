// (asm for now)

void func_0200b138(void);
extern char data_020bb100[];
void func_020056b4(void);
void WaitByLoop(void);
void func_0200919c(void);
void func_02005738(void);

asm void OSi_SendToPxi(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0, lsl #8
    mov r5, #0xc
    mov r4, #0
@L_0200557c:
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl func_0200b138
    cmp r0, #0
    bne @L_0200557c
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02005598(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r3, =data_020bb100
    ldr r0, [r3]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r5, =0x2fffff0
    mov r2, #0
    mov r4, #1
    mov r1, r5
    str r2, [r5]
    mov r0, #0x7e
    str r4, [r3]
    bl func_020056b4
    ldrh r0, [r5, #6]
    cmp r0, #0
    beq @L_020055f0
    mov r4, #0x400
@L_020055dc:
    mov r0, r4
    bl WaitByLoop
    ldrh r0, [r5, #6]
    cmp r0, #0
    bne @L_020055dc
@L_020055f0:
    ldr r4, =0x2ffffb0
    mvn r1, #0
    mov r5, #0
    mov r0, r5
    str r1, [r4]
    mov r3, r1, lsl #0x10
    add r1, r4, #0x10
    mov r2, #0x28
    str r3, [r4, #4]
    bl func_0200919c
    ldr r12, =0x4000204
    mov r2, r5
    ldrh r3, [r12]
    add r1, r4, #0x40
    mov r0, #0x7e
    orr r3, r3, #0x800
    strh r3, [r12]
    ldrh r3, [r12]
    orr r3, r3, #0x80
    strh r3, [r12]
    bl func_02005738
    mov r2, r5
    add r1, r4, #0x40
    mov r0, #0x7f
    bl func_020056b4
    ldmia sp!, {r3, r4, r5, pc}
}
