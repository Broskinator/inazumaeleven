// NitroSystem FND expanded heap functions used by the game so far
#ifndef NNSYS_FND_EXPHEAP_H
#define NNSYS_FND_EXPHEAP_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NNSiFndHeapHead *NNSFndHeapHandle;

NNSFndHeapHandle NNS_FndCreateExpHeapEx(void *startAddress, u32 size, u16 optFlag);
void NNS_FndDestroyExpHeap(NNSFndHeapHandle heap);
void *NNS_FndAllocFromExpHeapEx(NNSFndHeapHandle heap, u32 size, int alignment);
void NNS_FndFreeToExpHeap(NNSFndHeapHandle heap, void *memBlock);
u32 NNS_FndGetTotalFreeSizeForExpHeap(NNSFndHeapHandle heap);
u32 NNS_FndGetAllocatableSizeForExpHeapEx(NNSFndHeapHandle heap, int alignment);

#ifdef __cplusplus
}
#endif

#endif // NNSYS_FND_EXPHEAP_H
