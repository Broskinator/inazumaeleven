#include "text/TextFont.hpp"
#include "nitro/mi.h"
#include "nitro/os.h"

TextFont::TextFont()
{
    nftrFile = NULL;
    charSpace = 1;
    lineSpace = 1;
    unk_1E = 0;
    unk_1F = 0;
    isWide = FALSE;
    useGlyphWidth = FALSE;
    MI_CpuClearFast(&font, sizeof(font));
    MI_CpuFill8(&unk_1C, 0, 2);
}

TextFont::~TextFont()
{
    Reset();
}

void TextFont::Reset()
{
    nftrFile = NULL;
    unk_1E = 0;
    unk_1F = 0;
    MI_CpuClearFast(&font, sizeof(font));
}

// VRAM can only be written 16 bits at a time
void TextFont::WriteByte(u8 *dest, u8 value)
{
    u16 *p = (u16 *)((u32)dest & ~1);

    if ((u32)dest & 1) {
        *p = (*p & 0x00FF) | (value << 8);
    } else {
        *p = (*p & 0xFF00) | value;
    }
}

// 4 bits per pixel bitmap, pitch pixels per row
int TextFont::DrawGlyph4(const u8 *image, u8 *canvas, int pitch, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int row;
    BOOL odd;
    int i;
    int mask = 0x80;
    int width = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - width;
    u8 *dest;

    if (!useGlyphWidth) {
        x += widths->left;
    }

    for (row = 0; row < lineHeight; row++) {
        odd = (x & 1) != 0;
        dest = canvas + (pitch * (y + row) + x) / 2;

        for (i = 0; i < width; i++) {
            if (*image & mask) {
                if (odd) {
                    WriteByte(dest, (*dest & 0x0F) | ((color & 0xF) << 4));
                } else {
                    WriteByte(dest, (*dest & 0xF0) | (color & 0xF));
                }
            }

            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }

            if (odd) {
                dest++;
            }

            odd = !odd;
        }

        for (i = 0; i < skip; i++) {
            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }
        }
    }

    return width + 1;
}

// 8 bits per pixel bitmap, pitch pixels per row
int TextFont::DrawGlyph8(const u8 *image, u8 *canvas, int pitch, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int i;
    int mask = 0x80;
    int width = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - width;
    int row;
    u8 *dest;

    if (!useGlyphWidth) {
        x += widths->left;
    }

    for (row = 0; row < lineHeight; row++) {
        dest = canvas + (pitch * (y + row) + x);

        for (i = 0; i < width; i++) {
            if (*image & mask) {
                WriteByte(dest, color);
            }

            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }

            dest++;
        }

        for (i = 0; i < skip; i++) {
            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }
        }
    }

    return width + 1;
}

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
    int color, TextCharRect *rects, int maxRects, BOOL clearLines, int align)
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

    if (clearLines) {
        ClearRect4((u8 *)canvas, width, height, x, y, GetLineWidth(str), lineHeight + lineSpace);
    }

    if (y < 0) {
        return FALSE;
    }

    for (; *str != '\0'; str++) {
        const NNSG2dCharWidths *widths;
        const u8 *image;

        if (*str == '\n') {
            curX = GetAlignedX(x, width, str + 1, align);

            if (clearLines) {
                ClearRect4((u8 *)canvas, width, height, x, y + lineHeight, GetLineWidth(str + 1), lineHeight + lineSpace);
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

            if (clearLines) {
                ClearRect4((u8 *)canvas, width, height, x, y + lineHeight, GetLineWidth(str), lineHeight + lineSpace);
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

        DrawGlyph4(image, (u8 *)canvas, width, color, widths, lineHeight, curX, y);
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

// 4 bits per pixel, 8x8 tiles; the canvas is width pixels wide
int TextFont::DrawGlyphTile4(const u8 *image, u8 *canvas, int width, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int row;
    BOOL odd;
    u8 pixels;
    int i;
    int mask = 0x80;
    int glyphWidth = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - glyphWidth;
    int rowOffset;

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

            if (*image & mask) {
                if (odd) {
                    WriteByte(canvas + offset, (canvas[offset] & 0x0F) | ((color & 0xF) << 4));
                } else {
                    pixels = canvas[offset];
                    WriteByte(canvas + offset, (pixels & 0xF0) | (color & 0xF));
                }
            }

            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }

            odd = !odd;
        }

        for (i = 0; i < skip; i++) {
            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }
        }
    }

    return glyphWidth + charSpace;
}

