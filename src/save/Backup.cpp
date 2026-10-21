#include "save/Backup.hpp"

Backup::Backup()
{
}

Backup::~Backup()
{
}

BOOL Backup::Init(CARDBackupType type)
{
    BOOL result;

    CARD_Init();
    OS_InitMutex(&mutex);

    if (type == CARD_BACKUP_TYPE_NOT_USE) {
        type = CARD_BACKUP_TYPE_EEPROM_512KBITS;
    }

    lockId = OS_GetLockID();
    this->type = type;

    CARD_LockBackup(lockId);
    result = CARD_IdentifyBackup(this->type);
    CARD_UnlockBackup(lockId);

    return result;
}

// whether the start of the backup memory can be read
BOOL Backup::IsPresent()
{
    BOOL present = FALSE;
    u32 data;

    if (Read(0, sizeof(data), &data)) {
        present = TRUE;
    }

    return present;
}

// whether the last WriteAsync is done
BOOL Backup::IsWriteDone()
{
    if (CARD_TryWaitBackupAsync()) {
        if (mutex.thread != NULL) {
            OS_UnlockMutex(&mutex);
        }
        return TRUE;
    }

    return FALSE;
}

BOOL Backup::Read(u32 offset, u32 size, void *buffer)
{
    CARDResult result;

    OS_LockMutex(&mutex);
    CARD_LockBackup(lockId);

    switch (type) {
    case CARD_BACKUP_TYPE_EEPROM_4KBITS:
    case CARD_BACKUP_TYPE_EEPROM_64KBITS:
    case CARD_BACKUP_TYPE_EEPROM_512KBITS:
        CARD_ReadEeprom(offset, buffer, size);
        break;
    case CARD_BACKUP_TYPE_FLASH_2MBITS:
    case CARD_BACKUP_TYPE_FLASH_4MBITS:
    case CARD_BACKUP_TYPE_FLASH_8MBITS:
        CARD_ReadFlash(offset, buffer, size);
        break;
    case CARD_BACKUP_TYPE_FRAM_256KBITS:
        CARD_ReadFram(offset, buffer, size);
        break;
    }

    result = CARD_GetResultCode();
    CARD_UnlockBackup(lockId);
    OS_UnlockMutex(&mutex);

    return result == CARD_RESULT_SUCCESS;
}

BOOL Backup::Write(u32 offset, u32 size, const void *buffer)
{
    CARDResult result;

    OS_LockMutex(&mutex);
    CARD_LockBackup(lockId);

    switch (type) {
    case CARD_BACKUP_TYPE_EEPROM_4KBITS:
    case CARD_BACKUP_TYPE_EEPROM_64KBITS:
    case CARD_BACKUP_TYPE_EEPROM_512KBITS:
        CARD_WriteAndVerifyEeprom(offset, buffer, size);
        break;
    case CARD_BACKUP_TYPE_FLASH_2MBITS:
    case CARD_BACKUP_TYPE_FLASH_4MBITS:
    case CARD_BACKUP_TYPE_FLASH_8MBITS:
        CARD_WriteAndVerifyFlash(offset, buffer, size);
        break;
    case CARD_BACKUP_TYPE_FRAM_256KBITS:
        CARD_WriteAndVerifyFram(offset, buffer, size);
        break;
    }

    result = CARD_GetResultCode();
    CARD_UnlockBackup(lockId);
    OS_UnlockMutex(&mutex);

    return result == CARD_RESULT_SUCCESS;
}

// starts writing; the mutex stays locked until IsWriteDone
BOOL Backup::WriteAsync(u32 offset, u32 size, const void *buffer)
{
    writeOffset = offset;
    writeSize = size;
    writeBuffer = buffer;

    if (!OS_TryLockMutex(&mutex)) {
        return FALSE;
    }

    CARD_LockBackup(lockId);

    switch (type) {
    case CARD_BACKUP_TYPE_EEPROM_4KBITS:
    case CARD_BACKUP_TYPE_EEPROM_64KBITS:
    case CARD_BACKUP_TYPE_EEPROM_512KBITS:
        CARD_WriteAndVerifyEepromAsync(offset, buffer, size, WriteCallback, this);
        break;
    case CARD_BACKUP_TYPE_FLASH_2MBITS:
    case CARD_BACKUP_TYPE_FLASH_4MBITS:
    case CARD_BACKUP_TYPE_FLASH_8MBITS:
        CARD_WriteAndVerifyFlashAsync(offset, buffer, size, WriteCallback, this);
        break;
    case CARD_BACKUP_TYPE_FRAM_256KBITS:
        CARD_WriteAndVerifyFramAsync(offset, buffer, size, WriteCallback, this);
        break;
    }

    return TRUE;
}

// the write is done: tries again if it failed
void Backup::WriteCallback(void *arg)
{
    Backup *backup = (Backup *)arg;

    CARD_UnlockBackup(backup->lockId);

    if (CARD_GetResultCode() != CARD_RESULT_SUCCESS) {
        backup->WriteAsync(backup->writeOffset, backup->writeSize, backup->writeBuffer);
    }
}
