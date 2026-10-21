// NitroSDK OS functions used by the game so far
#ifndef NITRO_OS_H
#define NITRO_OS_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void DC_FlushRange(const void *startAddr, u32 nBytes);

typedef struct OSThread {
    u8 data[0xC0];
} OSThread;

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

void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
void OS_DestroyThread(OSThread *thread);
void OS_SleepThread(OSThreadQueue *queue);
void OS_WakeupThreadDirect(OSThread *thread);
void OS_Sleep(u32 msec);

typedef u32 OSIntrMode;

typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *arg);

typedef struct OSAlarm {
    u8 data[0x2C];
} OSAlarm;

void OS_InitTick(void);
OSTick OS_GetTick(void);
void OS_CreateAlarm(OSAlarm *alarm);
void OS_SetPeriodicAlarm(OSAlarm *alarm, OSTick start, OSTick period, OSAlarmHandler handler, void *arg);
void OS_CancelAlarm(OSAlarm *alarm);
void OS_SetThreadStackWarningOffset(OSThread *thread, u32 offset);

#define OS_SYSTEM_CLOCK 33514000
#define OS_MicroSecondsToTicks(usec) ((OSTick)(((OS_SYSTEM_CLOCK / 1000) * (u64)(usec)) / 64 / 1000))
OSIntrMode OS_DisableInterrupts(void);
OSIntrMode OS_RestoreInterrupts(OSIntrMode state);

#ifdef __cplusplus
}
#endif

#endif // NITRO_OS_H
