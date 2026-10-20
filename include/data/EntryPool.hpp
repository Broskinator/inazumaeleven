#ifndef DATA_ENTRYPOOL_HPP
#define DATA_ENTRYPOOL_HPP

#include "nitro/types.h"

#define ENTRY_POOL_SIZE 132

// One entry of an EntryPool: three blocks of data, and two optional extension blocks
// handed out from buffers the pool is given (EntryPool::SetExt0Buffer/SetExt1Buffer).
struct PoolEntry {
    u8 data0[0x60];
    u8 data1[0x70];
    u8 data2[0x18];
    void *ext0;         // 0x20 bytes
    void *ext1;         // 0x90 bytes
    u16 flags;          // bit 0: in use
    u8 unk_F2;
    u8 unk_F3;
    s16 slot;           // where the entry is in EntryPool::slots
    u8 unk_F6[6];

    BOOL IsUsed() { return (flags & 1) ? TRUE : FALSE; }
    void *GetData1();
};

// A fixed set of entries, placed in numbered slots.
class EntryPool {
public:
    void Init();
    void SetExt0Buffer(void *buffer);
    void ClearExt0Buffer();
    void SetExt1Buffer(void *buffer);
    void ClearExt1Buffer();
    void AllocExt0(PoolEntry *entry);
    void FreeExt0(PoolEntry *entry);
    void AllocExt1(PoolEntry *entry);
    void FreeExt1(PoolEntry *entry);
    PoolEntry *Get(int slot);
    PoolEntry *FindFreeEntry();
    s16 FindFreeSlot(int min, int max);
    PoolEntry *Create(int slot);
    void Remove(int slot);
    void RemoveAll();
    void Swap(int slotA, int slotB);
    void Move(int from, int to);
    void Copy(int from, int to);
    PoolEntry *Duplicate(int from, int to);

    BOOL HasExt0Buffer() { return (flags & 1) ? TRUE : FALSE; }
    BOOL HasExt1Buffer() { return (flags & 2) ? TRUE : FALSE; }

    PoolEntry entries[ENTRY_POOL_SIZE];
    PoolEntry *slots[ENTRY_POOL_SIZE];
    u8 *ext0Buffer;
    u8 *ext1Buffer;
    s16 nextFree;       // where FindFreeEntry starts looking
    u8 flags;           // bit 0: ext0Buffer set, bit 1: ext1Buffer set
};

extern EntryPool gEntryPool;

void EntryPool_CompactFront();

#endif // DATA_ENTRYPOOL_HPP
