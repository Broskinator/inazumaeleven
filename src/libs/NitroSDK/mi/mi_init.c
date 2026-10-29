// (asm for now)

void func_020088d0(void);
void func_02008d10(void);

asm void MI_Init(void)
{
    stmdb sp!, {r3, lr}
    mov r0, #3
    bl func_020088d0
    mov r0, #0
    bl func_02008d10
    ldmia sp!, {r3, pc}
}
