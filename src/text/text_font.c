#include "text/text_font.h"

// Width in pixels of the text up to the end of the line
int TextFont_GetLineWidth(TextFont *textFont, const char *str)
{
    int cur, max;
    cur = max = 0;

    for (; *str != '\0'; str++) {
        int width;

        if (*str == '\n') {
            break;
        }

        u16 c = func_02033b98(textFont, str);

        if (textFont->useGlyphWidth == FALSE) {
            width = NNS_G2dFontGetCharWidths(&textFont->font, c)->charWidth;
        } else {
            const NNSG2dCharWidths *widths = NNS_G2dFontGetCharWidths(&textFont->font, c);

            width = widths->glyphWidth;
            if (width == 0) {
                width = widths->charWidth;
            }
        }

        if (width != 0 && cur != 0) {
            cur += textFont->charSpace;
        }

        cur += width;

        if (cur > max) {
            max = cur;
        }

        if (func_02033b74(textFont, str) == 2) {
            str++;
        }
    }

    return max;
}

// X position of the text in a box starting at x and ending at width
int TextFont_GetAlignedX(TextFont *textFont, int x, int width, const char *str, int align)
{
    int textWidth;

    if (x < 0 || x > width) {
        return 0;
    }

    if (align == TEXT_ALIGN_LEFT) {
        return x;
    }

    width -= x;
    textWidth = TextFont_GetLineWidth(textFont, str);

    if (textWidth > width) {
        return x;
    }

    if (align == TEXT_ALIGN_CENTER) {
        return x + (width >> 1) - (textWidth >> 1);
    }

    return x + width - 1 - textWidth;
}

// Advance of the character at str
int TextFont_GetCharWidth(TextFont *textFont, const char *str)
{
    u16 c = func_02033b98(textFont, str);
    return NNS_G2dFontGetCharWidths(&textFont->font, c)->charWidth;
}
