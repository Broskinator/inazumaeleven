#ifndef DATA_CHUNKFILE_HPP
#define DATA_CHUNKFILE_HPP

#include "nitro/types.h"

// A file of blocks and items: each item belongs to a block (blockId), and Init gives
// every block a table of pointers to its items' data (by item index). Version 2 files
// have a 0x10-byte header, the blocks, then the number of items and the items;
// version 3 files have a 0x20-byte header with the items' offset, count and size.
struct ChunkFileHeader {
    char signature[4];
    u32 version;            // version << 16
    u32 unk_08;
    s16 numBlocks;
    s16 numItems;           // (version 3)
    u32 itemsOffset;        // from the blocks (version 3)
    u32 itemsSize;          // (version 3)
    u8 unk_18[8];
};

struct ChunkBlock {
    s16 id;
    s16 size;
    u32 unk_04;
    void *items[1];         // (as many as the block has items)
};

struct ChunkItem {
    s16 blockId;
    u16 index;
    u16 size;
    u16 unk_06;
    u8 data[1];
};

#define CHUNK_FILE_VERSION_2 0x20000
#define CHUNK_FILE_VERSION_3 0x30000

class ChunkFile {
public:
    ChunkFile();
    ~ChunkFile();
    BOOL Init(void *data, const char *signature);
    ChunkBlock *GetNextBlock(ChunkBlock *block);

    ChunkFileHeader *header;
    u8 *blocks;
    u32 itemsOffset;
    s32 numItems;
    u32 itemsSize;
    ChunkItem *items;
};

#endif // DATA_CHUNKFILE_HPP
