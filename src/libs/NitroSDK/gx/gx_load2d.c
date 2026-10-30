// (asm for now)

void GXS_BeginLoadBGExtPltt(void);
void func_02003df0(void);
void func_02003e58(void);

void func_02004da4(void);
extern char data_020bb044[];
extern char data_020aad64[];
void func_02008bb8(void);
void MIi_CpuCopy32(void);
void func_02008cb4(void);
void GX_SetBankForSubBGExtPltt(void);

asm void GXS_BeginLoadBGExtPltt(void)
{
    stmdb sp!, {r3, lr}
    bl func_02004da4
    ldr r1, =data_020bb044
    str r0, [r1]
    ldmia sp!, {r3, pc}
}

asm void func_02003df0(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r3, =data_020aad64
    mov r4, r0
    ldr lr, [r3]
    mov r3, r2
    cmn lr, #1
    beq @L_02003e40
    mov r12, #0
    add r2, r1, #0x98000
    str r12, [sp]
    str r12, [sp, #4]
    mov r12, #1
    mov r0, lr
    mov r1, r4
    add r2, r2, #0x6800000
    str r12, [sp, #8]
    bl func_02008bb8
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
@L_02003e40:
    add r1, r1, #0x98000
    add r1, r1, #0x6800000
    bl MIi_CpuCopy32
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}

asm void func_02003e58(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =data_020aad64
    ldr r0, [r0]
    cmn r0, #1
    beq @L_02003e70
    bl func_02008cb4
@L_02003e70:
    ldr r4, =data_020bb044
    ldr r0, [r4]
    bl GX_SetBankForSubBGExtPltt
    mov r0, #0
    str r0, [r4]
    ldmia sp!, {r4, pc}
}