// 8 bits per pixel, 8x8 tiles; the canvas is width pixels wide
int TextFont::DrawGlyphTile8(const u8 *image, u8 *canvas, int width, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    int i;
    int mask = 0x80;
    int glyphWidth = widths->charWidth - widths->left;
    int skip = font.pRes->pGlyph->cellWidth - glyphWidth;
    int row;
    int rowOffset;

    if (!useGlyphWidth) {
        x += widths->left;
    }

    for (row = 0; row < lineHeight; row++) {
        int py = row + y;
        rowOffset = py / 8 * (width / 8 * 64) + py % 8 * 8;

        for (i = 0; i < glyphWidth; i++) {
            int offset = rowOffset + (((i + x) >> 3) << 6) + ((i + x) & 7);

            if (*image & mask) {
                WriteByte(canvas + offset, color);
            }

            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }
        }

        for (i = 0; i < skip; i++) {
            mask >>= 1;
            if (mask == 0) {
                mask = 0x80;
                image++;
            }
        }
    }

    return glyphWidth + charSpace;
}

// Draws the text into a canvas of 4-bit tiles (width x height pixels), from (x, y)
BOOL TextFont::DrawTextTile4(int x, int y, const char *str, int color, int align, void *canvas,
    int width, int height, TextCharRect *rects, int maxRects)
{
    int count = 0;
    int curX;
    int charWidth;
    int lineHeight;
    u16 c;

    if (str == NULL) {
        return FALSE;
    }

    lineHeight = font.pRes->pGlyph->cellHeight;
    curX = GetAlignedX(x, width, str, align);

    if (y < 0) {
        return FALSE;
    }

    for (; *str != '\0'; str++) {
        const NNSG2dCharWidths *widths;
        const u8 *image;

        if (*str == '\n') {
            curX = GetAlignedX(x, width, str + 1, align);
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

        DrawGlyphTile4(image, (u8 *)canvas, width, color, widths, lineHeight, curX, y);
        curX += charWidth + charSpace;

        if (GetCharLength(str) == 2) {
            str++;
        }
    }

    DC_FlushRange(canvas, (width * height) >> 1);
    return TRUE;
}

// Draws the text into a canvas of 8-bit tiles (width x height pixels), from (x, y)
BOOL TextFont::DrawTextTile8(int x, int y, const char *str, int color, int align, void *canvas,
    int width, int height, TextCharRect *rects, int maxRects)
{
    int count = 0;
    int curX;
    int charWidth;
    int lineHeight;
    u16 c;

    if (str == NULL) {
        return FALSE;
    }

    lineHeight = font.pRes->pGlyph->cellHeight;
    curX = GetAlignedX(x, width, str, align);

    if (y < 0) {
        return FALSE;
    }

    for (; *str != '\0'; str++) {
        const NNSG2dCharWidths *widths;
        const u8 *image;

        if (*str == '\n') {
            curX = GetAlignedX(x, width, str + 1, align);
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

        DrawGlyphTile8(image, (u8 *)canvas, width, color, widths, lineHeight, curX, y);
        curX += charWidth + charSpace;

        if (GetCharLength(str) == 2) {
            str++;
        }
    }

    DC_FlushRange(canvas, width * height);
    return TRUE;
}

void TextFont::SetSpacing(int charSpace, int lineSpace)
{
    this->charSpace = charSpace;
    this->lineSpace = lineSpace;
}

void TextFont::ResetSpacing()
{
    SetSpacing(1, 1);
}

// Uses the font file (NFTR) for the text, Shift-JIS or 16-bit characters
#ifdef NONMATCHING
BOOL TextFont::SetFont(void *nftrFile, u32 unk_10, u8 isWide)
{
    if (nftrFile == NULL) {
        return FALSE;
    }

    unk_1F = 0;

    if (unk_10 >= 16) {
        unk_10 = 0;
    }

    this->nftrFile = nftrFile;
    this->unk_10 = unk_10;

    if (isWide) {
        NNS_G2dFontInitUTF16(&font, nftrFile);
    } else {
        NNS_G2dFontInitShiftJIS(&font, nftrFile);
    }

    this->isWide = isWide;
    return TRUE;
}
#else
asm BOOL TextFont::SetFont(void *nftrFile, u32 unk_10, u8 isWide)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r3
    cmp r1, #0x0
    mov r0, #0x0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r2, #0x10
    movhs r2, #0x0
    strb r0, [r5, #0x1f]
    str r1, [r5, #0xc]
    str r2, [r5, #0x10]
    cmp r4, #0x0
    add r0, r5, #0x4
    beq @L_02034a14
    bl NNS_G2dFontInitUTF16
    b @L_02034a18
@L_02034a14:
    bl NNS_G2dFontInitShiftJIS
@L_02034a18:
    strb r4, [r5, #0x20]
    mov r0, #0x1
    ldmia sp!, {r3, r4, r5, pc}
}
#endif

// Clears a rectangle of a 4 bits per pixel bitmap (pitch pixels per row, height rows)
#ifdef NONMATCHING
void TextFont::ClearRect4(u8 *canvas, int pitch, int height, int x, int y, int width, int rectHeight)
{
    int row;
    BOOL odd;
    BOOL startOdd;
    int px;
    int startBits;
    int endPixels;
    u8 *dest;
    int middle;

    if (canvas == NULL || x < 0 || x >= pitch || y < 0 || y >= height) {
        return;
    }

    if (x + width > pitch) {
        width = pitch - x;
    }

    if (y + rectHeight > height) {
        rectHeight = height - y;
    }

    if (rectHeight <= 0) {
        return;
    }

    startOdd = (x & 1) != 0;
    startBits = x & 7;
    endPixels = (x + width) & 3;

    for (row = 0; row < rectHeight; row++) {
        dest = canvas + (pitch * (y + row) + x) / 2;
        odd = startOdd;
        px = startBits;

        if (px & 7) {
            do {
                if (odd) {
                    WriteByte(dest, *dest++ & 0x0F);
                } else {
                    WriteByte(dest, *dest & 0xF0);
                }

                odd = !odd;
                px++;
            } while (px & 7);
        }

        middle = width;
        if (startBits != 0) {
            middle -= 8 - startBits;
        }
        middle &= ~7;

        odd = FALSE;
        MI_CpuClearFast(dest, middle / 2);
        dest += middle / 2;

        for (px = 0; px < endPixels; px++) {
            if (odd) {
                WriteByte(dest, *dest++ & 0x0F);
            } else {
                WriteByte(dest, *dest & 0xF0);
            }

            odd = !odd;
        }
    }
}
#else
asm void TextFont::ClearRect4(u8 *canvas, int pitch, int height, int x, int y, int width, int rectHeight)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r6, r0
    movs r0, r1
    ldr r0, [sp, #0x38]
    str r1, [sp, #0x0]
    str r0, [sp, #0x38]
    ldr r0, [sp, #0x3c]
    str r2, [sp, #0x4]
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x40]
    str r0, [sp, #0x40]
    ldr r0, [sp, #0x44]
    str r0, [sp, #0x44]
    addeq sp, sp, #0x14
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x38]
    cmp r0, #0x0
    addlt sp, sp, #0x14
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r0
    mov r0, r2
    cmp r1, r0
    addge sp, sp, #0x14
    ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x3c]
    cmp r0, #0x0
    addlt sp, sp, #0x14
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, r3
    addge sp, sp, #0x14
    ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x40]
    mov r11, #0x0
    add r1, r1, r0
    mov r0, r2
    cmp r1, r0
    ldrgt r0, [sp, #0x38]
    movgt r1, r2
    subgt r0, r1, r0
    strgt r0, [sp, #0x40]
    ldr r1, [sp, #0x3c]
    ldr r0, [sp, #0x44]
    add r0, r1, r0
    cmp r0, r3
    movgt r0, r1
    subgt r0, r3, r0
    strgt r0, [sp, #0x44]
    ldr r0, [sp, #0x44]
    cmp r0, #0x0
    addle sp, sp, #0x14
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x38]
    ldr r1, [sp, #0x38]
    tst r0, #0x1
    movne r0, #0x1
    strne r0, [sp, #0x8]
    ldr r0, [sp, #0x38]
    streq r11, [sp, #0x8]
    and r0, r0, #0x7
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x40]
    add r1, r1, r0
    ldr r0, [sp, #0x10]
    and r5, r1, #0x3
    rsb r0, r0, #0x8
    str r0, [sp, #0xc]
@L_02034b30:
    ldr r0, [sp, #0x3c]
    ldr r1, [sp, #0x4]
    add r2, r0, r11
    ldr r0, [sp, #0x38]
    ldr r10, [sp, #0x8]
    mla r0, r1, r2, r0
    add r1, r0, r0, lsr #0x1f
    ldr r0, [sp, #0x0]
    add r4, r0, r1, asr #0x1
    ldr r0, [sp, #0x10]
    tst r0, #0x7
    mov r9, r0
    beq @L_02034bb0
    mov r7, #0x0
    mov r8, #0x1
@L_02034b6c:
    cmp r10, #0x0
    mov r0, r6
    mov r1, r4
    beq @L_02034b88
    ldrb r2, [r4], #0x1
    and r2, r2, #0xf
    b @L_02034b94
@L_02034b88:
    ldrb r2, [r4, #0x0]
    and r2, r2, #0xf0
    and r2, r2, #0xff
@L_02034b94:
    bl WriteByte
    cmp r10, #0x0
    moveq r10, r8
    add r9, r9, #0x1
    movne r10, r7
    tst r9, #0x7
    bne @L_02034b6c
@L_02034bb0:
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x40]
    cmp r0, #0x0
    ldrne r0, [sp, #0xc]
    mov r10, #0x0
    subne r1, r1, r0
    bic r0, r1, #0x7
    add r7, r0, r0, lsr #0x1f
    mov r2, r7, asr #0x1
    mov r0, r10
    mov r1, r4
    bl MIi_CpuClearFast
    add r4, r4, r7, asr #0x1
    cmp r5, #0x0
    mov r9, r10
    ble @L_02034c3c
    mov r7, r10
    mov r8, #0x1
@L_02034bf8:
    cmp r10, #0x0
    mov r0, r6
    mov r1, r4
    beq @L_02034c14
    ldrb r2, [r4], #0x1
    and r2, r2, #0xf
    b @L_02034c20
@L_02034c14:
    ldrb r2, [r4, #0x0]
    and r2, r2, #0xf0
    and r2, r2, #0xff
@L_02034c20:
    bl WriteByte
    cmp r10, #0x0
    moveq r10, r8
    add r9, r9, #0x1
    movne r10, r7
    cmp r9, r5
    blt @L_02034bf8
@L_02034c3c:
    ldr r0, [sp, #0x44]
    add r11, r11, #0x1
    cmp r11, r0
    blt @L_02034b30
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

// Clears a rectangle of a canvas of 4-bit tiles (width x height pixels)
void TextFont::ClearRectTile4(u8 *canvas, int width, int height, int x, int y, int rectWidth, int rectHeight)
{
    int right;
    int bottom;
    int tilesPerRow;
    int px;
    u8 *rowStart;
    int lineOffset;
    BOOL odd;
    int bit;
    u8 *dest;

    if (canvas == NULL || x < 0 || x >= width || y < 0 || y >= height) {
        return;
    }

    bottom = y + rectHeight;
    right = x + rectWidth;

    if (right > width) {
        right = width;
    }

    if (bottom > height) {
        bottom = height;
    }

    if (y >= bottom) {
        return;
    }

    tilesPerRow = width / 8;

    do {
        px = x;
        if (px < right) {
            rowStart = canvas + (y / 8 * tilesPerRow << 5);
            lineOffset = y % 8;

            do {
                dest = rowStart + (px / 8 << 5) + (lineOffset << 2) + px % 8 / 2;
                odd = (px & 1) ? TRUE : FALSE;
                bit = px & 7;

                // (the original tests against the unclipped right edge here)
                while (!(bit & 8) && px < x + rectWidth) {
                    if (odd) {
                        WriteByte(dest, *dest & 0x0F);
                        dest++;
                    } else {
                        WriteByte(dest, *dest & 0xF0);
                    }
                    px++;
                    bit++;
                    odd = !odd;
                }
            } while (px < right);
        }
        y++;
    } while (y < bottom);
}

void TextFont::SetUnk1C(u8 unk_1C, u8 unk_1D)
{
    this->unk_1C = unk_1C;
    this->unk_1D = unk_1D;
}

void TextFont::SetUseGlyphWidth(u8 useGlyphWidth)
{
    this->useGlyphWidth = useGlyphWidth;
}
