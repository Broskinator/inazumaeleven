// NitroSDK CARD (Game Card backup memory) functions used by the game so far
#ifndef NITRO_CARD_H
#define NITRO_CARD_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*MIDmaCallback)(void *arg);

// type | (log2 of the size) << 8 | vendor << 16
#define CARD_BACKUP_TYPE_DEFINE(type, size, vendor) \
    (((CARD_BACKUP_TYPE_DEVICE_ ## type) << 0) | ((size) << 8) | ((vendor) << 16))

#define CARD_BACKUP_TYPE_DEVICE_EEPROM 1
#define CARD_BACKUP_TYPE_DEVICE_FLASH 2
#define CARD_BACKUP_TYPE_DEVICE_FRAM 3

typedef enum CARDBackupType {
    CARD_BACKUP_TYPE_EEPROM_4KBITS = CARD_BACKUP_TYPE_DEFINE(EEPROM, 9, 0),
    CARD_BACKUP_TYPE_EEPROM_64KBITS = CARD_BACKUP_TYPE_DEFINE(EEPROM, 13, 0),
    CARD_BACKUP_TYPE_EEPROM_512KBITS = CARD_BACKUP_TYPE_DEFINE(EEPROM, 16, 0),
    CARD_BACKUP_TYPE_FLASH_2MBITS = CARD_BACKUP_TYPE_DEFINE(FLASH, 18, 0),
    CARD_BACKUP_TYPE_FLASH_4MBITS = CARD_BACKUP_TYPE_DEFINE(FLASH, 19, 0),
    CARD_BACKUP_TYPE_FLASH_8MBITS = CARD_BACKUP_TYPE_DEFINE(FLASH, 20, 0),
    CARD_BACKUP_TYPE_FRAM_256KBITS = CARD_BACKUP_TYPE_DEFINE(FRAM, 15, 0),
    CARD_BACKUP_TYPE_NOT_USE = 0
} CARDBackupType;

typedef enum CARDResult {
    CARD_RESULT_SUCCESS = 0
} CARDResult;

typedef enum CARDRequest {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP
} CARDRequest;

typedef enum CARDRequestMode {
    CARD_REQUEST_MODE_RECV = 0,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
} CARDRequestMode;

#define CARD_RETRY_COUNT_MAX 10

typedef struct CARDRomHeader {
    char game_name[12];
    u32 game_code;
    u8 unk_10[0x150];
} CARDRomHeader;

void CARD_Init(void);
const CARDRomHeader *CARD_GetOwnRomHeader(void);
void CARD_LockBackup(u16 lock_id);
void CARD_UnlockBackup(u16 lock_id);
CARDResult CARD_GetResultCode(void);
BOOL CARD_IdentifyBackup(CARDBackupType type);
BOOL CARD_TryWaitBackupAsync(void);
BOOL CARDi_RequestStreamCommand(u32 src, u32 dst, u32 len, MIDmaCallback callback, void *arg,
    BOOL is_async, CARDRequest req_type, int req_retry, CARDRequestMode req_mode);

static inline BOOL CARDi_ReadBackup(u32 src, void *dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async)
{
    return CARDi_RequestStreamCommand(src, (u32)dst, len, callback, arg, is_async,
        CARD_REQ_READ_BACKUP, 1, CARD_REQUEST_MODE_RECV);
}

static inline BOOL CARDi_WriteAndVerifyBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg, BOOL is_async)
{
    return CARDi_RequestStreamCommand((u32)src, dst, len, callback, arg, is_async,
        CARD_REQ_WRITE_BACKUP, CARD_RETRY_COUNT_MAX, CARD_REQUEST_MODE_SEND_VERIFY);
}

static inline BOOL CARDi_ProgramAndVerifyBackup(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg, BOOL is_async)
{
    return CARDi_RequestStreamCommand((u32)src, dst, len, callback, arg, is_async,
        CARD_REQ_PROGRAM_BACKUP, CARD_RETRY_COUNT_MAX, CARD_REQUEST_MODE_SEND_VERIFY);
}

static inline BOOL CARD_ReadEeprom(u32 src, void *dst, u32 len)
{
    return CARDi_ReadBackup(src, dst, len, NULL, NULL, FALSE);
}

static inline BOOL CARD_ReadFlash(u32 src, void *dst, u32 len)
{
    return CARDi_ReadBackup(src, dst, len, NULL, NULL, FALSE);
}

static inline BOOL CARD_ReadFram(u32 src, void *dst, u32 len)
{
    return CARDi_ReadBackup(src, dst, len, NULL, NULL, FALSE);
}

static inline BOOL CARD_WriteAndVerifyEeprom(u32 dst, const void *src, u32 len)
{
    return CARDi_ProgramAndVerifyBackup(dst, src, len, NULL, NULL, FALSE);
}

static inline BOOL CARD_WriteAndVerifyFlash(u32 dst, const void *src, u32 len)
{
    return CARDi_WriteAndVerifyBackup(dst, src, len, NULL, NULL, FALSE);
}

static inline BOOL CARD_WriteAndVerifyFram(u32 dst, const void *src, u32 len)
{
    return CARDi_ProgramAndVerifyBackup(dst, src, len, NULL, NULL, FALSE);
}

static inline BOOL CARD_WriteAndVerifyEepromAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg)
{
    return CARDi_ProgramAndVerifyBackup(dst, src, len, callback, arg, TRUE);
}

static inline BOOL CARD_WriteAndVerifyFlashAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg)
{
    return CARDi_WriteAndVerifyBackup(dst, src, len, callback, arg, TRUE);
}

static inline BOOL CARD_WriteAndVerifyFramAsync(u32 dst, const void *src, u32 len, MIDmaCallback callback, void *arg)
{
    return CARDi_ProgramAndVerifyBackup(dst, src, len, callback, arg, TRUE);
}

#ifdef __cplusplus
}
#endif

#endif // NITRO_CARD_H
