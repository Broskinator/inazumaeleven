// (asm for now)

void func_020207d4(void);
void func_02020894(void);

asm void scalbn(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r2
    add r2, sp, #0
    bl func_020207d4
    ldr r2, [sp]
    add r2, r2, r4
    str r2, [sp]
    bl func_02020894
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
