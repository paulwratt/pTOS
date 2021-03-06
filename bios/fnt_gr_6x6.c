/*
 * fnt_gr_6x6.c - a font in standard format
 *
 * Copyright (C) 2003-2015 The EmuTOS development team
 *
 * Automatically generated by fntconv.c
 *
 * And then the font was "refined" a bit by GGN
 * because I always hated having ANSI characters from
 * MS-DOS on my STe instead of the copyright or TM characters!
 *
 * (BTW: original font comes from ELKAT)
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "config.h"
#include "portab.h"
#include "fonthdr.h"

extern const UWORD off_6x6_table[];

static const UBYTE dat_table[] =
{
    0x00, 0x82, 0x04, 0x21, 0xCF, 0xB6, 0x0D, 0xE3, 0x04, 0xE3, 0x81, 0x50, 0xF9, 0x87, 0xBC, 0xC3,
    0xCC, 0x3E, 0x73, 0xE0, 0x38, 0x1F, 0x84, 0x42, 0x00, 0xCD, 0x94, 0x7B, 0x26, 0x0C, 0x31, 0x84,
    0x88, 0x00, 0x00, 0x06, 0x70, 0x4F, 0x3C, 0x33, 0xC7, 0x3E, 0x71, 0xC3, 0x0C, 0x18, 0x06, 0x1C,
    0x71, 0xCF, 0x1E, 0xF3, 0xEF, 0x9E, 0x89, 0xC0, 0x92, 0x42, 0x28, 0x9C, 0xF1, 0xCF, 0x1E, 0xFA,
    0x28, 0xA2, 0x8A, 0x2F, 0x9E, 0xC1, 0xE2, 0x00, 0x60, 0x08, 0x00, 0x08, 0x01, 0x80, 0x80, 0x01,
    0x20, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x31, 0xC4, 0x00,
    0x73, 0xCF, 0x08, 0xFB, 0xE8, 0x9C, 0x71, 0x22, 0x22, 0x8B, 0xE7, 0x3E, 0xF3, 0xEF, 0xA2, 0x22,
    0x2A, 0x9C, 0x03, 0x80, 0x1C, 0x03, 0xE0, 0x1C, 0x00, 0x07, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x69, 0xA3, 0x42, 0x01, 0xE4, 0x1A, 0x69, 0x41, 0x08, 0x69, 0xE7, 0xBD,
    0x4B, 0xA9, 0xBC, 0x7B, 0xFF, 0x1C, 0x7B, 0xFC, 0x1E, 0xF3, 0x0D, 0x8E, 0xF9, 0xBF, 0xB6, 0xF9,
    0xCD, 0x5E, 0x3B, 0xE0, 0x3E, 0xD8, 0xC0, 0x00, 0x00, 0x81, 0x08, 0x50, 0x42, 0x08, 0x50, 0x8B,
    0xBF, 0xC6, 0xEB, 0xB1, 0xB8, 0x86, 0x06, 0x0C, 0xC2, 0x1A, 0x30, 0x60, 0x00, 0x01, 0xC0, 0x3E,
    0x01, 0xC2, 0x06, 0x62, 0xAF, 0x2A, 0x1A, 0x17, 0x86, 0x82, 0x01, 0x50, 0xC8, 0x80, 0x84, 0xC2,
    0x0C, 0x02, 0x53, 0x67, 0x20, 0x3F, 0x42, 0xF4, 0x00, 0xCD, 0xBE, 0xA3, 0x4D, 0x0C, 0x60, 0xC3,
    0x08, 0x00, 0x00, 0x0C, 0x98, 0xC0, 0x82, 0x52, 0x08, 0x02, 0x8A, 0x23, 0x0C, 0x31, 0xE3, 0x26,
    0x8A, 0x28, 0xA0, 0x8A, 0x08, 0x20, 0x88, 0x80, 0x94, 0x43, 0x6C, 0xA2, 0x8A, 0x28, 0xA0, 0x22,
    0x28, 0xA2, 0x52, 0x21, 0x18, 0x60, 0x67, 0x00, 0x61, 0xCF, 0x1C, 0x79, 0xC2, 0x1E, 0xB1, 0x81,
    0x24, 0x21, 0x4F, 0x1C, 0xF1, 0xE7, 0x0E, 0x72, 0x28, 0xA2, 0x4A, 0x27, 0x8C, 0x30, 0xCE, 0x88,
    0x8A, 0x28, 0x14, 0x80, 0x48, 0xA2, 0x21, 0x45, 0x36, 0xC8, 0x08, 0xA2, 0x89, 0x02, 0x22, 0x71,
    0x4A, 0xA2, 0xEA, 0x44, 0x90, 0x78, 0xCF, 0x12, 0x22, 0x41, 0x92, 0x89, 0x87, 0x3E, 0x71, 0xF3,
    0xBE, 0x8A, 0xE9, 0xA2, 0xB2, 0xC4, 0x8C, 0x72, 0xC2, 0x2C, 0xB0, 0x02, 0x1C, 0xEB, 0x38, 0xD7,
    0x01, 0x2D, 0x8C, 0x08, 0x61, 0x8C, 0x31, 0xBD, 0x86, 0x1B, 0xE7, 0xC6, 0xD9, 0xB9, 0xB6, 0x18,
    0x6D, 0x56, 0x18, 0x6F, 0xE6, 0xD8, 0xA2, 0x16, 0x8B, 0xA7, 0xBE, 0x20, 0x87, 0x22, 0x8A, 0x24,
    0x50, 0x44, 0x44, 0x51, 0x47, 0xE1, 0x98, 0x10, 0xC0, 0x2C, 0x48, 0x80, 0x07, 0x00, 0x60, 0x00,
    0x03, 0x62, 0x3B, 0xDF, 0x6E, 0x1C, 0xB2, 0x97, 0x84, 0xDE, 0xE1, 0x50, 0xC8, 0x8F, 0xBE, 0xC3,
    0xEF, 0x8E, 0x73, 0x20, 0xB7, 0x60, 0x62, 0x94, 0x00, 0xC9, 0x14, 0x70, 0x86, 0x18, 0x60, 0xC7,
    0xBE, 0x01, 0xE0, 0x18, 0xA8, 0x47, 0x1C, 0x93, 0xCF, 0x04, 0x71, 0xE0, 0x00, 0x60, 0x01, 0x8C,
    0xBB, 0xEF, 0x20, 0x8B, 0xCF, 0x26, 0xF8, 0x80, 0x98, 0x42, 0xAA, 0xA2, 0xF2, 0x2F, 0x1C, 0x22,
    0x28, 0xAA, 0x21, 0x42, 0x18, 0x30, 0x6D, 0x80, 0x30, 0x28, 0xA0, 0x8B, 0xE7, 0xA2, 0xC8, 0x81,
    0x38, 0x23, 0xE8, 0xA2, 0x8A, 0x24, 0x98, 0x22, 0x28, 0xAA, 0x32, 0x21, 0x18, 0x30, 0x6B, 0x9C,
    0xFB, 0xC8, 0x22, 0xF0, 0x8F, 0xBE, 0x21, 0x88, 0xAA, 0xA9, 0xC8, 0xA2, 0xF0, 0x82, 0x14, 0xA8,
    0x87, 0x1C, 0x93, 0xC3, 0x1C, 0xF1, 0x04, 0x9E, 0x23, 0x87, 0x92, 0x8B, 0x08, 0xA2, 0x8A, 0x46,
    0x08, 0x8A, 0xA6, 0x2A, 0x71, 0xC5, 0x96, 0xBA, 0xE7, 0x1C, 0x70, 0x00, 0x08, 0xEA, 0xDB, 0x55,
    0x49, 0x27, 0x0C, 0x18, 0x6D, 0x8C, 0x19, 0xBD, 0x86, 0x18, 0x66, 0x46, 0xD9, 0xBD, 0x9C, 0xD8,
    0x6F, 0x56, 0x18, 0x66, 0xF6, 0x71, 0xC7, 0x2D, 0xAA, 0x4F, 0x12, 0x20, 0x88, 0xA2, 0x8A, 0xA7,
    0xDC, 0x7C, 0x44, 0x4E, 0x38, 0x86, 0x06, 0x30, 0xCF, 0x80, 0x31, 0xC3, 0x04, 0x50, 0xC3, 0x00,
    0x00, 0x8D, 0x86, 0x62, 0xAC, 0xAA, 0xE2, 0xDF, 0xDC, 0x93, 0xA3, 0x58, 0xD9, 0xCC, 0x06, 0xD8,
    0x69, 0x8C, 0xDB, 0xEF, 0xA4, 0x40, 0x21, 0x68, 0x00, 0xC0, 0x3E, 0x29, 0x6E, 0x80, 0x60, 0xC3,
    0x08, 0x30, 0x03, 0x30, 0xC8, 0x48, 0x02, 0xF8, 0x28, 0x88, 0x88, 0x23, 0x0C, 0x31, 0xE3, 0x0C,
    0xB2, 0x28, 0xA0, 0x8A, 0x08, 0x22, 0x88, 0x88, 0x94, 0x42, 0x29, 0xA2, 0x82, 0x2A, 0x02, 0x22,
    0x25, 0x36, 0x50, 0x84, 0x18, 0x18, 0x60, 0x00, 0x03, 0xE8, 0xA0, 0x8A, 0x02, 0x1E, 0x88, 0x81,
    0x24, 0x22, 0xA8, 0xA2, 0x8A, 0x24, 0x06, 0x22, 0x25, 0x2A, 0x31, 0xE2, 0x0C, 0x30, 0xC1, 0x32,
    0x8A, 0x28, 0x22, 0x81, 0x08, 0xA2, 0x21, 0x48, 0xA2, 0x98, 0x08, 0xA2, 0x81, 0x02, 0x08, 0x71,
    0x42, 0x00, 0x92, 0x23, 0x22, 0x82, 0x04, 0xA2, 0x22, 0x48, 0x92, 0x51, 0xC8, 0xA2, 0x8A, 0x21,
    0x8A, 0x8A, 0xA2, 0x2A, 0x0A, 0x26, 0x9A, 0xA2, 0xC8, 0xA2, 0x88, 0x00, 0x08, 0x6A, 0xF8, 0xC0,
    0x4B, 0xAD, 0x8C, 0x38, 0x6D, 0x8C, 0x19, 0xBD, 0x80, 0x18, 0x66, 0x46, 0xD9, 0xB1, 0x8E, 0xD0,
    0x6C, 0x56, 0x18, 0x66, 0xC6, 0x31, 0xCD, 0xAD, 0xAA, 0x48, 0x12, 0x20, 0x88, 0xA2, 0x8A, 0xA4,
    0x50, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x30, 0xC0, 0x1A, 0x00, 0x83, 0x34, 0x01, 0xE3, 0x00,
    0x00, 0x87, 0x04, 0x21, 0xC9, 0xB6, 0x42, 0x10, 0x3C, 0x18, 0xE7, 0x5C, 0xD9, 0xCC, 0x06, 0xF8,
    0x6D, 0x8C, 0xD8, 0x67, 0x3C, 0x71, 0xEE, 0xF0, 0x00, 0x00, 0x14, 0xF2, 0x6D, 0x00, 0x31, 0x84,
    0x88, 0x30, 0x03, 0x20, 0x70, 0x4F, 0xBC, 0x13, 0xC7, 0x08, 0x71, 0xC3, 0x04, 0x18, 0x06, 0x00,
    0x82, 0x2F, 0x1E, 0xF3, 0xE8, 0x1E, 0x89, 0xC7, 0x12, 0x7A, 0x28, 0x9C, 0x81, 0xC9, 0xBC, 0x21,
    0xE2, 0x22, 0x88, 0x8F, 0x9E, 0x09, 0xE0, 0x00, 0x01, 0xEF, 0x1C, 0x79, 0xC2, 0x02, 0x89, 0xC1,
    0x22, 0x72, 0x28, 0x9C, 0xF1, 0xE4, 0x1C, 0x11, 0xE2, 0x36, 0x48, 0x27, 0x8E, 0x31, 0xC0, 0x3E,
    0x8B, 0xC8, 0x3E, 0xFB, 0xE8, 0x9C, 0x71, 0x28, 0xA2, 0x8B, 0xE7, 0x22, 0x83, 0xE2, 0x08, 0x22,
    0x22, 0x3E, 0xFB, 0xC4, 0x9C, 0x7B, 0x04, 0x9C, 0x32, 0x28, 0x9E, 0x23, 0x07, 0x22, 0xF1, 0xC7,
    0x0C, 0x73, 0xE7, 0x3E, 0xFA, 0x24, 0x8C, 0x79, 0xEF, 0xBE, 0x88, 0x00, 0x08, 0x2B, 0x1A, 0x40,
    0x48, 0x2C, 0xBE, 0x68, 0x6D, 0x8C, 0x19, 0xBF, 0x80, 0xF1, 0xE6, 0xDE, 0x73, 0xFF, 0xBE, 0xC0,
    0x6F, 0xF6, 0x18, 0x67, 0xC6, 0x32, 0x88, 0x9A, 0x73, 0xE7, 0x92, 0x30, 0xC7, 0x1C, 0x71, 0xC4,
    0x5F, 0x44, 0xE3, 0x84, 0x7F, 0xE7, 0x9E, 0x30, 0x82, 0x2C, 0x01, 0xE0, 0x1C, 0x00, 0x00, 0x00,
    0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE3, 0x18, 0x10, 0xB6, 0x4C, 0xF9, 0xCF, 0xBE, 0x1B,
    0xEF, 0x8C, 0xF8, 0x60, 0x07, 0x58, 0xAC, 0x00, 0x00, 0xC0, 0x00, 0x20, 0x06, 0x80, 0x00, 0x00,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x0C,
    0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x0E,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x03, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x20, 0x01, 0xC0, 0x00, 0x80, 0x00,
    0x00, 0x00, 0x8C, 0x88, 0x79, 0xCB, 0x10, 0x00, 0x08, 0xA2, 0x70, 0x00, 0x00, 0x29, 0xE7, 0x80,
    0x10, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
};

const Fonthead fnt_gr_6x6 = {
    1,  /* font_id */
    8,  /* point */
    "6X6 system font",  /*   BYTE name[32]      */
    0,  /* first_ade */
    255,  /* last_ade */
    4,  /* top */
    4,  /* ascent */
    3,  /* half */
    1,  /* descent */
    1,  /* bottom */
    5,  /* max_char_width */
    6,  /* max_cell_width */
    0,  /* left_offset */
    3,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555, /* lighten */
    0x5555, /* skew */
    F_STDFORM | F_MONOSPACE,  /* flags */
    0,                  /*   UBYTE *hor_table   */
    off_6x6_table,      /*   UWORD *off_table   */
    dat_table,          /*   UWORD *dat_table   */
    192,  /* form_width */
    6,  /* form_height */
    0   /* Fonthead * next_font */
};
