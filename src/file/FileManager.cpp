#include "file/FileManager.hpp"
#include "system/GameHeap.hpp"
#include "nitro/mi.h"
#include "nitro/std.h"
#include "msl/stdio.h"
#include "msl/string.h"

#include "file/RomFile.hpp"

extern "C" void func_02099c48(char *dst, const char *src);         // copies a name, in lower case

#ifndef NONMATCHING
// (called from the asm functions by their mangled names)
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
#endif

#define READ_CHUNK_SIZE 0x2000

FileManager::FileManager()
{
    numRequests = 0;
    tail = NULL;
    head = NULL;
    decompressing = NULL;
    unk_938 = 0;
}

FileManager::~FileManager()
{
    FS_UnloadArchiveTables(FS_FindArchive("rom", 3));
    OS_DestroyThread(&thread);
}

void FileManager::Init(int numRequests, GameHeap *heap)
{
    if (this->numRequests != 0) {
        return;
    }
    if (heap == NULL) {
        return;
    }

    this->numRequests = numRequests;
    this->heap = heap;
    requests = (FileRequest *)Alloc(numRequests * sizeof(FileRequest));
    MI_CpuClearFast(requests, this->numRequests * sizeof(FileRequest));
    OS_InitMutex(&mutex);
    OS_CreateThread(&thread, ThreadMain, this, stack + sizeof(stack), sizeof(stack), 30);
}

int FileManager::FindFreeRequest()
{
    int i;

    for (i = 1; i < numRequests; i++) {
        if (requests[i].state == FILE_REQUEST_FREE) {
            return i;
        }
    }

    return 0;
}

int FileManager::FindRequest(void *buffer)
{
    int i;

    for (i = 1; i < numRequests; i++) {
        FileRequest *request = &requests[i];
        if (request->state != FILE_REQUEST_FREE && request->buffer == buffer) {
            return i;
        }
    }

    return 0;
}

void *FileManager::Alloc(u32 size)
{
    return heap->Alloc(size, 15, TRUE);
}

void FileManager::Free(void *ptr)
{
    heap->Free(ptr);
}

u32 FileManager::GetFileSize(const char *name)
{
    FSFile file;
    u32 size;

    FS_InitFile(&file);
    if (!func_0209ddd0(&file, name)) {
        return 0;
    }

    size = FS_GetFileLength(&file);
    FS_CloseFile(&file);
    return size;
}

// loads a file (offset and size bytes of it; size 0: to its end) into *buffer, or into
// a buffer allocated from heap; names ending in '_' are compressed
int FileManager::Load(const char *name, void **buffer, GameHeap *heap, int offset, int size,
    BOOL compressed, int unused, u8 fromHead)
{
    FileRequest localRequest;
    FSFile file;
    FileRequest *request = &localRequest;
    void *dest;
    void *readBuffer;
    int fileSize;
    int chunk;
    int remaining;
    u8 *ptr;
    int readSize;

    if (heap == NULL) {
        heap = this->heap;
    }
    dest = *buffer;

    STD_CopyString(localRequest.name, name);
    FS_InitFile(&file);
    if (!func_0209ddd0(&file, name)) {
        return 0;
    }

    FS_SeekFile(&file, offset, FS_SEEK_SET);
    fileSize = FS_GetFileLength(&file);
    readSize = size;
    if (readSize == 0) {
        readSize = size = fileSize;
    }
    if (offset + readSize > fileSize) {
        readSize = size = fileSize - offset;
    }

    readBuffer = NULL;
    MI_CpuFill8(request, 0, sizeof(request->header));
    if (request->name[STD_GetStringLength(request->name) - 1] == '_') {
        compressed = TRUE;
    }
    if (compressed && ReadHeader(request, &file, (u32 *)&size)) {
        readBuffer = Alloc(readSize);
    }

    request->heap = NULL;
    if (dest == NULL) {
        request->heap = heap;
        dest = heap->Alloc(size, 1, fromHead);
        if (dest == NULL) {
            while (!FS_CloseFile(&file)) {
            }
            return 0;
        }
    }

    if (readBuffer == NULL) {
        readBuffer = dest;
    }

    remaining = readSize;
    ptr = (u8 *)readBuffer;
    request->buffer = dest;
    while (remaining > 0) {
        chunk = remaining;
        if (remaining >= READ_CHUNK_SIZE) {
            chunk = READ_CHUNK_SIZE;
        }
        remaining -= chunk;

        if (FS_ReadFileAsync(&file, ptr, chunk) < 0) {
            while (!FS_CloseFile(&file)) {
            }
            if (request->heap != NULL) {
                request->heap->Free(dest);
            }
            if (readBuffer != dest) {
                Free(readBuffer);
            }
            return 0;
        }
        ptr += chunk;
    }

    DC_FlushRange(readBuffer, readSize);
    while (!FS_CloseFile(&file)) {
    }

    if (readSize > 0x400) {
        OS_Sleep(1);
    }

    if (readBuffer != dest) {
        Decompress(readBuffer, request);
        Free(readBuffer);
    }

    *buffer = dest;
    return size;
}

