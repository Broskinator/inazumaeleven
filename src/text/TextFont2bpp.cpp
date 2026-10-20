#include "text/TextFont2bpp.hpp"

TextFont2bpp::TextFont2bpp()
{
    SetSpacing(1, lineSpace);
}

TextFont2bpp::~TextFont2bpp()
{
}

// 4 bits per pixel, 8x8 tiles; the canvas is width pixels wide
// (nonmatching: the offset and the colour swap registers in the inner loop)
#ifdef NONMATCHING
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
    colors[2] = unk_1C & 0xF;
    colors[3] = unk_1D & 0xF;

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
            int pixel = (*image & mask) >> shift;

            if (pixel > 0) {
                if (odd) {
                    WriteByte(canvas + offset, (canvas[offset] & 0x0F) | (colors[pixel] << 4));
                } else {
                    WriteByte(canvas + offset, (canvas[offset] & 0xF0) | colors[pixel]);
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
#else
asm int TextFont2bpp::DrawGlyphTile4(const u8 *image, u8 *canvas, int width, u8 color,
    const NNSG2dCharWidths *widths, int lineHeight, int x, int y)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r10, r0
    ldr r0, [r10, #0x4]
    ldrb r4, [sp, #0x40]
    ldr r9, [r0, #0x8]
    ldrb r5, [r10, #0x1c]
    and r6, r4, #0xf
    and r7, r6, #0xf
    and r6, r5, #0xf
    ldrb r0, [r10, #0x1d]
    ldrb ip, [r9, #0x0]
    ldr r8, [sp, #0x44]
    and r5, r0, #0xf
    ldrsb r0, [r8, #0x0]
    ldrsb r8, [r8, #0x2]
    ldrb r4, [r10, #0x21]
    mov r9, r1
    sub r11, r8, r0
    sub r1, ip, r11
    str r1, [sp, #0xc]
    ldr r1, [sp, #0x48]
    cmp r4, #0x0
    str r1, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    mov lr, #0x0
    str r1, [sp, #0x4c]
    ldr r1, [sp, #0x50]
    strb r6, [sp, #0x16]
    str r1, [sp, #0x50]
    ldreq r1, [sp, #0x4c]
    strb r5, [sp, #0x17]
    addeq r0, r1, r0
    streq r0, [sp, #0x4c]
    ldr r0, [sp, #0x48]
    mov r8, r2
    cmp r0, #0x0
    mov r0, #0x0
    strb lr, [sp, #0x14]
    strb r7, [sp, #0x15]
    mov r5, #0xc0
    mov r6, #0x6
    str r0, [sp, #0x10]
    ble @L_0203508c
    ldr r0, [sp, #0x4c]
    mov r1, r3, asr #0x3
    tst r0, #0x1
    mov r0, r1, lsl #0x5
    str r0, [sp, #0x4]
    movne r0, #0x1
    strne r0, [sp, #0x0]
    ldreq r0, [sp, #0x10]
    streq r0, [sp, #0x0]
@L_02034f6c:
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x50]
    cmp r11, #0x0
    add r2, r1, r0
    ldr r0, [sp, #0x4]
    mov r1, r2, asr #0x3
    mul r1, r0, r1
    mov r0, r2, lsl #0x1d
    add r0, r1, r0, lsr #0x1b
    str r0, [sp, #0x8]
    ldr r7, [sp, #0x0]
    mov r4, #0x0
    ble @L_02035038
@L_02034fa0:
    ldr r0, [sp, #0x4c]
    add r2, r4, r0
    ldr r0, [sp, #0x8]
    mov r1, r2, asr #0x3
    add r1, r0, r1, lsl #0x5
    and r0, r2, #0x7
    add r2, r1, r0, asr #0x1
    ldrb r0, [r9, #0x0]
    and r0, r0, r5
    mov r1, r0, asr r6
    cmp r1, #0x0
    ble @L_0203500c
    add r0, sp, #0x14
    ldrb r3, [r0, r1]
    cmp r7, #0x0
    mov r0, r10
    add r1, r8, r2
    beq @L_02034ff8
    ldrb r2, [r8, r2]
    and r2, r2, #0xf
    orr r2, r2, r3, lsl #0x4
    b @L_02035004
@L_02034ff8:
    ldrb r2, [r8, r2]
    and r2, r2, #0xf0
    orr r2, r2, r3
@L_02035004:
    and r2, r2, #0xff
    bl WriteByte
@L_0203500c:
    movs r5, r5, asr #0x2
    sub r6, r6, #0x2
    moveq r5, #0xc0
    moveq r6, #0x6
    addeq r9, r9, #0x1
    cmp r7, #0x0
    moveq r7, #0x1
    add r4, r4, #0x1
    movne r7, #0x0
    cmp r4, r11
    blt @L_02034fa0
@L_02035038:
    ldr r0, [sp, #0xc]
    mov r3, #0x0
    cmp r0, #0x0
    ble @L_02035074
    mov r2, #0xc0
    mov r1, #0x6
@L_02035050:
    ldr r0, [sp, #0xc]
    movs r5, r5, asr #0x2
    sub r6, r6, #0x2
    add r3, r3, #0x1
    moveq r5, r2
    moveq r6, r1
    addeq r9, r9, #0x1
    cmp r3, r0
    blt @L_02035050
@L_02035074:
    ldr r0, [sp, #0x10]
    add r1, r0, #0x1
    ldr r0, [sp, #0x48]
    str r1, [sp, #0x10]
    cmp r1, r0
    blt @L_02034f6c
@L_0203508c:
    ldr r0, [r10, #0x14]
    add r0, r11, r0
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

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
    colors[2] = unk_1C;
    colors[3] = unk_1D;

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
    colors[2] = unk_1C & 0xF;
    colors[3] = unk_1D & 0xF;

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
    colors[2] = unk_1C;
    colors[3] = unk_1D;

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
