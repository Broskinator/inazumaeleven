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
//
// Text is drawn into a canvas of 4 or 8 bits per pixel, either a plain bitmap (one row
// after the other, `pitch` pixels wide) or 8x8 tiles (character data, as for BG/OBJ).
// The canvas is in VRAM, which can only be written 16 bits at a time (WriteByte).
class TextFont {
public:
    TextFont();
    virtual ~TextFont();
    virtual BOOL DrawTextTile4(int x, int y, const char *str, int color, int align, void *canvas,
        int width, int height, TextCharRect *rects, int maxRects);
    virtual BOOL DrawTextTile8(int x, int y, const char *str, int color, int align, void *canvas,
        int width, int height, TextCharRect *rects, int maxRects);
    // glyph drawing: (x, y) in the canvas; returns the horizontal advance
    virtual int DrawGlyphTile4(const u8 *image, u8 *canvas, int width, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);
    virtual int DrawGlyph4(const u8 *image, u8 *canvas, int pitch, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);
    virtual int DrawGlyphTile8(const u8 *image, u8 *canvas, int width, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);
    virtual int DrawGlyph8(const u8 *image, u8 *canvas, int pitch, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);

    void Reset();
    void WriteByte(u8 *dest, u8 value);
    int GetCharLength(const char *str);
    u16 GetCharCode(const char *str);
    BOOL DrawText(const char *str, void *canvas, int width, int height, int x, int y,
        int color, TextCharRect *rects, int maxRects, BOOL clearLines, int align);
    int GetTextWidth(const char *str);
    int GetLineWidth(const char *str);
    int GetAlignedX(int x, int width, const char *str, int align);
    int GetCharWidth(const char *str);
    void SetSpacing(int charSpace, int lineSpace);
    void ResetSpacing();
    BOOL SetFont(void *nftrFile, u32 unk_10, u8 isWide);
    void ClearRect4(u8 *canvas, int pitch, int height, int x, int y, int width, int rectHeight);
    void ClearRectTile4(u8 *canvas, int width, int height, int x, int y, int rectWidth, int rectHeight);
    void SetSubColors(u8 edgeColor, u8 shadowColor);
    void SetUseGlyphWidth(u8 useGlyphWidth);

    NNSG2dFont font;
    void *nftrFile;
    u32 unk_10;
    int charSpace;      // added between two characters
    int lineSpace;      // added between two lines
    u8 edgeColor;
    u8 shadowColor;
    u8 unk_1E;
    u8 unk_1F;
    u8 isWide;
    u8 useGlyphWidth;   // measure characters by their glyph's width instead of their advance
};

int SJIS_GetCharLength(const char *str);
int Wide_GetCharLength(const char *str);

#endif // TEXT_TEXTFONT_HPP
