#ifndef SYSTEM_GAMEHEAP_HPP
#define SYSTEM_GAMEHEAP_HPP

#include "nitro/types.h"
#include "nitro/os.h"
#include "nnsys/fnd/expheap.h"

class FileManager;

// A NitroSystem expanded heap over a block of memory, for one thread at a time.
class GameHeap {
public:
    GameHeap();
    ~GameHeap();
    void Init(int unused, void *start, void *end);
    void *Alloc(int size, int unused, BOOL fromHead);
    void Free(void *ptr);
    void GetInfo(u32 *used, u32 *free, u32 *allocatable);

    FileManager *fileManager;   // (set by the game; files are loaded through it)
    void *start;
    u32 size;
    OSMutex mutex;
    NNSFndHeapHandle handle;
};

#endif // SYSTEM_GAMEHEAP_HPP
