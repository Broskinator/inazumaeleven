#include "data/EntryPool.hpp"
#include "match/MatchRules.hpp"
#include "nitro/mi.h"


void EntryPool::Init()
{
    nextFree = 0;
    flags = 0;
    MI_CpuFill8(entries, 0, sizeof(entries));
    MI_CpuFill8(slots, 0, sizeof(slots));
}

void EntryPool::SetExt0Buffer(void *buffer)
{
    int i;

    ext0Buffer = (u8 *)buffer;
    flags |= 1;

    for (i = 0; i < ENTRY_POOL_SIZE; i++) {
        PoolEntry *entry = Get(i);
        if (entry != NULL && entry->ext0 == NULL) {
            AllocExt0(entry);
        }
    }
}

void EntryPool::ClearExt0Buffer()
{
    int i;

    for (i = 0; i < ENTRY_POOL_SIZE; i++) {
        PoolEntry *entry = Get(i);
        if (entry != NULL && entry->ext0 != NULL) {
            FreeExt0(entry);
        }
    }

    ext0Buffer = NULL;
    flags &= ~1;
}

void EntryPool::SetExt1Buffer(void *buffer)
{
    int i;

    ext1Buffer = (u8 *)buffer;
    flags |= 2;

    for (i = 0; i < ENTRY_POOL_SIZE; i++) {
        PoolEntry *entry = Get(i);
        if (entry != NULL && entry->ext1 == NULL) {
            AllocExt1(entry);
        }
    }
}

void EntryPool::ClearExt1Buffer()
{
    int i;

    for (i = 0; i < ENTRY_POOL_SIZE; i++) {
        PoolEntry *entry = Get(i);
        if (entry != NULL && entry->ext1 != NULL) {
            FreeExt1(entry);
        }
    }

    ext1Buffer = NULL;
    flags &= ~2;
}

void EntryPool::AllocExt0(PoolEntry *entry)
{
    if (entry == NULL || entry->ext0 != NULL || ext0Buffer == NULL) {
        return;
    }

    entry->ext0 = ext0Buffer + ((u32)entry - (u32)this) / sizeof(PoolEntry) * 0x20;
    MI_CpuFill8(entry->ext0, 0, 0x20);
}

void EntryPool::FreeExt0(PoolEntry *entry)
{
    if (entry != NULL && entry->ext0 != NULL) {
        entry->ext0 = NULL;
    }
}

void EntryPool::AllocExt1(PoolEntry *entry)
{
    if (entry == NULL || entry->ext1 != NULL || ext1Buffer == NULL) {
        return;
    }

    entry->ext1 = ext1Buffer + ((u32)entry - (u32)this) / sizeof(PoolEntry) * 0x90;
    ((MatchRules *)entry->ext1)->func_0206ee34(1);
}

void EntryPool::FreeExt1(PoolEntry *entry)
{
    if (entry != NULL && entry->ext1 != NULL) {
        entry->ext1 = NULL;
    }
}

PoolEntry *EntryPool::Get(int slot)
{
    return slots[slot];
}

PoolEntry *EntryPool::FindFreeEntry()
{
    int i;
    s16 start = nextFree;

    for (i = start; i < ENTRY_POOL_SIZE; i++) {
        PoolEntry *entry = &entries[i];
        if (!entry->IsUsed()) {
            nextFree = i + 1;
            return entry;
        }
    }

    for (i = 0; i < start; i++) {
        PoolEntry *entry = &entries[i];
        if (!entry->IsUsed()) {
            nextFree = i + 1;
            return entry;
        }
    }

    return NULL;
}

s16 EntryPool::FindFreeSlot(int min, int max)
{
    s16 i;

    for (i = 0; i < ENTRY_POOL_SIZE; i++) {
        PoolEntry *entry = slots[i];
        if (min <= i && i <= max) {
            if (entry == NULL) {
                return i;
            }
            if (!entry->IsUsed()) {
                return i;
            }
        }
    }

    return -1;
}

PoolEntry *EntryPool::Create(int slot)
{
    PoolEntry *entry;

    Remove(slot);
    entry = FindFreeEntry();
    slots[slot] = entry;
    MI_CpuFill8(entry, 0, sizeof(PoolEntry));
    entry->flags |= 1;
    entry->slot = slot;

    if (HasExt0Buffer()) {
        AllocExt0(entry);
    } else {
        entry->ext0 = NULL;
    }

    if (HasExt1Buffer()) {
        AllocExt1(entry);
    } else {
        entry->ext1 = NULL;
    }

    return entry;
}

void EntryPool::Remove(int slot)
{
    PoolEntry *entry = Get(slot);
    if (entry == NULL) {
        return;
    }

    FreeExt0(entry);
    FreeExt1(entry);
    entry->flags = 0;
    entry->slot = 0;
    slots[slot] = NULL;
}

void EntryPool::RemoveAll()
{
    int i;

    for (i = 0; i < ENTRY_POOL_SIZE; i++) {
        Remove(i);
    }

    nextFree = 0;
}

void EntryPool::Swap(int slotA, int slotB)
{
    PoolEntry *entry = slots[slotA];

    if (slotA == slotB) {
        return;
    }

    slots[slotA] = slots[slotB];
    slots[slotB] = entry;

    if (slots[slotA] != NULL) {
        slots[slotA]->slot = slotA;
    }
    if (slots[slotB] != NULL) {
        slots[slotB]->slot = slotB;
    }
}

void EntryPool::Move(int from, int to)
{
    Remove(to);
    slots[to] = slots[from];
    slots[from] = NULL;

    if (slots[to] != NULL) {
        slots[to]->slot = to;
    }
}

void EntryPool::Copy(int from, int to)
{
    PoolEntry *src = Get(from);
    PoolEntry *dest = Get(to);

    if (src == NULL || dest == NULL) {
        return;
    }

    dest->flags = src->flags;
    dest->unk_F2 = src->unk_F2;
    MI_CpuCopy8(src->data0, dest->data0, sizeof(src->data0));
    MI_CpuCopy8(src->data1, dest->data1, sizeof(src->data1));
    MI_CpuCopy8(src->data2, dest->data2, sizeof(src->data2));

    if (src->ext0 != NULL && dest->ext0 != NULL) {
        MI_CpuCopy8(src->ext0, dest->ext0, 0x20);
    }
    if (src->ext1 != NULL && dest->ext1 != NULL) {
        MI_CpuCopy8(src->ext1, dest->ext1, 0x90);
    }
}

PoolEntry *EntryPool::Duplicate(int from, int to)
{
    PoolEntry *entry = Create(to);
    Copy(from, to);
    return entry;
}

// moves the entries of slots 1-15 down into the empty slots before them
void EntryPool_CompactFront()
{
    int i;

    for (i = 0; i < 15; i++) {
        if (gEntryPool.Get(i) == NULL) {
            gEntryPool.Move(i + 1, i);
        }
    }
}

void *PoolEntry::GetData1()
{
    return data1;
}
