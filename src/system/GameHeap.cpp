#include "system/GameHeap.hpp"
#include "nitro/mi.h"
#include "system/MutexLock.hpp"

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

void GameHeap::Free(void *ptr)
{
    OSIntrMode enabled;

    if (ptr == NULL) {
        return;
    }

    MutexLock lock(&mutex);
    enabled = OS_DisableInterrupts();
    NNS_FndFreeToExpHeap(handle, ptr);
    OS_RestoreInterrupts(enabled);
}

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
