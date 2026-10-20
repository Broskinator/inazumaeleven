#ifndef TEXT_TEXT_FONT_H
#define TEXT_TEXT_FONT_H

#include "nitro/types.h"
#include "nnsys/g2d/g2d_Font.h"

typedef struct TextFont {
    u32 unk_00;
    NNSG2dFont font;
    u8 unk_0C[0x14 - 0x0C];
    int charSpace;      // added between two characters
    u8 unk_18[0x21 - 0x18];
    u8 useGlyphWidth;   // measure characters by their glyph's width instead of their advance
} TextFont;

enum {
    TEXT_ALIGN_LEFT = 0,
    TEXT_ALIGN_CENTER = 1,
    TEXT_ALIGN_RIGHT = 2,
};

u16 func_02033b98(TextFont *textFont, const char *str);
int func_02033b74(TextFont *textFont, const char *str);
int TextFont_GetLineWidth(TextFont *textFont, const char *str);
int TextFont_GetAlignedX(TextFont *textFont, int x, int width, const char *str, int align);
int TextFont_GetCharWidth(TextFont *textFont, const char *str);

#endif // TEXT_TEXT_FONT_H
