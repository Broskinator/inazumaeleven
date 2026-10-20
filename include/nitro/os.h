// NitroSDK OS functions used by the game so far
#ifndef NITRO_OS_H
#define NITRO_OS_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void DC_FlushRange(const void *startAddr, u32 nBytes);

typedef struct OSThread OSThread;

typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;

typedef struct OSMutex OSMutex;

typedef struct OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
} OSMutexLink;

struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;   // the thread holding the mutex
    s32 count;
    OSMutexLink link;
};

void OS_InitMutex(OSMutex *mutex);
void OS_LockMutex(OSMutex *mutex);
void OS_UnlockMutex(OSMutex *mutex);
BOOL OS_TryLockMutex(OSMutex *mutex);

s32 OS_GetLockID(void);

#ifdef __cplusplus
}
#endif

#endif // NITRO_OS_H