// starts loading a file with the loading thread (see Load); returns its size
// (nonmatching: two registers are swapped)
#ifdef NONMATCHING
int FileManager::LoadAsync(const char *name, void **buffer, GameHeap *heap, int offset, int size,
    BOOL compressed, u8 fromHead)
{
    FSFile file;
    FileRequest *request;
    void *dest;
    int index;
    int fileSize;
    int readSize;
    BOOL opened;

    if (heap == NULL) {
        heap = this->heap;
    }

    OS_LockMutex(&mutex);
    index = FindFreeRequest();
    if (index == 0) {
        OS_UnlockMutex(&mutex);
        return 0;
    }

    request = &requests[index];
    STD_CopyString(request->name, name);
    request->state = FILE_REQUEST_RESERVED;
    OS_UnlockMutex(&mutex);

    dest = *buffer;
    request->state = FILE_REQUEST_OPENING;
    FS_InitFile(&file);
    opened = func_0209dd60(&request->fileId, name);
    if (opened) {
        opened = FS_OpenFileFast(&file, request->fileId);
    }
    if (!opened) {
        OS_LockMutex(&mutex);
        MI_CpuFill8(request, 0, sizeof(FileRequest));
        OS_UnlockMutex(&mutex);
        return 0;
    }

    FS_SeekFile(&file, offset, FS_SEEK_SET);
    fileSize = FS_GetFileLength(&file);
    readSize = size;
    if (readSize == 0) {
        readSize = size = fileSize;
    }
    if (offset + readSize > fileSize) {
        readSize = size = fileSize - offset;
    }

    MI_CpuFill8(request, 0, sizeof(request->header));
    if (request->name[STD_GetStringLength(request->name) - 1] == '_') {
        compressed = TRUE;
    }
    if (compressed) {
        ReadHeader(request, &file, (u32 *)&size);
    }

    request->state = FILE_REQUEST_QUEUED;
    request->heap = NULL;
    if (dest == NULL) {
        request->heap = heap;
        dest = heap->Alloc(size, 1, fromHead);
        if (dest == NULL) {
            while (!FS_CloseFile(&file)) {
            }
            OS_LockMutex(&mutex);
            MI_CpuFill8(request, 0, sizeof(FileRequest));
            OS_UnlockMutex(&mutex);
            return 0;
        }
    }

    request->buffer = dest;
    request->size = readSize;
    request->offset = offset;
    *buffer = dest;
    while (!FS_CloseFile(&file)) {
    }

    OS_LockMutex(&mutex);
    if (head == NULL) {
        head = tail = request;
    } else if (tail != NULL) {
        tail->next = request;
        request->prev = tail;
    }
    tail = request;
    OS_UnlockMutex(&mutex);

    WakeUp();
    OS_Sleep(1);
    return size;
}
#else
asm int FileManager::LoadAsync(const char *name, void **buffer, GameHeap *heap, int offset, int size,
    BOOL compressed, u8 fromHead)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r10, r0
    movs r9, r3
    add r0, r10, #0x4
    mov r4, r1
    mov r11, r2
    ldr r8, [sp, #0x70]
    add r7, sp, #0x0
    ldreq r9, [r10, #0x0]
    bl OS_LockMutex
    mov r0, r10
    bl FindFreeRequest
    cmp r0, #0x0
    bne @L_0203671c
    add r0, r10, #0x4
    bl OS_UnlockMutex
    add sp, sp, #0x48
    mov r0, #0x0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0203671c:
    ldr r2, [r10, #0x20]
    mov r1, #0x68
    mla r5, r0, r1, r2
    mov r1, r4
    add r0, r5, #0x8
    bl STD_CopyString
    mov r0, #0x1
    str r0, [r5, #0x54]
    add r0, r10, #0x4
    bl OS_UnlockMutex
    ldr r6, [r11, #0x0]
    mov r0, #0x2
    str r0, [r5, #0x54]
    mov r0, r7
    bl FS_InitFile
    mov r1, r4
    add r0, r5, #0x58
    bl func_0209dd60
    cmp r0, #0x0
    beq @L_0203677c
    add r1, r5, #0x58
    mov r0, r7
    ldmia r1, {r1, r2}
    bl FS_OpenFileFast
@L_0203677c:
    cmp r0, #0x0
    add r4, sp, #0x0
    bne @L_020367b4
    add r0, r10, #0x4
    bl OS_LockMutex
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x68
    bl MI_CpuFill8
    add r0, r10, #0x4
    bl OS_UnlockMutex
    add sp, sp, #0x48
    mov r0, #0x0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020367b4:
    mov r0, r4
    mov r1, r8
    mov r2, #0x0
    bl FS_SeekFile
    mov r0, r4
    bl FS_GetFileLength
    ldr r7, [sp, #0x74]
    mov r2, #0x4
    cmp r7, #0x0
    moveq r7, r0
    add r1, r8, r7
    streq r0, [sp, #0x74]
    cmp r1, r0
    subgt r7, r0, r8
    mov r0, r5
    mov r1, #0x0
    strgt r7, [sp, #0x74]
    bl MI_CpuFill8
    add r0, r5, #0x8
    bl STD_GetStringLength
    sub r0, r0, #0x1
    add r0, r5, r0
    ldrsb r0, [r0, #0x8]
    add r4, sp, #0x0
    cmp r0, #0x5f
    moveq r0, #0x1
    streq r0, [sp, #0x78]
    ldr r0, [sp, #0x78]
    cmp r0, #0x0
    beq @L_02036840
    add r2, sp, #0x0
    add r3, sp, #0x74
    mov r0, r10
    mov r1, r5
    bl ReadHeader
@L_02036840:
    mov r0, #0x3
    str r0, [r5, #0x54]
    mov r0, #0x0
    str r0, [r5, #0x4]
    cmp r6, #0x0
    bne @L_020368b8
    str r9, [r5, #0x4]
    ldrb r3, [sp, #0x7c]
    ldr r1, [sp, #0x74]
    mov r0, r9
    mov r2, #0x1
    bl _ZN8GameHeap5AllocEiii
    movs r6, r0
    bne @L_020368b8
    add r4, sp, #0x0
@L_0203687c:
    mov r0, r4
    bl FS_CloseFile
    cmp r0, #0x0
    beq @L_0203687c
    add r0, r10, #0x4
    bl OS_LockMutex
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x68
    bl MI_CpuFill8
    add r0, r10, #0x4
    bl OS_UnlockMutex
    add sp, sp, #0x48
    mov r0, #0x0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020368b8:
    str r6, [r5, #0x48]
    str r7, [r5, #0x50]
    str r8, [r5, #0x4c]
    str r6, [r11, #0x0]
@L_020368c8:
    mov r0, r4
    bl FS_CloseFile
    cmp r0, #0x0
    beq @L_020368c8
    add r0, r10, #0x4
    bl OS_LockMutex
    ldr r0, [r10, #0x93c]
    cmp r0, #0x0
    streq r5, [r10, #0x940]
    streq r5, [r10, #0x93c]
    beq @L_02036908
    ldr r0, [r10, #0x940]
    cmp r0, #0x0
    strne r5, [r0, #0x64]
    ldrne r0, [r10, #0x940]
    strne r0, [r5, #0x60]
@L_02036908:
    add r0, r10, #0x4
    str r5, [r10, #0x940]
    bl OS_UnlockMutex
    mov r0, r10
    bl WakeUp
    mov r0, #0x1
    bl OS_Sleep
    ldr r0, [sp, #0x74]
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

// forgets the request of a buffer once it is loaded: 0 if it was, -1 if it was canceled
// or failed, 1 while it is loading
int FileManager::Release(void *buffer)
{
    return ReleaseRequest(FindRequest(buffer));
}

int FileManager::ReleaseRequest(int index)
{
    FileRequest *request;
    int result;

    if (index == 0) {
        return -1;
    }

    request = &requests[index];
    switch (request->state) {
    case FILE_REQUEST_DONE:
        result = 0;
        break;
    case FILE_REQUEST_CANCELED:
    case FILE_REQUEST_CANCELED_FREE:
    case FILE_REQUEST_ERROR:
        result = -1;
        break;
    default:
        return 1;
    }

    OS_LockMutex(&mutex);
    MI_CpuFill8(request, 0, sizeof(FileRequest));
    OS_UnlockMutex(&mutex);
    return result;
}

BOOL FileManager::IsBusy()
{
    int i;
    int count = numRequests;

    for (i = 1; i < (s32)count; i++) {
        s32 state = requests[i].state;
        if (state == FILE_REQUEST_READING || state == FILE_REQUEST_DECOMPRESSING) {
            return TRUE;
        }
    }

    return FALSE;
}

BOOL FileManager::Cancel(void *buffer, BOOL freeBuffer)
{
    return CancelRequest(FindRequest(buffer), freeBuffer);
}

// returns FALSE if the file is being decompressed (it is canceled when that is done)
BOOL FileManager::CancelRequest(int index, BOOL freeBuffer)
{
    FileRequest *request;
    BOOL result;

    if (index == 0) {
        return TRUE;
    }

    OS_LockMutex(&mutex);
    request = &requests[index];
    result = TRUE;

    switch (request->state) {
    case FILE_REQUEST_READING:
    case FILE_REQUEST_DECOMPRESSING:
        if (request->state == FILE_REQUEST_DECOMPRESSING) {
            result = FALSE;
        } else {
            FS_CancelFile(&file);
        }
        if (freeBuffer) {
            request->state = FILE_REQUEST_CANCELED_FREE;
        }
        break;
    case FILE_REQUEST_QUEUED:
    case FILE_REQUEST_READ:
        request->state = FILE_REQUEST_CANCELED;
        if (freeBuffer) {
            if (request->heap != NULL) {
                request->heap->Free(request->buffer);
            }
            request->buffer = NULL;
        }
        break;
    case FILE_REQUEST_CANCELED:
    case FILE_REQUEST_CANCELED_FREE:
        break;
    case FILE_REQUEST_ERROR:
    default:
        if (freeBuffer && request->heap != NULL) {
            request->heap->Free(request->buffer);
        }
        MI_CpuFill8(request, 0, sizeof(FileRequest));
        break;
    }

    OS_UnlockMutex(&mutex);
    return result;
}

void FileManager::WakeUp()
{
    OS_WakeupThreadDirect(&thread);
}

void FileManager::ThreadMain(void *arg)
{
    FileManager *self = (FileManager *)arg;

    for (;;) {
        FileRequest *request;
        s32 result;
        int chunk;
        int remaining;
        u8 *ptr;

        OS_LockMutex(&self->mutex);
        if (self->head == NULL) {
            OS_UnlockMutex(&self->mutex);
            OS_SleepThread(NULL);
            continue;
        }
        OS_UnlockMutex(&self->mutex);

        request = self->head;
        FS_InitFile(&self->file);
        FS_OpenFileFast(&self->file, request->fileId);
        FS_SeekFile(&self->file, request->offset, FS_SEEK_SET);

        result = FILE_REQUEST_ERROR;
        if (request->state == FILE_REQUEST_QUEUED) {
            request->state = FILE_REQUEST_READING;
            result = FILE_REQUEST_DONE;

            if (FILE_COMPRESSION_TYPE(request->header)) {
                if (self->buffers[self->currentBuffer] != NULL) {
                    self->Free(self->buffers[self->currentBuffer]);
                    self->buffers[self->currentBuffer] = NULL;
                }
                self->buffers[self->currentBuffer] = self->Alloc(request->size);
            } else {
                self->buffers[self->currentBuffer] = request->buffer;
            }

            remaining = request->size;
            ptr = (u8 *)self->buffers[self->currentBuffer];
            while (remaining > 0) {
                s32 state;
                chunk = remaining;
                if (remaining >= READ_CHUNK_SIZE) {
                    chunk = READ_CHUNK_SIZE;
                }

                state = request->state;
                remaining -= chunk;
                if (state == FILE_REQUEST_CANCELED || state == FILE_REQUEST_CANCELED_FREE) {
                    break;
                }
                if (ptr == NULL) {
                    result = FILE_REQUEST_ERROR;
                    break;
                }
                if (FS_ReadFileAsync(&self->file, ptr, chunk) < 0) {
                    result = FILE_REQUEST_ERROR;
                    break;
                }
                ptr += chunk;
            }

            FS_WaitAsync(&self->file);
            if (!FS_IsSucceeded(&self->file)) {
                if (request->state != FILE_REQUEST_CANCELED || request->state != FILE_REQUEST_CANCELED_FREE) {
                    result = FILE_REQUEST_ERROR;
                }
            }
        }

        if (request->state == FILE_REQUEST_READING) {
            DC_FlushRange(self->buffers, request->size);
            request->state = FILE_REQUEST_READ;
        }

        while (!FS_CloseFile(&self->file)) {
        }

        OS_LockMutex(&self->mutex);
        self->head = request->next;
        request->next = NULL;

        if (request->state == FILE_REQUEST_READ) {
            if (result == FILE_REQUEST_ERROR) {
                if (FILE_COMPRESSION_TYPE(request->header) && self->buffers[self->currentBuffer] != NULL) {
                    self->Free(self->buffers[self->currentBuffer]);
                    self->buffers[self->currentBuffer] = NULL;
                }
                if (request->heap != NULL) {
                    request->heap->Free(request->buffer);
                }
                request->state = result;
            }

            if (result == FILE_REQUEST_DONE) {
                if (!FILE_COMPRESSION_TYPE(request->header)) {
                    self->buffers[self->currentBuffer] = NULL;
                    request->state = result;
                } else {
                    request->state = FILE_REQUEST_DECOMPRESSING;
                    self->decompressing = request;
                    self->currentBuffer ^= 1;
                    self->FinishDecompression(request);
                    self->decompressing = NULL;
                }
            }
        } else if (request->state == FILE_REQUEST_CANCELED || request->state == FILE_REQUEST_CANCELED_FREE) {
            if (FILE_COMPRESSION_TYPE(request->header) && self->buffers[self->currentBuffer] != NULL) {
                self->Free(self->buffers[self->currentBuffer]);
                self->buffers[self->currentBuffer] = NULL;
            }
            if (request->state == FILE_REQUEST_CANCELED_FREE && request->heap != NULL) {
                request->heap->Free(request->buffer);
            }
            MI_CpuFill8(request, 0, sizeof(FileRequest));
        }

        OS_UnlockMutex(&self->mutex);
    }
}

// reads the compression header at the start of the file (unless the name has a '%');
// returns whether the file is compressed, with its decompressed size
BOOL FileManager::ReadHeader(FileRequest *request, FSFile *file, u32 *size)
{
    if (strchr(request->name, '%') == NULL) {
        if (FS_ReadFile(file, request, sizeof(request->header)) < 0) {
            while (!FS_CloseFile(file)) {
            }
            return FALSE;
        }
        FS_SeekFile(file, -(s32)sizeof(request->header), FS_SEEK_CUR);
    }

    switch (FILE_COMPRESSION_TYPE(request->header)) {
    default:
        MI_CpuFill8(request, 0, sizeof(request->header));
        return FALSE;
    case 0x10:
    case 0x20:
    case 0x30:
    case 0x80:
        if (size != NULL) {
            *size = request->header >> 8;
        }
        return TRUE;
    }
}

void FileManager::FinishDecompression(FileRequest *request)
{
    Decompress(buffers[currentBuffer ^ 1], request);
    Free(buffers[currentBuffer ^ 1]);
    buffers[currentBuffer ^ 1] = NULL;

    if (request->state == FILE_REQUEST_CANCELED_FREE) {
        if (request->heap != NULL) {
            request->heap->Free(request->buffer);
        }
        MI_CpuFill8(request, 0, sizeof(FileRequest));
        return;
    }

    request->state = FILE_REQUEST_DONE;
}

void FileManager::Decompress(void *src, FileRequest *request)
{
    void *dest = request->buffer;

    switch (FILE_COMPRESSION_TYPE(*(u32 *)src)) {
    case 0x10:
        MI_UncompressLZ8(src, dest);
        break;
    case 0x20:
        MI_UncompressHuffman(src, dest);
        break;
    case 0x30:  // (run-length and filtered files are not decompressed here)
    case 0x80:
        break;
    }

    DC_FlushRange(dest, *(u32 *)src >> 8);
}

// finds a file in a pack loaded in memory: its size, and its data in *data
u32 FileManager::FindInPack(const char *name, void **data, void *pack)
{
    char path[0x80];
    PackFileEntry *entries;
    int count;
    int i;

    if (strcmp((char *)pack, "SFP") != 0) {
        return 0;
    }

    func_02099c48(path, name);
    strrchr(path, '/');

    entries = (PackFileEntry *)((u8 *)pack + 0x20);
    count = (entries[0].nameOffset - 0x20) >> 4;
    for (i = 0; i < count; i++) {
        if (strcmp((char *)pack + entries[i].nameOffset, path) == 0) {
            break;
        }
    }
    if (i >= count) {
        return 0;
    }

    pack = (u8 *)pack + ((u32 *)pack)[4];
    if (strcmp((char *)pack, "SFP") != 0) {
        return 0;
    }

    {
        u32 size = entries[i].size;
        *data = (u8 *)pack + ((u32 *)pack)[3] * entries[i].index;
        return size;
    }
}

BOOL FileManager::ReadPackEntry(FSFile *file, PackEntry *entry, const char *name)
{
    s32 read;

    do {
        read = FS_ReadFile(file, entry, sizeof(PackEntry));
        if (read == 0) {
            break;
        }
        if (strcmp((char *)entry->name, name) == 0) {
            return TRUE;
        }
    } while (read != 0);

    entry->size = 0;
    entry->offset = 0;
    return FALSE;
}

// loads entryName of the pack name.ph/name.pb into buffer
BOOL FileManager::LoadPack(const char *name, const char *entryName, void *buffer)
{
    FSFile file;
    char path[0x100];
    PackEntry entry;
    u32 remaining;
    u8 *ptr = (u8 *)buffer;

    if (buffer == NULL) {
        return FALSE;
    }

    FS_InitFile(&file);
    sprintf(path, "%s.ph", name);
    if (!func_0209ddd0(&file, path)) {
        return FALSE;
    }

    if (!ReadPackEntry(&file, &entry, entryName)) {
        FS_CloseFile(&file);
        return FALSE;
    }
    FS_CloseFile(&file);

    sprintf(path, "%s.pb", name);
    if (!func_0209ddd0(&file, path)) {
        return FALSE;
    }

    FS_SeekFile(&file, entry.offset, FS_SEEK_SET);
    remaining = entry.size;
    for (;;) {
        u32 chunk;
        if (remaining == 0) {
            break;
        }
        chunk = remaining;
        if ((int)remaining >= 0x4000) {
            chunk = 0x4000;
        }
        FS_ReadFileAsync(&file, ptr, chunk);
        FS_WaitAsync(&file);
        OS_Sleep(1);
        remaining -= chunk;
        ptr += chunk;
    }

    FS_CloseFile(&file);
    return TRUE;
}

void *FileManager::LoadPackAlloc(const char *name, const char *entryName, GameHeap *heap, int unused)
{
    FSFile file;
    char path[0x100];
    PackEntry entry;
    u32 size;
    void *buffer;

    FS_InitFile(&file);
    sprintf(path, "%s.ph", name);
    if (!func_0209ddd0(&file, path)) {
        return NULL;
    }

    if (!ReadPackEntry(&file, &entry, entryName)) {
        FS_CloseFile(&file);
        return NULL;
    }
    FS_CloseFile(&file);

    size = entry.size;
    buffer = heap->Alloc(size + 1, unused, TRUE);
    if (buffer != NULL) {
        MI_CpuFill8(buffer, 0, size + 1);
        LoadPack(name, entryName, buffer);
    }

    return buffer;
}

void *FileManager::LoadPackAsync(const char *name, const char *entryName, void *buffer, GameHeap *heap, int unused)
{
    FSFileID fileId;
    char path[0x80];
    FileRequest *request;
    int index;

    OS_LockMutex(&mutex);
    index = FindFreeRequest();
    if (index == 0) {
        OS_UnlockMutex(&mutex);
        return NULL;
    }

    sprintf(path, "%s.pb", name);
    if (!func_0209dd60(&fileId, path)) {
        return NULL;
    }

    request = &requests[index];
    request->fileId = fileId;
    request->state = FILE_REQUEST_RESERVED;
    OS_UnlockMutex(&mutex);

    request->state = FILE_REQUEST_OPENING;
    PackEntry entry = GetPackEntry(name, entryName);
    request->state = FILE_REQUEST_QUEUED;
    request->heap = heap;

    if (buffer == NULL) {
        u32 size = entry.size;
        buffer = heap->Alloc(size + 1, unused, TRUE);
        if (buffer == NULL) {
            request->state = FILE_REQUEST_FREE;
            return NULL;
        }
        MI_CpuFill8(buffer, 0, size);
    }

    request->buffer = buffer;
    request->size = entry.size;
    request->offset = entry.offset;

    OS_LockMutex(&mutex);
    if (head == NULL) {
        head = tail = request;
    } else if (tail != NULL) {
        tail->next = request;
        request->prev = tail;
    }
    tail = request;
    OS_UnlockMutex(&mutex);

    WakeUp();
    return buffer;
}

PackEntry FileManager::GetPackEntry(const char *name, const char *entryName)
{
    PackEntry entry = { 0 };
    FSFile file;
    char path[0x100];

    FS_InitFile(&file);
    sprintf(path, "%s.ph", name);
    if (!func_0209ddd0(&file, path)) {
        return entry;
    }

    ReadPackEntry(&file, &entry, entryName);
    FS_CloseFile(&file);
    return entry;
}

u32 FileManager::GetPackEntrySize(const char *name, const char *entryName)
{
    return GetPackEntry(name, entryName).size;
}
