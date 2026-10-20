// NitroSDK FS (file system) functions used by the game so far
#ifndef NITRO_FS_H
#define NITRO_FS_H

#include "nitro/types.h"
#include "nitro/os.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FSArchive FSArchive;

typedef enum FSResult {
    FS_RESULT_SUCCESS = 0
} FSResult;

typedef enum FSSeekFileMode {
    FS_SEEK_SET = 0,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;

typedef struct FSFileID {
    FSArchive *arch;
    u32 file_id;
} FSFileID;

typedef struct FSFile FSFile;

typedef struct FSFileLink {
    FSFile *prev;
    FSFile *next;
} FSFileLink;

struct FSFile {
    FSFileLink link;
    FSArchive *arc;
    u32 stat;
    void *argument;
    FSResult error;
    OSThreadQueue queue[1];
    u8 reserved1[16];
    u8 reserved2[24];
};

void FS_InitFile(FSFile *file);
BOOL FS_OpenFileFast(FSFile *file, FSFileID id);
BOOL FS_CloseFile(FSFile *file);
BOOL FS_SeekFile(FSFile *file, s32 offset, FSSeekFileMode origin);
s32 FS_ReadFile(FSFile *file, void *dst, s32 len);
s32 FS_ReadFileAsync(FSFile *file, void *dst, s32 len);
u32 FS_GetFileLength(FSFile *file);
void FS_CancelFile(FSFile *file);
BOOL FS_WaitAsync(FSFile *file);
FSArchive *FS_FindArchive(const char *name, int name_len);
void *FS_UnloadArchiveTables(FSArchive *arc);

static inline BOOL FS_IsSucceeded(const FSFile *file)
{
    return (file->error == FS_RESULT_SUCCESS) ? TRUE : FALSE;
}

#ifdef __cplusplus
}
#endif

#endif // NITRO_FS_H
