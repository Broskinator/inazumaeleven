// (asm for now)

extern char data_020bd2e0[];
void func_0200c68c(void);
extern char data_020bd33c[];
void func_0200e610(void);
void func_0200c998(void);

asm void FS_CreateFileFromRom(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r3, r2
    ldr r12, =0xffff
    ldr r1, =data_020bd2e0
    mov r2, lr
    add r3, lr, r3
    str r12, [sp]
    bl func_0200c68c
    ldmia sp!, {r3, pc}
}

asm void func_0200e794(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bd33c
    ldr r2, [r1]
    cmp r2, #0
    ldmneia sp!, {r3, pc}
    mov r2, #1
    str r2, [r1]
    bl func_0200e610
    bl func_0200c998
    ldmia sp!, {r3, pc}
}
