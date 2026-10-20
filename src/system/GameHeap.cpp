#include "system/GameHeap.hpp"
#include "nitro/mi.h"

#define HEAP_ALIGNMENT 32
#define HEAP_LARGE_BLOCK 0x32000    // blocks this big always come from the end of the heap

GameHeap::GameHeap()
{
}

GameHeap::~GameHeap()
{
    NNS_FndDestroyExpHeap(handle);
}

void GameHeap::Init(int unused, void *start, void *end)
{
    u32 size = (u8 *)end - (u8 *)start;

    MI_CpuClearFast(start, size);
    handle = NNS_FndCreateExpHeapEx(start, size, 0);
    this->start = start;
    this->size = size;
    OS_InitMutex(&mutex);
}

void *GameHeap::Alloc(int size, int unused, BOOL fromHead)
{
    OSIntrMode enabled;
    void *ptr;

    size = (size + HEAP_ALIGNMENT - 1) & ~(HEAP_ALIGNMENT - 1);
    if (size >= HEAP_LARGE_BLOCK) {
        fromHead = FALSE;
    }

    OS_LockMutex(&mutex);
    enabled = OS_DisableInterrupts();
    ptr = NNS_FndAllocFromExpHeapEx(handle, size, fromHead ? HEAP_ALIGNMENT : -HEAP_ALIGNMENT);
    OS_RestoreInterrupts(enabled);
    OS_UnlockMutex(&mutex);
    return ptr;
}

// (nonmatching: the original keeps 4 unused bytes on the stack)
#ifdef NONMATCHING
void GameHeap::Free(void *ptr)
{
    OSIntrMode enabled;

    if (ptr == NULL) {
        return;
    }

    OS_LockMutex(&mutex);
    enabled = OS_DisableInterrupts();
    NNS_FndFreeToExpHeap(handle, ptr);
    OS_RestoreInterrupts(enabled);
    OS_UnlockMutex(&mutex);
}
#else
asm void GameHeap::Free(void *ptr)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x4
    movs r5, r1
    mov r6, r0
    addeq sp, sp, #0x4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    add r0, r6, #0xc
    bl OS_LockMutex
    bl OS_DisableInterrupts
    mov r4, r0
    ldr r0, [r6, #0x24]
    mov r1, r5
    bl NNS_FndFreeToExpHeap
    mov r0, r4
    bl OS_RestoreInterrupts
    add r0, r6, #0xc
    bl OS_UnlockMutex
    add sp, sp, #0x4
    ldmia sp!, {r3, r4, r5, r6, pc}
}
#endif

void GameHeap::GetInfo(u32 *used, u32 *free, u32 *allocatable)
{
    u32 freeSize;
    u32 allocatableSize;
    u32 usedSize;

    if (used != NULL) {
        *used = 0;
    }
    if (free != NULL) {
        *free = 0;
    }
    if (allocatable != NULL) {
        *allocatable = -1;
    }

    freeSize = NNS_FndGetTotalFreeSizeForExpHeap(handle);
    allocatableSize = NNS_FndGetAllocatableSizeForExpHeapEx(handle, 4);
    usedSize = size - freeSize;

    if (used != NULL) {
        *used = usedSize;
    }
    if (free != NULL) {
        *free = freeSize;
    }
    if (allocatable != NULL) {
        *allocatable = allocatableSize;
    }
}
