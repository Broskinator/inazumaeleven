// (asm for now)

asm void _ZNSt3tr16detail25shared_ptr_deleter_common7releaseEv(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #4]
    subs r1, r1, #1
    str r1, [r4, #4]
    ldmneia sp!, {r4, pc}
    ldr r1, [r0]
    ldr r1, [r1, #0xc]
    blx r1
    mov r0, r4
    bl _ZNSt3tr16detail25shared_ptr_deleter_common12release_weakEv
    ldmia sp!, {r4, pc}
}

asm void _ZNSt3tr16detail25shared_ptr_deleter_common12release_weakEv(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #8]
    subs r1, r1, #1
    str r1, [r0, #8]
    ldmneia sp!, {r3, pc}
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r1, [r0]
    ldr r1, [r1, #4]
    blx r1
    ldmia sp!, {r3, pc}
}
