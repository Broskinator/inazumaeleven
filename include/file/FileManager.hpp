#ifndef FILE_FILEMANAGER_HPP
#define FILE_FILEMANAGER_HPP

#include "nitro/types.h"
#include "nitro/os.h"
#include "nitro/fs.h"

class GameHeap;

// Compressed files start with the SDK's compression header: the type in bits 4-7
// (1: LZ, 2: Huffman, 3: run-length, 8: filtered) and the decompressed size in bits 8-31.
#define FILE_COMPRESSION_TYPE(header) ((int)((header) & 0xF0))

enum FileRequestState {
    FILE_REQUEST_FREE = 0,
    FILE_REQUEST_RESERVED,
    FILE_REQUEST_OPENING,
    FILE_REQUEST_QUEUED,
    FILE_REQUEST_READING,
    FILE_REQUEST_READ,
    FILE_REQUEST_DECOMPRESSING,
    FILE_REQUEST_DONE,
    FILE_REQUEST_CANCELED,
    FILE_REQUEST_CANCELED_FREE,     // canceled; its buffer is freed when it stops
    FILE_REQUEST_ERROR,
};

// A file being loaded by the loading thread
struct FileRequest {
    u32 header;             // compression header of the file
    GameHeap *heap;             // where the buffer was allocated (NULL: given by the caller)
    char name[0x40];
    void *buffer;
    u32 offset;
    u32 size;               // bytes to read
    s32 state;              // FileRequestState
    FSFileID fileId;
    FileRequest *prev;
    FileRequest *next;
};

// An entry of a pack: a .ph file lists the entries of the .pb file next to it
struct PackEntry {
    u32 name[0x18 / 4];
    u32 offset;
    u32 size;
};

// An entry of the file table of a pack in memory
struct PackFileEntry {
    u32 nameOffset;
    u32 size;
    u32 index;          // the data is at index * the body's unit size
    u32 unk_0C;
};

// Loads files from the ROM, either at once or with a thread in the background
// (requests are loaded one after the other, compressed files are decompressed).
class FileManager {
public:
    FileManager();
    ~FileManager();
    void Init(int numRequests, GameHeap *heap);
    int FindFreeRequest();
    int FindRequest(void *buffer);
    void *Alloc(u32 size);
    void Free(void *ptr);
    u32 GetFileSize(const char *name);
    int Load(const char *name, void **buffer, GameHeap *heap, int offset, int size,
        BOOL compressed, int unused, u8 fromHead);
    int LoadAsync(const char *name, void **buffer, GameHeap *heap, int offset, int size,
        BOOL compressed, u8 fromHead);
    int Release(void *buffer);
    int ReleaseRequest(int index);
    BOOL IsBusy();
    BOOL Cancel(void *buffer, BOOL freeBuffer);
    BOOL CancelRequest(int index, BOOL freeBuffer);
    void WakeUp();
    static void ThreadMain(void *arg);
    BOOL ReadHeader(FileRequest *request, FSFile *file, u32 *size);
    void FinishDecompression(FileRequest *request);
    void Decompress(void *src, FileRequest *request);
    u32 FindInPack(const char *name, void **data, void *pack);
    BOOL ReadPackEntry(FSFile *file, PackEntry *entry, const char *name);
    BOOL LoadPack(const char *name, const char *entryName, void *buffer);
    void *LoadPackAlloc(const char *name, const char *entryName, GameHeap *heap, int unused);
    void *LoadPackAsync(const char *name, const char *entryName, void *buffer, GameHeap *heap, int unused);
    PackEntry GetPackEntry(const char *name, const char *entryName);
    u32 GetPackEntrySize(const char *name, const char *entryName);

    GameHeap *heap;
    OSMutex mutex;
    volatile s32 numRequests;  // (volatile: the searches read it again at each step)
    FileRequest *requests;  // (request 0 is never used)
    FSFile file;            // the loading thread's
    OSThread thread;
    u8 stack[0x800];
    void *buffers[2];       // where compressed files are read before they are decompressed
    s32 currentBuffer;
    u32 unk_938;
    FileRequest *head;      // the requests waiting to be loaded
    FileRequest *tail;
    FileRequest *decompressing;
};

#endif // FILE_FILEMANAGER_HPP
