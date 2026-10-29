#include "ov037/Unk_ov037_0216bea0.hpp"

extern "C" void func_ov037_0216bea0(void);
extern "C" void func_ov037_0216beb4(void);

extern "C" void _ZdlPv(void);

extern "C" asm void func_ov037_0216bea0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov037_0216beb4(void)
{
    bx lr
}
