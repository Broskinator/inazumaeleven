#include "data/ChunkFile.hpp"
#include "nitro/std.h"

#define NEXT_BLOCK(block) ((ChunkBlock *)((u8 *)(block) + (block)->size))
#define NEXT_ITEM(item) ((ChunkItem *)((u8 *)(item) + (item)->size))

ChunkFile::ChunkFile()
{
    header = NULL;
}

ChunkFile::~ChunkFile()
{
}

BOOL ChunkFile::Init(void *data, const char *signature)
{
    u32 version;
    ChunkBlock *block;
    ChunkItem *item;
    int i;
    int n;

    header = (ChunkFileHeader *)data;
    if (data == NULL) {
        return FALSE;
    }

    if (signature != NULL) {
        STD_CompareString(header->signature, signature);
    }

    version = header->version & 0xFFFF0000;
    if (version == CHUNK_FILE_VERSION_2) {
        blocks = (u8 *)((u8 *)(header + 1) - 0x10);
        itemsOffset = 0;
        block = (ChunkBlock *)blocks;
        for (i = 0; i < header->numBlocks; i++) {
            itemsOffset += block->size;
            block = NEXT_BLOCK(block);
        }

        block = (ChunkBlock *)blocks;
        numItems = *(s32 *)(blocks + itemsOffset);
        item = (ChunkItem *)(blocks + itemsOffset + 4);
        items = item;
        itemsSize = item->size;

        i = 0;
        n = 0;
        while (i < header->numBlocks) {
            while (block->id == item->blockId) {
                block->items[item->index] = item->data;
                n++;
                if (n >= numItems) {
                    goto next;
                }
                item = NEXT_ITEM(item);
                itemsSize += item->size;
            }
        next:
            block = NEXT_BLOCK(block);
            i++;
        }
    } else if (version == CHUNK_FILE_VERSION_3) {
        block = (ChunkBlock *)(header + 1);
        blocks = (u8 *)block;
        itemsOffset = header->itemsOffset;
        numItems = header->numItems;
        itemsSize = header->itemsSize;
        item = (ChunkItem *)((u8 *)block + itemsOffset);
        items = item;

        i = 0;
        n = 0;
        while (i < header->numBlocks && n < numItems) {
            if (block->id == item->blockId) {
                do {
                    block->items[item->index] = item->data;
                    n++;
                    item = NEXT_ITEM(item);
                } while (n < numItems && block->id == item->blockId);
            }
            block = NEXT_BLOCK(block);
            i++;
        }
    }

    return TRUE;
}

// the block after this one (the first block for NULL), NULL after the last
ChunkBlock *ChunkFile::GetNextBlock(ChunkBlock *block)
{
    ChunkBlock *next;

    if (block == NULL) {
        return (ChunkBlock *)blocks;
    }

    next = NEXT_BLOCK(block);
    if ((u32)((u8 *)next - blocks) >= header->itemsOffset) {
        next = NULL;
    }

    return next;
}
