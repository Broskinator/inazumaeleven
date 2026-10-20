#ifndef TEXT_TEXTFONT_HPP
#define TEXT_TEXTFONT_HPP

#include "nitro/types.h"
#include "nnsys/g2d/g2d_Font.h"

// where each character was drawn (TextFont::DrawText)
struct TextCharRect {
    s16 x;
    s16 y;
    s16 width;
    s16 height;
};

enum TextAlign {
    TEXT_ALIGN_LEFT = 0,
    TEXT_ALIGN_CENTER = 1,
    TEXT_ALIGN_RIGHT = 2,
};

// A font (NitroSystem) with the settings to measure and draw text with it. Text is
// Shift-JIS, or 16-bit characters when isWide is set.
class TextFont {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    // draws one character's glyph at (x, y)
    virtual void DrawGlyph(const u8 *image, void *canvas, int width, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);

    int GetCharLength(const char *str);
    u16 GetCharCode(const char *str);
    BOOL DrawText(const char *str, void *canvas, int width, int height, int x, int y,
        int color, TextCharRect *rects, int maxRects, BOOL drawLines, int align);
    int GetTextWidth(const char *str);
    int GetLineWidth(const char *str);
    int GetAlignedX(int x, int width, const char *str, int align);
    int GetCharWidth(const char *str);
    void func_02034a24(void *canvas, int width, int height, int x, int y, int lineWidth, int lineHeight);

    NNSG2dFont font;
    u8 unk_0C[0x14 - 0x0C];
    int charSpace;      // added between two characters
    int lineSpace;      // added between two lines
    u8 unk_1C[0x20 - 0x1C];
    u8 isWide;
    u8 useGlyphWidth;   // measure characters by their glyph's width instead of their advance
};

int SJIS_GetCharLength(const char *str);
int Wide_GetCharLength(const char *str);

#endif // TEXT_TEXTFONT_HPP
