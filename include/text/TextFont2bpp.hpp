#ifndef TEXT_TEXTFONT2BPP_HPP
#define TEXT_TEXTFONT2BPP_HPP

#include "text/TextFont.hpp"

// A TextFont for fonts with 2 bits per pixel: each pixel of a glyph is transparent,
// the text colour, or one of the font's two other colours (unk_1C, unk_1D: e.g. an edge
// and a shadow).
class TextFont2bpp : public TextFont {
public:
    TextFont2bpp();
    virtual ~TextFont2bpp();
    virtual int DrawGlyphTile4(const u8 *image, u8 *canvas, int width, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);
    virtual int DrawGlyphTile8(const u8 *image, u8 *canvas, int width, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);
    virtual int DrawGlyph4(const u8 *image, u8 *canvas, int pitch, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);
    virtual int DrawGlyph8(const u8 *image, u8 *canvas, int pitch, u8 color,
        const NNSG2dCharWidths *widths, int lineHeight, int x, int y);
};

#endif // TEXT_TEXTFONT2BPP_HPP
