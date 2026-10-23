#include "system/GameMain.hpp"
#include "system/System.hpp"
#include "game/SceneManager.hpp"
#include "game/UnkClass_02054800.hpp"

extern "C" u8 data_020c5320[];
extern "C" char data_020ac084[];
extern "C" void func_0209bcbc(void *);
extern "C" void func_0209bebc(void *);
extern "C" void func_02089674(void *);
extern "C" void func_020602ec(void *);
extern "C" void *OS_AllocFromHeap(int arena, int heap, u32 size);
extern "C" void OS_FreeToHeap(int arena, int heap, void *ptr);

#define OS_ARENA_MAIN 0

void Main::func_0204054c()
{
    func_0209bcbc(data_020c5320);
}

void Main::func_02040560()
{
    func_0209bebc(data_020c5320);
}

void Main::func_02040574()
{
    System::func_0203fb90();
    System::func_0203fc1c();
}

void Main::func_02040584()
{
}

void Main::func_02040588()
{
}

// the game: starts everything, then runs the main loop
void Main::func_0204058c()
{
    System::func_0203fa48();
    System::func_0203fac8();
    System::func_0203fb90();
    System::func_0203ff78();
    System::func_0203ff30();
    System::func_0203fc1c();
    System::func_0203fc70();
    System::func_0203fc74();
    System::func_0203fca4();
    System::func_0203ffb4();
    func_02040584();
    System::func_0203ffd4();
    System::func_02040358();
    System::func_020404bc();
    func_0204054c();
    System::func_020401bc();
    SceneManager::func_0203f604();
    func_02040560();
}

Main *Main::func_020405dc()
{
    operator delete(this);
    return this;
}

void Main::func_020405f0()
{
}

Main *Main::func_020405f4()
{
    *(void **)this = data_020ac084;
    func_02089674(this);
    operator delete(this);
    return this;
}

Main *Main::func_0204061c()
{
    *(void **)this = data_020ac084;
    func_02089674(this);
    return this;
}

Main *Main::func_0204063c()
{
    operator delete(this);
    return this;
}

Main *Main::func_02040650()
{
    operator delete(this);
    return this;
}

Main *Main::func_02040664()
{
    operator delete(this);
    return this;
}

Main *Main::func_02040678()
{
    ((UnkClass_02054800 *)((u8 *)this + 0x2B58))->func_02054854();
    func_020602ec((u8 *)this + 0x8C);
    return this;
}

// (memory for the sound driver)
// (nonmatching: the tail call's address is loaded first in the original)
#ifdef NONMATCHING
void *Main::func_0204069c(void *arg, u32 size)
{
    return OS_AllocFromHeap(OS_ARENA_MAIN, -1, size);
}
#else
asm void *Main::func_0204069c(void *arg, u32 size)
{
    ldr r12, =OS_AllocFromHeap
    mov r0, #0
    mov r2, r1
    sub r1, r0, #1
    bx r12
}
#endif

void *Main::func_020406b4(void *arg, void *ptr)
{
    OS_FreeToHeap(OS_ARENA_MAIN, -1, ptr);
    return ptr;
}

void Main::func_020406d4()
{
}
