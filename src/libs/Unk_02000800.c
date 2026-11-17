// (asm for now)

void Entry(void);
void INITi_CpuClear32(void);

void init_cp15(void);
extern char OS_IRQTable[];
void MIi_UncompressBackward(void);
void do_autoload(void);
void OS_IrqHandler(void);
void func_02023dd4(void);
void _ZN4Main13func_02040588Ev(void);
void func_0202526c(void);
void main(void);

asm void Entry(void)
{
    mov r12, #0x4000000
    str r12, [r12, #0x208]
@L_02000808:
    ldrh r0, [r12, #6]
    cmp r0, #0
    bne @L_02000808
    bl init_cp15
    mov r0, #0x13
    msr cpsr_c, r0
    ldr r0, =OS_IRQTable
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12
    msr cpsr_c, r0
    ldr r0, =OS_IRQTable
    add r0, r0, #0x3fc0
    sub r0, r0, #0x40
    sub sp, r0, #4
    tst sp, #4
    subeq sp, sp, #4
    ldr r1, =0x400
    sub r1, r0, r1
    mov r0, #0x1f
    msr cpsr_fsxc, r0
    sub sp, r1, #4
    tst sp, #4
    subne sp, sp, #4
    mov r0, #0
    ldr r1, =OS_IRQTable
    mov r2, #0x4000
    bl INITi_CpuClear32
    mov r0, #0
    ldr r1, =0x5000000
    mov r2, #0x400
    bl INITi_CpuClear32
    mov r0, #0x200
    ldr r1, =0x7000000
    mov r2, #0x400
    bl INITi_CpuClear32
    ldr r1, =0x2000b88
    ldr r0, [r1, #0x14]
    bl MIi_UncompressBackward
    bl do_autoload
    ldr r0, =0x2000b88
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #0x10]
    mov r3, r1
    mov r0, #0
@L_020008bc:
    cmp r1, r2
    strlo r0, [r1], #4
    blo @L_020008bc
    bic r1, r3, #0x1f
@L_020008cc:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r1, c7, c5, 1
    mcr p15, 0, r1, c7, c14, 1
    add r1, r1, #0x20
    cmp r1, r2
    blt @L_020008cc
    ldr r1, =0x2ffff9c
    str r0, [r1]
    ldr r1, =OS_IRQTable
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    ldr r0, =OS_IrqHandler
    str r0, [r1]
    bl func_02023dd4
    bl _ZN4Main13func_02040588Ev
    bl func_0202526c
    ldr r1, =main
    ldr lr, =0xffff0000
    bx r1
}

asm void INITi_CpuClear32(void)
{
    add r12, r1, r2
@L_02000940:
    cmp r1, r12
    stmltia r1!, {r0}
    blt @L_02000940
    bx lr
}
