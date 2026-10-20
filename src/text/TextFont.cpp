#include "text/TextFont.hpp"

// Length in bytes of the Shift-JIS character at str (1 or 2; 0 for no string)
int SJIS_GetCharLength(const char *str)
{
    u8 c;

    if (str == NULL) {
        return 0;
    }

    c = *str;

    if ((c >= 0x20 && c <= 0x7E) || (c >= 0xA1 && c <= 0xDF)) {
        return 1;
    }

    return 2;
}

// Length in bytes of the 16-bit character at str (0 at the end of the string)
int Wide_GetCharLength(const char *str)
{
    if (((const u8 *)str)[0] == 0 && ((const u8 *)str)[1] == 0) {
        return 0;
    }

    return 2;
}

int TextFont::GetCharLength(const char *str)
{
    if (isWide) {
        return Wide_GetCharLength(str);
    }

    return SJIS_GetCharLength(str);
}

// Character code of the character at str
u16 TextFont::GetCharCode(const char *str)
{
    u16 code;
    int len = GetCharLength(str);

    if (len == 0) {
        return 0;
    }

    if (len == 1) {
        code = (u8)str[0];
    } else {
        code = (u8)str[1] | ((u8)str[0] << 8);
    }

    return code;
}

// Draws the text in a box (width x height, from x, y), wrapping lines that are too long.
// The place of each character is written to rects (up to maxRects). Returns FALSE when
// there is nothing to draw on.
BOOL TextFont::DrawText(const char *str, void *canvas, int width, int height, int x, int y,
    int color, TextCharRect *rects, int maxRects, BOOL drawLines, int align)
{
    int curX;
    int lineHeight;
    int charWidth;
    u16 c;
    int count = 0;

    if (str == NULL || canvas == NULL || width <= 0) {
        return FALSE;
    }

    lineHeight = font.pRes->pGlyph->cellHeight;
    curX = GetAlignedX(x, width, str, align);

    if (drawLines) {
        func_02034a24(canvas, width, height, x, y, GetLineWidth(str), lineHeight + lineSpace);
    }

    if (y < 0) {
        return FALSE;
    }

    for (; *str != '\0'; str++) {
        const NNSG2dCharWidths *widths;
        const u8 *image;

        if (*str == '\n') {
            curX = GetAlignedX(x, width, str + 1, align);

            if (drawLines) {
                func_02034a24(canvas, width, height, x, y + lineHeight, GetLineWidth(str + 1), lineHeight + lineSpace);
            }

            y += lineHeight + lineSpace;
            continue;
        }

        c = GetCharCode(str);
        widths = NNS_G2dFontGetCharWidths(&font, c);

        if (!useGlyphWidth || (charWidth = widths->glyphWidth) == 0) {
            charWidth = widths->charWidth;
        }

        image = NNS_G2dFontGetGlyphImage(&font, c);

        if (curX + charWidth > width) {
            curX = GetAlignedX(x, width, str, align);

            if (drawLines) {
                func_02034a24(canvas, width, height, x, y + lineHeight, GetLineWidth(str), lineHeight + lineSpace);
            }

            y += lineHeight + lineSpace;
        }

        if (y + lineHeight > height) {
            break;
        }

        if (rects != NULL && count < maxRects) {
            rects->x = curX;
            rects->y = y;
            rects->width = charWidth;
            rects->height = lineHeight;
            rects++;
            count++;
        }

        DrawGlyph(image, canvas, width, color, widths, lineHeight, curX, y);
        curX += charWidth + charSpace;

        if (GetCharLength(str) == 2) {
            str++;
        }
    }

    return TRUE;
}

// Width in pixels of the widest line of the text
int TextFont::GetTextWidth(const char *str)
{
    int cur, max;
    cur = max = 0;

    for (; *str != '\0'; str++) {
        int width;

        if (*str == '\n') {
            cur = 0;
            continue;
        }

        u16 c = GetCharCode(str);

        if (useGlyphWidth == FALSE) {
            width = NNS_G2dFontGetCharWidths(&font, c)->charWidth;
        } else {
            const NNSG2dCharWidths *widths = NNS_G2dFontGetCharWidths(&font, c);

            width = widths->glyphWidth;
            if (width == 0) {
                width = widths->charWidth;
            }
        }

        if (width != 0 && cur != 0) {
            cur += charSpace;
        }

        cur += width;

        if (cur > max) {
            max = cur;
        }

        if (GetCharLength(str) == 2) {
            str++;
        }
    }

    return max;
}

// Width in pixels of the text up to the end of the line
int TextFont::GetLineWidth(const char *str)
{
    int cur, max;
    cur = max = 0;

    for (; *str != '\0'; str++) {
        int width;

        if (*str == '\n') {
            break;
        }

        u16 c = GetCharCode(str);

        if (useGlyphWidth == FALSE) {
            width = NNS_G2dFontGetCharWidths(&font, c)->charWidth;
        } else {
            const NNSG2dCharWidths *widths = NNS_G2dFontGetCharWidths(&font, c);

            width = widths->glyphWidth;
            if (width == 0) {
                width = widths->charWidth;
            }
        }

        if (width != 0 && cur != 0) {
            cur += charSpace;
        }

        cur += width;

        if (cur > max) {
            max = cur;
        }

        if (GetCharLength(str) == 2) {
            str++;
        }
    }

    return max;
}

// X position of the text in a box starting at x and ending at width
int TextFont::GetAlignedX(int x, int width, const char *str, int align)
{
    int textWidth;

    if (x < 0 || x > width) {
        return 0;
    }

    if (align == TEXT_ALIGN_LEFT) {
        return x;
    }

    width -= x;
    textWidth = GetLineWidth(str);

    if (textWidth > width) {
        return x;
    }

    if (align == TEXT_ALIGN_CENTER) {
        return x + (width >> 1) - (textWidth >> 1);
    }

    return x + width - 1 - textWidth;
}

// Advance of the character at str
int TextFont::GetCharWidth(const char *str)
{
    u16 c = GetCharCode(str);
    return NNS_G2dFontGetCharWidths(&font, c)->charWidth;
}
