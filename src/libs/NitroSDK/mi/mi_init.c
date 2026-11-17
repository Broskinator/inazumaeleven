// (asm for now)

void MI_Init(void);

void MI_SetWramBank(void);
void MI_StopDma(void);

asm void MI_Init(void)
{
    stmdb sp!, {r3, lr}
    mov r0, #3
    bl MI_SetWramBank
    mov r0, #0
    bl MI_StopDma
    ldmia sp!, {r3, pc}
}
