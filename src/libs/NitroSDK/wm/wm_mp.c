// (asm for now)

void WM_StartMPEx(void);

void MIi_CpuClear32(void);
void WMi_StartMP(void);

asm void WM_StartMPEx(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    mov r7, r1
    mov r8, r0
    mov r6, r2
    add r1, sp, #8
    mov r0, #0
    mov r2, #0x10
    mov r5, r3
    ldr r4, [sp, #0x34]
    bl MIi_CpuClear32
    ldr r1, [sp, #0x48]
    ldrh r12, [sp, #0x38]
    ldr r0, [sp, #0x44]
    ldr lr, =0x1e03
    ldr r3, [sp, #0x3c]
    ldr r2, [sp, #0x40]
    strb r1, [sp, #0x16]
    cmp r0, #0
    cmpne r4, #0
    strb r3, [sp, #0x14]
    strb r2, [sp, #0x15]
    ldrh r1, [sp, #0x30]
    str lr, [sp, #8]
    orrne r0, lr, #4
    strne r0, [sp, #8]
    strh r12, [sp, #0x12]
    strh r4, [sp, #0xc]
    strh r4, [sp, #0xe]
    strneh r4, [sp, #0x10]
    str r1, [sp]
    add r4, sp, #8
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, r5
    str r4, [sp, #4]
    bl WMi_StartMP
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
