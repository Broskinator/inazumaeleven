#include "system/Main.hpp"

extern "C" char data_020ac084[];
extern "C" char data_020c5320[];
extern "C" void OS_AllocFromHeap(void);
extern "C" void OS_FreeToHeap(void);
extern "C" void _ZN12SceneManager13func_0203f604Ev(void);
extern "C" void _ZN6System13func_0203fa48Ev(void);
extern "C" void _ZN6System13func_0203fac8Ev(void);
extern "C" void _ZN6System13func_0203fb90Ev(void);
extern "C" void _ZN6System13func_0203fc1cEv(void);
extern "C" void _ZN6System13func_0203fc70Ev(void);
extern "C" void _ZN6System13func_0203fc74Ev(void);
extern "C" void _ZN6System13func_0203fca4Ev(void);
extern "C" void _ZN6System13func_0203ff30Ev(void);
extern "C" void _ZN6System13func_0203ff78Ev(void);
extern "C" void _ZN6System13func_0203ffb4Ev(void);
extern "C" void _ZN6System13func_0203ffd4Ev(void);
extern "C" void _ZN6System13func_020401bcEv(void);
extern "C" void _ZN6System13func_02040358Ev(void);
extern "C" void _ZN6System13func_020404bcEv(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02054854(void);
extern "C" void func_020602ec(void);
extern "C" void func_02089674(void);
extern "C" void func_0209bcbc(void);
extern "C" void func_0209bebc(void);

asm void Main::func_0204054c()
{
    ldr r0, =data_020c5320
    ldr r12, =func_0209bcbc
    bx r12
}

asm void Main::func_02040560()
{
    ldr r0, =data_020c5320
    ldr r12, =func_0209bebc
    bx r12
}

asm void Main::func_02040574()
{
    stmdb sp!, {r3, lr}
    bl _ZN6System13func_0203fb90Ev
    bl _ZN6System13func_0203fc1cEv
    ldmia sp!, {r3, pc}
}

asm void Main::func_02040584()
{
    bx lr
}

asm void Main::func_02040588()
{
    bx lr
}

asm void Main::func_0204058c()
{
    stmdb sp!, {r3, lr}
    bl _ZN6System13func_0203fa48Ev
    bl _ZN6System13func_0203fac8Ev
    bl _ZN6System13func_0203fb90Ev
    bl _ZN6System13func_0203ff78Ev
    bl _ZN6System13func_0203ff30Ev
    bl _ZN6System13func_0203fc1cEv
    bl _ZN6System13func_0203fc70Ev
    bl _ZN6System13func_0203fc74Ev
    bl _ZN6System13func_0203fca4Ev
    bl _ZN6System13func_0203ffb4Ev
    bl func_02040584
    bl _ZN6System13func_0203ffd4Ev
    bl _ZN6System13func_02040358Ev
    bl _ZN6System13func_020404bcEv
    bl func_0204054c
    bl _ZN6System13func_020401bcEv
    bl _ZN12SceneManager13func_0203f604Ev
    bl func_02040560
    ldmia sp!, {r3, pc}
}

asm void Main::func_020405dc()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_020405f0()
{
    bx lr
}

asm void Main::func_020405f4()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020ac084
    mov r4, r0
    str r1, [r4]
    bl func_02089674
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_0204061c()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020ac084
    mov r4, r0
    str r1, [r4]
    bl func_02089674
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_0204063c()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_02040650()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_02040664()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_02040678()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x358
    add r0, r0, #0x2800
    bl func_02054854
    add r0, r4, #0x8c
    bl func_020602ec
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_0204069c()
{
    ldr r12, =OS_AllocFromHeap
    mov r0, #0
    mov r2, r1
    sub r1, r0, #1
    bx r12
}

asm void Main::func_020406b4()
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    mov r0, #0
    mov r2, r4
    sub r1, r0, #1
    bl OS_FreeToHeap
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Main::func_020406d4()
{
    bx lr
}
