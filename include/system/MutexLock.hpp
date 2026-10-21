#ifndef SYSTEM_MUTEXLOCK_HPP
#define SYSTEM_MUTEXLOCK_HPP

#include "nitro/os.h"

// Locks a mutex for as long as it exists.
class MutexLock {
public:
    MutexLock(OSMutex *mutex) : mutex(mutex) { OS_LockMutex(mutex); }
    ~MutexLock() { OS_UnlockMutex(mutex); }

private:
    OSMutex *mutex;
};

#endif // SYSTEM_MUTEXLOCK_HPP
