// NitroSystem G2D fonts (the parts the game uses so far; layouts from NitroSystem)
#ifndef NNSYS_G2D_G2D_FONT_H
#define NNSYS_G2D_G2D_FONT_H

#include "nitro/types.h"

#define NNS_G2D_GLYPH_INDEX_NOT_FOUND 0xFFFF

typedef struct NNSG2dCharWidths {
    s8 left;
    u8 glyphWidth;
    s8 charWidth;
} NNSG2dCharWidths;

typedef struct NNSG2dFontWidth {
    u16 indexBegin;
    u16 indexEnd;
    struct NNSG2dFontWidth *pNext;
    NNSG2dCharWidths widthTable[];
} NNSG2dFontWidth;

typedef struct NNSG2dFontGlyph {
    u8 cellWidth;
    u8 cellHeight;
    u16 cellSize;
    s8 baselinePos;
    u8 maxCharWidth;
    u8 bpp;
    u8 flags;
    u8 glyphTable[];
} NNSG2dFontGlyph;

typedef struct NNSG2dFontInformation {
    u8 fontType;
    s8 linefeed;
    u16 alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    u8 encoding;
    NNSG2dFontGlyph *pGlyph;
    NNSG2dFontWidth *pWidth;
    void *pMap;
} NNSG2dFontInformation;

typedef struct NNSG2dFont {
    NNSG2dFontInformation *pRes;
    void *cbCharSpliter;
} NNSG2dFont;

#ifdef __cplusplus
extern "C" {
#endif

void NNS_G2dFontInitUTF16(NNSG2dFont *pFont, void *pNftrFile);
void NNS_G2dFontInitShiftJIS(NNSG2dFont *pFont, void *pNftrFile);
u16 NNS_G2dFontFindGlyphIndex(const NNSG2dFont *pFont, u16 c);
const NNSG2dCharWidths *NNS_G2dFontGetCharWidthsFromIndex(const NNSG2dFont *pFont, u16 idx);

#ifdef __cplusplus
}
#endif

static inline const NNSG2dCharWidths *NNS_G2dFontGetCharWidths(const NNSG2dFont *pFont, u16 c)
{
    u16 index = NNS_G2dFontFindGlyphIndex(pFont, c);

    if (index == NNS_G2D_GLYPH_INDEX_NOT_FOUND) {
        index = pFont->pRes->alterCharIndex;
    }

    return NNS_G2dFontGetCharWidthsFromIndex(pFont, index);
}

static inline const u8 *NNS_G2dFontGetGlyphImageFromIndex(const NNSG2dFont *pFont, u16 idx)
{
    const NNSG2dFontGlyph *pGlyph = pFont->pRes->pGlyph;
    return pGlyph->glyphTable + idx * pGlyph->cellSize;
}

static inline const u8 *NNS_G2dFontGetGlyphImage(const NNSG2dFont *pFont, u16 c)
{
    u16 index = NNS_G2dFontFindGlyphIndex(pFont, c);

    if (index == NNS_G2D_GLYPH_INDEX_NOT_FOUND) {
        index = pFont->pRes->alterCharIndex;
    }

    return NNS_G2dFontGetGlyphImageFromIndex(pFont, index);
}

#endif // NNSYS_G2D_G2D_FONT_H
