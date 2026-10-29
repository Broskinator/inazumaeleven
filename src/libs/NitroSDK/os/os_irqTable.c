// (asm for now)

extern char data_020bb09c[];
extern char data_020aad68[];
extern char data_020bb0a4[];
extern char data_027e0000[];
extern char data_020bb0a0[];
void OS_DisableIrqMask(void);

asm void OSi_IrqCallback(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r1, #0xc
    mul r5, r0, r1
    ldr r2, =data_020bb09c
    ldr r3, =data_020aad68
    mov r4, r0, lsl #1
    ldr r1, [r2, r5]
    mov r0, #0
    ldrh r3, [r3, r4]
    mov r4, #1
    str r0, [r2, r5]
    cmp r1, #0
    mov r4, r4, lsl r3
    beq @L_020051c4
    ldr r0, =data_020bb0a4
    ldr r0, [r0, r5]
    blx r1
@L_020051c4:
    ldr r0, =data_027e0000
    ldr r1, =data_020bb0a0
    add r0, r0, #0x3000
    ldr r2, [r0, #0xff8]
    ldr r1, [r1, r5]
    orr r2, r2, r4
    str r2, [r0, #0xff8]
    cmp r1, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl OS_DisableIrqMask
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02005208(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #0
    bx r12
}

asm void func_02005218(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #1
    bx r12
}

asm void func_02005228(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #2
    bx r12
}

asm void func_02005238(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #3
    bx r12
}

asm void func_02005248(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #4
    bx r12
}

asm void func_02005258(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #5
    bx r12
}

asm void func_02005268(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #6
    bx r12
}

asm void func_02005278(void)
{
    ldr r12, =OSi_IrqCallback
    mov r0, #7
    bx r12
}
