#ifndef SAVE_BACKUP_HPP
#define SAVE_BACKUP_HPP

#include "nitro/types.h"
#include "nitro/os.h"
#include "nitro/card.h"

// Access to the Game Card's backup memory (the save), for one thread at a time.
class Backup {
public:
    BOOL Init(CARDBackupType type);
    BOOL IsPresent();
    BOOL IsWriteDone();
    BOOL Read(u32 offset, u32 size, void *buffer);
    BOOL Write(u32 offset, u32 size, const void *buffer);
    BOOL WriteAsync(u32 offset, u32 size, const void *buffer);

    static void WriteCallback(void *arg);

    // the request of WriteAsync, written again if it fails
    u32 writeOffset;
    u32 writeSize;
    const void *writeBuffer;
    CARDBackupType type;
    u16 lockId;
    OSMutex mutex;
};

#endif // SAVE_BACKUP_HPP
