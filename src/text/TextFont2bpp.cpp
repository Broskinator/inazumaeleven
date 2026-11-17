#include "text/TextFont2bpp.hpp"

TextFont2bpp::TextFont2bpp()
{
    SetSpacing(1, lineSpace);
}

TextFont2bpp::~TextFont2bpp()
{
}

// 4 bits per pixel, 8x8 tiles; the canvas is width pixels wide
int TextFont2bpp::DrawGlyphTile4(const u8 *image, u8 *canvas, int width, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int row;
    BOOL odd;
    int i;
    int mask = 0xC0;
    int shift = 6;
    int glyphWidth = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - glyphWidth;
    int rowOffset;
    u8 colors[4];

    colors[0] = 0;
    color &= 0xF;
    colors[1] = color & 0xF;
    colors[2] = edgeColor & 0xF;
    colors[3] = shadowColor & 0xF;

    if (!useGlyphWidth) {
        x += widths->left;
    }

    for (row = 0; row < lineHeight; row++) {
        int py = row + y;
        rowOffset = ((width >> 3) << 5) * (py >> 3);
        rowOffset += (py & 7) << 2;
        odd = (x & 1) != 0;

        for (i = 0; i < glyphWidth; i++) {
            int offset = rowOffset + (((i + x) >> 3) << 5) + (((i + x) & 7) >> 1);
            // (the pixel is extracted again for each use)
            if (((*image & mask) >> shift) > 0) {
                if (odd) {
                    WriteByte(canvas + offset, (canvas[offset] & 0x0F) | (colors[(*image & mask) >> shift] << 4));
                } else {
                    WriteByte(canvas + offset, (canvas[offset] & 0xF0) | colors[(*image & mask) >> shift]);
                }
            }

            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                shift = 6;
                image++;
            }

            odd = !odd;
        }

        for (i = 0; i < skip; i++) {
            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                shift = 6;
                image++;
            }
        }
    }

    return glyphWidth + charSpace;
}

// 8 bits per pixel, 8x8 tiles; the canvas is width pixels wide
int TextFont2bpp::DrawGlyphTile8(const u8 *image, u8 *canvas, int width, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int row;
    int i;
    int mask = 0xC0;
    int shift = 6;
    int glyphWidth = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - glyphWidth;
    int rowOffset;
    u8 colors[4];

    if (!useGlyphWidth) {
        x += widths->left;
    }

    colors[0] = 0;
    colors[1] = color;
    colors[2] = edgeColor;
    colors[3] = shadowColor;

    for (row = 0; row < lineHeight; row++) {
        int py = row + y;
        rowOffset = py / 8 * (width / 8 * 64);
        rowOffset += py % 8 * 8;

        for (i = 0; i < glyphWidth; i++) {
            int offset = rowOffset + (((i + x) >> 3) << 6) + ((i + x) & 7);
            int pixel = (*image & mask) >> shift;

            if (pixel > 0) {
                // (the original stops drawing the row after its first pixel)
                WriteByte(canvas + offset, colors[pixel]);
                break;
            }

            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                image++;
                shift = 6;
            }
        }

        for (i = 0; i < skip; i++) {
            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                shift = 6;
                image++;
            }
        }
    }

    return glyphWidth + charSpace;
}

// 4 bits per pixel bitmap, pitch pixels per row
int TextFont2bpp::DrawGlyph4(const u8 *image, u8 *canvas, int pitch, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int row;
    BOOL odd;
    int i;
    int mask = 0xC0;
    int shift = 6;
    int width = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - width;
    u8 *dest;
    u8 colors[4];

    colors[0] = 0;
    colors[1] = color & 0xF;
    colors[2] = edgeColor & 0xF;
    colors[3] = shadowColor & 0xF;

    if (!useGlyphWidth) {
        x += widths->left;
    }

    for (row = 0; row < lineHeight; row++) {
        odd = (x & 1) != 0;
        dest = canvas + (pitch * (y + row) + x) / 2;

        for (i = 0; i < width; i++) {
            int pixel = (*image & mask) >> shift;

            if (pixel > 0) {
                if (odd) {
                    WriteByte(dest, (*dest & 0x0F) | (colors[pixel] << 4));
                } else {
                    WriteByte(dest, (*dest & 0xF0) | colors[pixel]);
                }
            }

            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                shift = 6;
                image++;
            }

            if (odd) {
                dest++;
            }

            odd = !odd;
        }

        for (i = 0; i < skip; i++) {
            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                shift = 6;
                image++;
            }
        }
    }

    return width + 1;
}

// 8 bits per pixel bitmap, pitch pixels per row
int TextFont2bpp::DrawGlyph8(const u8 *image, u8 *canvas, int pitch, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int i;
    int mask = 0xC0;
    int shift = 6;
    int width = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - width;
    int row;
    u8 *dest;
    u8 colors[4];

    colors[0] = 0;
    colors[1] = color;
    colors[2] = edgeColor;
    colors[3] = shadowColor;

    x += widths->left;

    for (row = 0; row < lineHeight; row++) {
        dest = canvas + (pitch * (y + row) + x);

        for (i = 0; i < width; i++) {
            int pixel = (*image & mask) >> shift;

            if (pixel > 0) {
                WriteByte(dest, colors[pixel]);
            }

            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                shift = 6;
                image++;
            }

            dest++;
        }

        for (i = 0; i < skip; i++) {
            mask >>= 2;
            shift -= 2;
            if (mask == 0) {
                mask = 0xC0;
                shift = 6;
                image++;
            }
        }
    }

    return width + 1;
}
