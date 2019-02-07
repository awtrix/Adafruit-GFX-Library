/**
** The original 3x5 font is licensed under the 3-clause BSD license:
**
** Copyright 1999 Brian J. Swetland
** Copyright 1999 Vassilii Khachaturov
** Portions (of vt100.c/vt100.h) copyright Dan Marks
** 
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions
** are met:
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions, and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions, and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 3. The name of the authors may not be used to endorse or promote products
**    derived from this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
** OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
** IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
** NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
** THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** 
** Modifications to Tom Thumb for improved readability are from Robey Pointer, 
** see:
** http://robey.lag.net/2010/01/23/tiny-monospace-font.html
** 
** The original author does not have any objection to relicensing of Robey 
** Pointer's modifications (in this file) in a more permissive license.  See 
** the discussion at the above blog, and also here:
** http://opengameart.org/forumtopic/how-to-submit-art-using-the-3-clause-bsd-license
**
** Feb 21, 2016: Conversion from Linux BDF --> Adafruit GFX font,
** with the help of this Python script:
** https://gist.github.com/skelliam/322d421f028545f16f6d
** William Skellenger (williamj@skellenger.net)
** Twitter: @skelliam
** 
*/

const uint8_t TomThumbBitmaps[] PROGMEM = {
   0x00,                                /* 0x20 space */
   0x80, 0x80, 0x80, 0x00, 0x80,        /* 0x21 exclam */
   0xA0, 0xA0,                          /* 0x22 quotedbl */
   0xA0, 0xE0, 0xA0, 0xE0, 0xA0,        /* 0x23 numbersign */
   0x60, 0xC0, 0x60, 0xC0, 0x40,        /* 0x24 dollar */
  0xA0, 0x20, 0x40, 0x80, 0xA0,          /* 0x25 percent */
   0xC0, 0xC0, 0xE0, 0xA0, 0x60,        /* 0x26 ampersand */
   0x80, 0x80,                          /* 0x27 quotesingle */
   0x40, 0x80, 0x80, 0x80, 0x40,        /* 0x28 parenleft */
   0x80, 0x40, 0x40, 0x40, 0x80,        /* 0x29 parenright */
   0xA0, 0x40, 0xA0,                    /* 0x2A asterisk */
   0x40, 0xE0, 0x40,                    /* 0x2B plus */
   0x40, 0x80,                          /* 0x2C comma */
   0xE0,                                /* 0x2D hyphen */
   0x80,                                /* 0x2E period */
   0x20, 0x20, 0x40, 0x80, 0x80,        /* 0x2F slash */
   0xE0, 0xA0, 0xA0, 0xA0, 0xE0,        /* 0x30 zero */
   0x40, 0xC0, 0x40, 0x40, 0xE0,        /* 0x31 one */
   0xE0, 0x20, 0xE0, 0x80, 0xE0,        /* 0x32 two */
   0xE0, 0x20, 0xE0, 0x20, 0xE0,        /* 0x33 three */
   0xA0, 0xA0, 0xE0, 0x20, 0x20,        /* 0x34 four */
   0xE0, 0x80, 0xE0, 0x20, 0xE0,        /* 0x35 five */
   0xE0, 0x80, 0xE0, 0xA0, 0xE0,        /* 0x36 six */
   0xE0, 0x20, 0x20, 0x20, 0x20,        /* 0x37 seven */
   0xE0, 0xA0, 0xE0, 0xA0, 0xE0,        /* 0x38 eight */
   0xE0, 0xA0, 0xE0, 0x20, 0xE0,        /* 0x39 nine */
   0x80, 0x00, 0x80,                    /* 0x3A colon */
   0x40, 0x00, 0x40, 0x80,              /* 0x3B semicolon */
   0x20, 0x40, 0x80, 0x40, 0x20,        /* 0x3C less */
   0xE0, 0x00, 0xE0,                    /* 0x3D equal */
   0x80, 0x40, 0x20, 0x40, 0x80,        /* 0x3E greater */
   0xC0, 0xC0, 0x00, 0x00, 0x00,        /* 0x3F question */
   0x40, 0xA0, 0xE0, 0x80, 0x60,        /* 0x40 at */
   0xC0, 0xA0, 0xE0, 0xA0, 0xA0,        /* 0x41 A */
   0xC0, 0xA0, 0xC0, 0xA0, 0xC0,        /* 0x42 B */
   0x40, 0xA0, 0x80, 0xA0, 0x40,        /* 0x43 C */
   0xC0, 0xA0, 0xA0, 0xA0, 0xC0,        /* 0x44 D */
   0xE0, 0x80, 0xE0, 0x80, 0xE0,        /* 0x45 E */
   0xE0, 0x80, 0xE0, 0x80, 0x80,        /* 0x46 F */
   0x60, 0x80, 0xA0, 0xA0, 0x60,        /* 0x47 G */
   0xA0, 0xA0, 0xE0, 0xA0, 0xA0,        /* 0x48 H */
   0x80, 0x80, 0x80, 0x80, 0x80,        /* 0x49 I */
   0x20, 0x20, 0x20, 0xA0, 0x40,        /* 0x4A J */
   0xA0, 0xA0, 0xC0, 0xA0, 0xA0,        /* 0x4B K */
   0x80, 0x80, 0x80, 0x80, 0xE0,        /* 0x4C L */
   0x88, 0xD8, 0xA8, 0x88, 0x88,        /* 0x4D M */
   0x90, 0xD0, 0xB0, 0x90, 0x90,        /* 0x4E N */
   0x40, 0xA0, 0xA0, 0xA0, 0x40,        /* 0x4F O */
   0xE0, 0xA0, 0xC0, 0x80, 0x80,        /* 0x50 P */
   0x40, 0xA0, 0xA0, 0xA0, 0x70,        /* 0x51 Q */
   0xE0, 0xA0, 0xC0, 0xA0, 0xA0,        /* 0x52 R */
   0xE0, 0x80, 0xE0, 0x20, 0xE0,        /* 0x53 S */
   0xE0, 0x40, 0x40, 0x40, 0x40,        /* 0x54 T */
   0xA0, 0xA0, 0xA0, 0xA0, 0xE0,        /* 0x55 U */
   0xA0, 0xA0, 0xA0, 0xA0, 0x40,        /* 0x56 V */
   0x88, 0x88, 0x88, 0xA8, 0x50,        /* 0x57 W */
   0xA0, 0xA0, 0x40, 0xA0, 0xA0,        /* 0x58 X */
   0xA0, 0xA0, 0xE0, 0x20, 0xC0,        /* 0x59 Y */
   0xE0, 0x20, 0x40, 0x80, 0xE0,        /* 0x5A Z */
   0xE0, 0x80, 0x80, 0x80, 0xE0,        /* 0x5B bracketleft */
   0x80, 0x40, 0x20,                    /* 0x5C backslash */
   0xE0, 0x20, 0x20, 0x20, 0xE0,        /* 0x5D bracketright */
   0x40, 0xA0,                          /* 0x5E asciicircum */
   0xE0,                                /* 0x5F underscore */
   0x80, 0x40,                          /* 0x60 grave */
   0xC0, 0x60, 0xA0, 0xE0,              /* 0x61 a */
   0x80, 0xC0, 0xA0, 0xA0, 0xC0,        /* 0x62 b */
   0x60, 0x80, 0x80, 0x60,              /* 0x63 c */
   0x20, 0x60, 0xA0, 0xA0, 0x60,        /* 0x64 d */
   0x60, 0xA0, 0xC0, 0x60,              /* 0x65 e */
   0x20, 0x40, 0xE0, 0x40, 0x40,        /* 0x66 f */
   0x60, 0xA0, 0xE0, 0x20, 0x40,        /* 0x67 g */
   0x80, 0xC0, 0xA0, 0xA0, 0xA0,        /* 0x68 h */
   0x80, 0x00, 0x80, 0x80, 0x80,        /* 0x69 i */
   0x20, 0x00, 0x20, 0x20, 0xA0, 0x40,  /* 0x6A j */
   0x80, 0xA0, 0xC0, 0xC0, 0xA0,        /* 0x6B k */
   0xC0, 0x40, 0x40, 0x40, 0xE0,        /* 0x6C l */
   0xE0, 0xE0, 0xE0, 0xA0,              /* 0x6D m */
   0xC0, 0xA0, 0xA0, 0xA0,              /* 0x6E n */
   0x40, 0xA0, 0xA0, 0x40,              /* 0x6F o */
   0xC0, 0xA0, 0xA0, 0xC0, 0x80,        /* 0x70 p */
   0x60, 0xA0, 0xA0, 0x60, 0x20,        /* 0x71 q */
   0x60, 0x80, 0x80, 0x80,              /* 0x72 r */
   0x60, 0xC0, 0x60, 0xC0,              /* 0x73 s */
   0x40, 0xE0, 0x40, 0x40, 0x60,        /* 0x74 t */
   0xA0, 0xA0, 0xA0, 0x60,              /* 0x75 u */
   0xA0, 0xA0, 0xE0, 0x40,              /* 0x76 v */
   0xA0, 0xE0, 0xE0, 0xE0,              /* 0x77 w */
   0xA0, 0x40, 0x40, 0xA0,              /* 0x78 x */
   0xA0, 0xA0, 0x60, 0x20, 0x40,        /* 0x79 y */
   0xE0, 0x60, 0xC0, 0xE0,              /* 0x7A z */
   0x60, 0x40, 0x80, 0x40, 0x60,        /* 0x7B braceleft */
   0x80, 0x80, 0x00, 0x80, 0x80,        /* 0x7C bar */
   0xC0, 0x40, 0x20, 0x40, 0xC0,        /* 0x7D braceright */
   0x60, 0xC0,                          /* 0x7E asciitilde */

   0x80, 0x00, 0x80, 0x80, 0x80,        /* 0xA1 exclamdown */
   0x40, 0xE0, 0x80, 0xE0, 0x40,        /* 0xA2 cent */
   0x60, 0x40, 0xE0, 0x40, 0xE0,        /* 0xA3 sterling */
   0xA0, 0x40, 0xE0, 0x40, 0xA0,        /* 0xA4 currency */
   0xA0, 0xA0, 0x40, 0xE0, 0x40,        /* 0xA5 yen */
   0x80, 0x80, 0x00, 0x80, 0x80,        /* 0xA6 brokenbar */
   0x60, 0x40, 0xA0, 0x40, 0xC0,        /* 0xA7 section */
   0xA0,                                /* 0xA8 dieresis */
   0x60, 0x80, 0x60,                    /* 0xA9 copyright */
   0x60, 0xA0, 0xE0, 0x00, 0xE0,        /* 0xAA ordfeminine */
   0x40, 0x80, 0x40,                    /* 0xAB guillemotleft */
   0xE0, 0x20,                          /* 0xAC logicalnot */
   0xC0,                                /* 0xAD softhyphen */
   0xC0, 0xC0, 0xA0,                    /* 0xAE registered */
   0xE0,                                /* 0xAF macron */
   0x40, 0xA0, 0x40,                    /* 0xB0 degree */
   0x40, 0xE0, 0x40, 0x00, 0xE0,        /* 0xB1 plusminus */
   0xC0, 0x40, 0x60,                    /* 0xB2 twosuperior */
   0xE0, 0x60, 0xE0,                    /* 0xB3 threesuperior */
   0x40, 0x80,                          /* 0xB4 acute */
   0xA0, 0xA0, 0xA0, 0xC0, 0x80,        /* 0xB5 mu */
   0x60, 0xA0, 0x60, 0x60, 0x60,        /* 0xB6 paragraph */
   0xE0, 0xE0, 0xE0,                    /* 0xB7 periodcentered */
   0x40, 0x20, 0xC0,                    /* 0xB8 cedilla */
   0x80, 0x80, 0x80,                    /* 0xB9 onesuperior */
   0x40, 0xA0, 0x40, 0x00, 0xE0,        /* 0xBA ordmasculine */
   0x80, 0x40, 0x80,                    /* 0xBB guillemotright */
   0x80, 0x80, 0x00, 0x60, 0x20,        /* 0xBC onequarter */
   0x80, 0x80, 0x00, 0xC0, 0x60,        /* 0xBD onehalf */
   0xC0, 0xC0, 0x00, 0x60, 0x20,        /* 0xBE threequarters */
   0x40, 0x00, 0x40, 0x80, 0xE0,        /* 0xBF questiondown */
   0x40, 0x20, 0x40, 0xE0, 0xA0,        /* 0xC0 Agrave */
   0x40, 0x80, 0x40, 0xE0, 0xA0,        /* 0xC1 Aacute */
   0xE0, 0x00, 0x40, 0xE0, 0xA0,        /* 0xC2 Acircumflex */
   0x60, 0xC0, 0x40, 0xE0, 0xA0,        /* 0xC3 Atilde */
   0xA0, 0x40, 0xA0, 0xE0, 0xA0,        /* 0xC4 Adieresis */
   0xC0, 0xC0, 0xA0, 0xE0, 0xA0,        /* 0xC5 Aring */
   0x60, 0xC0, 0xE0, 0xC0, 0xE0,        /* 0xC6 AE */
   0x60, 0x80, 0x80, 0x60, 0x20, 0x40,  /* 0xC7 Ccedilla */
   0x40, 0x20, 0xE0, 0xC0, 0xE0,        /* 0xC8 Egrave */
   0x40, 0x80, 0xE0, 0xC0, 0xE0,        /* 0xC9 Eacute */
   0xE0, 0x00, 0xE0, 0xC0, 0xE0,        /* 0xCA Ecircumflex */
   0xA0, 0x00, 0xE0, 0xC0, 0xE0,        /* 0xCB Edieresis */
   0x40, 0x20, 0xE0, 0x40, 0xE0,        /* 0xCC Igrave */
   0x40, 0x80, 0xE0, 0x40, 0xE0,        /* 0xCD Iacute */
   0xE0, 0x00, 0xE0, 0x40, 0xE0,        /* 0xCE Icircumflex */
   0xA0, 0x00, 0xE0, 0x40, 0xE0,        /* 0xCF Idieresis */
   0xC0, 0xA0, 0xE0, 0xA0, 0xC0,        /* 0xD0 Eth */
   0xC0, 0x60, 0xA0, 0xE0, 0xA0,        /* 0xD1 Ntilde */
   0x40, 0x20, 0xE0, 0xA0, 0xE0,        /* 0xD2 Ograve */
   0x40, 0x80, 0xE0, 0xA0, 0xE0,        /* 0xD3 Oacute */
   0xE0, 0x00, 0xE0, 0xA0, 0xE0,        /* 0xD4 Ocircumflex */
   0xC0, 0x60, 0xE0, 0xA0, 0xE0,        /* 0xD5 Otilde */
   0xA0, 0x00, 0xE0, 0xA0, 0xE0,        /* 0xD6 Odieresis */
   0xA0, 0x40, 0xA0,                    /* 0xD7 multiply */
   0x60, 0xA0, 0xE0, 0xA0, 0xC0,        /* 0xD8 Oslash */
   0x80, 0x40, 0xA0, 0xA0, 0xE0,        /* 0xD9 Ugrave */
   0x20, 0x40, 0xA0, 0xA0, 0xE0,        /* 0xDA Uacute */
   0xE0, 0x00, 0xA0, 0xA0, 0xE0,        /* 0xDB Ucircumflex */
   0xA0, 0x00, 0xA0, 0xA0, 0xE0,        /* 0xDC Udieresis */
   0x20, 0x40, 0xA0, 0xE0, 0x40,        /* 0xDD Yacute */
   0x80, 0xE0, 0xA0, 0xE0, 0x80,        /* 0xDE Thorn */
   0x60, 0xA0, 0xC0, 0xA0, 0xC0, 0x80,  /* 0xDF germandbls */
   0x40, 0x20, 0x60, 0xA0, 0xE0,        /* 0xE0 agrave */
   0x40, 0x80, 0x60, 0xA0, 0xE0,        /* 0xE1 aacute */
   0xE0, 0x00, 0x60, 0xA0, 0xE0,        /* 0xE2 acircumflex */
   0x60, 0xC0, 0x60, 0xA0, 0xE0,        /* 0xE3 atilde */
   0xA0, 0x00, 0x60, 0xA0, 0xE0,        /* 0xE4 adieresis */
   0x60, 0x60, 0x60, 0xA0, 0xE0,        /* 0xE5 aring */
   0x60, 0xE0, 0xE0, 0xC0,              /* 0xE6 ae */
   0x60, 0x80, 0x60, 0x20, 0x40,        /* 0xE7 ccedilla */
   0x40, 0x20, 0x60, 0xE0, 0x60,        /* 0xE8 egrave */
   0x40, 0x80, 0x60, 0xE0, 0x60,        /* 0xE9 eacute */
   0xE0, 0x00, 0x60, 0xE0, 0x60,        /* 0xEA ecircumflex */
   0xA0, 0x00, 0x60, 0xE0, 0x60,        /* 0xEB edieresis */
   0x80, 0x40, 0x80, 0x80, 0x80,        /* 0xEC igrave */
   0x40, 0x80, 0x40, 0x40, 0x40,        /* 0xED iacute */
   0xE0, 0x00, 0x40, 0x40, 0x40,        /* 0xEE icircumflex */
   0xA0, 0x00, 0x40, 0x40, 0x40,        /* 0xEF idieresis */
   0x60, 0xC0, 0x60, 0xA0, 0x60,        /* 0xF0 eth */
   0xC0, 0x60, 0xC0, 0xA0, 0xA0,        /* 0xF1 ntilde */
   0x40, 0x20, 0x40, 0xA0, 0x40,        /* 0xF2 ograve */
   0x40, 0x80, 0x40, 0xA0, 0x40,        /* 0xF3 oacute */
   0xE0, 0x00, 0x40, 0xA0, 0x40,        /* 0xF4 ocircumflex */
   0xC0, 0x60, 0x40, 0xA0, 0x40,        /* 0xF5 otilde */
   0xA0, 0x00, 0x40, 0xA0, 0x40,        /* 0xF6 odieresis */
   0x40, 0x00, 0xE0, 0x00, 0x40,        /* 0xF7 divide */
   0x60, 0xE0, 0xA0, 0xC0,              /* 0xF8 oslash */
   0x80, 0x40, 0xA0, 0xA0, 0x60,        /* 0xF9 ugrave */
   0x20, 0x40, 0xA0, 0xA0, 0x60,        /* 0xFA uacute */
   0xE0, 0x00, 0xA0, 0xA0, 0x60,        /* 0xFB ucircumflex */
   0xA0, 0x00, 0xA0, 0xA0, 0x60,        /* 0xFC udieresis */
   0x20, 0x40, 0xA0, 0x60, 0x20, 0x40,  /* 0xFD yacute */
   0x80, 0xC0, 0xA0, 0xC0, 0x80,        /* 0xFE thorn */
   0xA0, 0x00, 0xA0, 0x60, 0x20, 0x40,  /* 0xFF ydieresis */
   0x00,                                /* 0x11D gcircumflex */
   0x60, 0xC0, 0xE0, 0xC0, 0x60,        /* 0x152 OE */
   0x60, 0xE0, 0xC0, 0xE0,              /* 0x153 oe */
   0xA0, 0x60, 0xC0, 0x60, 0xC0,        /* 0x160 Scaron */
   0xA0, 0x60, 0xC0, 0x60, 0xC0,        /* 0x161 scaron */
   0xA0, 0x00, 0xA0, 0x40, 0x40,        /* 0x178 Ydieresis */
   0xA0, 0xE0, 0x60, 0xC0, 0xE0,        /* 0x17D Zcaron */
   0xA0, 0xE0, 0x60, 0xC0, 0xE0,        /* 0x17E zcaron */
   0x00,                                /* 0xEA4 uni0EA4 */
   0x00,                                /* 0x13A0 uni13A0 */
   0x80,                                /* 0x2022 bullet */
   0xA0,                                /* 0x2026 ellipsis */
   0x60, 0xE0, 0xE0, 0xC0, 0x60,        /* 0x20AC Euro */
   0xE0, 0xA0, 0xA0, 0xA0, 0xE0,        /* 0xFFFD uniFFFD */
  };


/* {offset, width, height, advance cursor, x offset, y offset} */
const GFXglyph TomThumbGlyphs[] PROGMEM = {
   { 0, 8, 1, 2, 0, -5 },    /* 0x20 space */
   { 1, 8, 5, 2, 0, -5 },    /* 0x21 exclam */
   { 6, 8, 2, 4, 0, -5 },    /* 0x22 quotedbl */
   { 8, 8, 5, 4, 0, -5 },    /* 0x23 numbersign */
   { 13, 8, 5, 4, 0, -5 },   /* 0x24 dollar */
   { 18, 8, 5, 4, 0, -5 },   /* 0x25 percent */
   { 23, 8, 5, 4, 0, -5 },   /* 0x26 ampersand */
   { 28, 8, 2, 2, 0, -5 },   /* 0x27 quotesingle */
   { 30, 8, 5, 3, 0, -5 },   /* 0x28 parenleft */
   { 35, 8, 5, 3, 0, -5 },   /* 0x29 parenright */
   { 40, 8, 3, 4, 0, -5 },   /* 0x2A asterisk */
   { 43, 8, 3, 4, 0, -4 },   /* 0x2B plus */
   { 46, 8, 2, 3, 0, -2 },   /* 0x2C comma */
   { 48, 8, 1, 4, 0, -3 },   /* 0x2D hyphen */
   { 49, 8, 1, 2, 0, -1 },   /* 0x2E period */
   { 50, 8, 5, 4, 0, -5 },   /* 0x2F slash */
   { 55, 8, 5, 4, 0, -5 },   /* 0x30 zero */
   { 60, 8, 5, 4, 0, -5 },    /* 0x31 one */
   { 65, 8, 5, 4, 0, -5 },   /* 0x32 two */
   { 70, 8, 5, 4, 0, -5 },   /* 0x33 three */
   { 75, 8, 5, 4, 0, -5 },   /* 0x34 four */
   { 80, 8, 5, 4, 0, -5 },   /* 0x35 five */
   { 85, 8, 5, 4, 0, -5 },   /* 0x36 six */
   { 90, 8, 5, 4, 0, -5 },   /* 0x37 seven */
   { 95, 8, 5, 4, 0, -5 },   /* 0x38 eight */
   { 100, 8, 5, 4, 0, -5 },  /* 0x39 nine */
   { 105, 8, 3, 2, 0, -4 },  /* 0x3A colon */
   { 108, 8, 4, 3, 0, -4 },  /* 0x3B semicolon */
   { 112, 8, 5, 4, 0, -5 },  /* 0x3C less */
   { 117, 8, 3, 4, 0, -4 },  /* 0x3D equal */
   { 120, 8, 5, 4, 0, -5 },  /* 0x3E greater */
   { 125, 8, 5, 4, 0, -5 },  /* 0x3F question */
   { 130, 8, 5, 4, 0, -5 },  /* 0x40 at */
   { 135, 8, 5, 4, 0, -5 },   /* 0x41 A */
   { 140, 8, 5, 4, 0, -5 },     /* 0x42 B */
   { 145, 8, 5, 4, 0, -5 },     /* 0x43 C */
   { 150, 8, 5, 4, 0, -5 },     /* 0x44 D */
   { 155, 8, 5, 4, 0, -5 },     /* 0x45 E */
   { 160, 8, 5, 4, 0, -5 },     /* 0x46 F */
   { 165, 8, 5, 4, 0, -5 },     /* 0x47 G */
   { 170, 8, 5, 4, 0, -5 },     /* 0x48 H */
   { 175, 8, 5, 2, 0, -5 },     /* 0x49 I */
   { 180, 8, 5, 4, 0, -5 },     /* 0x4A J */
   { 185, 8, 5, 4, 0, -5 },     /* 0x4B K */
   { 190, 8, 5, 4, 0, -5 },     /* 0x4C L */
   { 195, 8, 5, 6, 0, -5 },     /* 0x4D M */
   { 200, 8, 5, 5, 0, -5 },     /* 0x4E N */
   { 205, 8, 5, 4, 0, -5 },     /* 0x4F O */
   { 210, 8, 5, 4, 0, -5 },     /* 0x50 P */
   { 215, 8, 5, 5, 0, -5 },     /* 0x51 Q */
   { 220, 8, 5, 4, 0, -5 },     /* 0x52 R */
   { 225, 8, 5, 4, 0, -5 },     /* 0x53 S */
   { 230, 8, 5, 4, 0, -5 },     /* 0x54 T */
   { 235, 8, 5, 4, 0, -5 },     /* 0x55 U */
   { 240, 8, 5, 4, 0, -5 },     /* 0x56 V */
   { 245, 8, 5, 6, 0, -5 },     /* 0x57 W */
   { 250, 8, 5, 4, 0, -5 },     /* 0x58 X */
   { 255, 8, 5, 4, 0, -5 },     /* 0x59 Y */
   { 260, 8, 5, 4, 0, -5 },     /* 0x5A Z */
   { 265, 8, 5, 4, 0, -5 },  /* 0x5B bracketleft */
   { 270, 8, 3, 4, 0, -4 },  /* 0x5C backslash */
   { 273, 8, 5, 4, 0, -5 },  /* 0x5D bracketright */
   { 278, 8, 2, 4, 0, -5 },  /* 0x5E asciicircum */
   { 280, 8, 1, 4, 0, -1 },  /* 0x5F underscore */
   { 281, 8, 2, 3, 0, -5 },  /* 0x60 grave */
   { 283, 8, 4, 4, 0, -4 },  /* 0x61 a */
   { 287, 8, 5, 4, 0, -5 },  /* 0x62 b */
   { 292, 8, 4, 4, 0, -4 },  /* 0x63 c */
   { 296, 8, 5, 4, 0, -5 },  /* 0x64 d */
   { 301, 8, 4, 4, 0, -4 },  /* 0x65 e */
   { 305, 8, 5, 4, 0, -5 },  /* 0x66 f */
   { 310, 8, 5, 4, 0, -4 },  /* 0x67 g */
   { 315, 8, 5, 4, 0, -5 },  /* 0x68 h */
   { 320, 8, 5, 2, 0, -5 },  /* 0x69 i */
   { 325, 8, 6, 4, 0, -5 },  /* 0x6A j */
   { 331, 8, 5, 4, 0, -5 },  /* 0x6B k */
   { 336, 8, 5, 4, 0, -5 },  /* 0x6C l */
   { 341, 8, 4, 4, 0, -4 },  /* 0x6D m */
   { 345, 8, 4, 4, 0, -4 },  /* 0x6E n */
   { 349, 8, 4, 4, 0, -4 },  /* 0x6F o */
   { 353, 8, 5, 4, 0, -4 },  /* 0x70 p */
   { 358, 8, 5, 4, 0, -4 },  /* 0x71 q */
   { 363, 8, 4, 4, 0, -4 },  /* 0x72 r */
   { 367, 8, 4, 4, 0, -4 },  /* 0x73 s */
   { 371, 8, 5, 4, 0, -5 },  /* 0x74 t */
   { 376, 8, 4, 4, 0, -4 },  /* 0x75 u */
   { 380, 8, 4, 4, 0, -4 },  /* 0x76 v */
   { 384, 8, 4, 4, 0, -4 },  /* 0x77 w */
   { 388, 8, 4, 4, 0, -4 },  /* 0x78 x */
   { 392, 8, 5, 4, 0, -4 },  /* 0x79 y */
   { 397, 8, 4, 4, 0, -4 },  /* 0x7A z */
   { 401, 8, 5, 4, 0, -5 },  /* 0x7B braceleft */
   { 406, 8, 5, 2, 0, -5 },  /* 0x7C bar */
   { 411, 8, 5, 4, 0, -5 },  /* 0x7D braceright */
   { 416, 8, 2, 4, 0, -5 },  /* 0x7E asciitilde */
   { 418, 8, 5, 2, 0, -5 },  /* 0xA1 exclamdown */
   { 423, 8, 5, 4, 0, -5 },  /* 0xA2 cent */
   { 428, 8, 5, 4, 0, -5 },  /* 0xA3 sterling */
   { 433, 8, 5, 4, 0, -5 },  /* 0xA4 currency */
   { 438, 8, 5, 4, 0, -5 },  /* 0xA5 yen */
   { 443, 8, 5, 2, 0, -5 },  /* 0xA6 brokenbar */
   { 448, 8, 5, 4, 0, -5 },  /* 0xA7 section */
   { 453, 8, 1, 4, 0, -5 },  /* 0xA8 dieresis */
   { 454, 8, 3, 4, 0, -5 },  /* 0xA9 copyright */
   { 457, 8, 5, 4, 0, -5 },  /* 0xAA ordfeminine */
   { 462, 8, 3, 3, 0, -5 },  /* 0xAB guillemotleft */
   { 465, 8, 2, 4, 0, -4 },  /* 0xAC logicalnot */
   { 467, 8, 1, 3, 0, -3 },  /* 0xAD softhyphen */
   { 468, 8, 3, 4, 0, -5 },  /* 0xAE registered */
   { 471, 8, 1, 4, 0, -5 },  /* 0xAF macron */
   { 472, 8, 3, 4, 0, -5 },  /* 0xB0 degree */
   { 475, 8, 5, 4, 0, -5 },  /* 0xB1 plusminus */
   { 480, 8, 3, 4, 0, -5 },  /* 0xB2 twosuperior */
   { 483, 8, 3, 4, 0, -5 },  /* 0xB3 threesuperior */
   { 486, 8, 2, 3, 0, -5 },  /* 0xB4 acute */
   { 488, 8, 5, 4, 0, -5 },  /* 0xB5 mu */
   { 493, 8, 5, 4, 0, -5 },  /* 0xB6 paragraph */
   { 498, 8, 3, 4, 0, -4 },  /* 0xB7 periodcentered */
   { 501, 8, 3, 4, 0, -3 },  /* 0xB8 cedilla */
   { 504, 8, 3, 2, 0, -5 },  /* 0xB9 onesuperior */
   { 507, 8, 5, 4, 0, -5 },  /* 0xBA ordmasculine */
   { 512, 8, 3, 3, 0, -5 },  /* 0xBB guillemotright */
   { 515, 8, 5, 4, 0, -5 },  /* 0xBC onequarter */
   { 520, 8, 5, 4, 0, -5 },  /* 0xBD onehalf */
   { 525, 8, 5, 4, 0, -5 },  /* 0xBE threequarters */
   { 530, 8, 5, 4, 0, -5 },  /* 0xBF questiondown */
   { 535, 8, 5, 4, 0, -5 },  /* 0xC0 Agrave */
   { 540, 8, 5, 4, 0, -5 },  /* 0xC1 Aacute */
   { 545, 8, 5, 4, 0, -5 },  /* 0xC2 Acircumflex */
   { 550, 8, 5, 4, 0, -5 },  /* 0xC3 Atilde */
   { 555, 8, 5, 4, 0, -5 },  /* 0xC4 Adieresis */
   { 560, 8, 5, 4, 0, -5 },  /* 0xC5 Aring */
   { 565, 8, 5, 4, 0, -5 },  /* 0xC6 AE */
   { 570, 8, 6, 4, 0, -5 },  /* 0xC7 Ccedilla */
   { 576, 8, 5, 4, 0, -5 },  /* 0xC8 Egrave */
   { 581, 8, 5, 4, 0, -5 },  /* 0xC9 Eacute */
   { 586, 8, 5, 4, 0, -5 },  /* 0xCA Ecircumflex */
   { 591, 8, 5, 4, 0, -5 },  /* 0xCB Edieresis */
   { 596, 8, 5, 4, 0, -5 },  /* 0xCC Igrave */
   { 601, 8, 5, 4, 0, -5 },  /* 0xCD Iacute */
   { 606, 8, 5, 4, 0, -5 },  /* 0xCE Icircumflex */
   { 611, 8, 5, 4, 0, -5 },  /* 0xCF Idieresis */
   { 616, 8, 5, 4, 0, -5 },  /* 0xD0 Eth */
   { 621, 8, 5, 4, 0, -5 },  /* 0xD1 Ntilde */
   { 626, 8, 5, 4, 0, -5 },  /* 0xD2 Ograve */
   { 631, 8, 5, 4, 0, -5 },  /* 0xD3 Oacute */
   { 636, 8, 5, 4, 0, -5 },  /* 0xD4 Ocircumflex */
   { 641, 8, 5, 4, 0, -5 },  /* 0xD5 Otilde */
   { 646, 8, 5, 4, 0, -5 },  /* 0xD6 Odieresis */
   { 651, 8, 3, 4, 0, -4 },  /* 0xD7 multiply */
   { 654, 8, 5, 4, 0, -5 },  /* 0xD8 Oslash */
   { 659, 8, 5, 4, 0, -5 },  /* 0xD9 Ugrave */
   { 664, 8, 5, 4, 0, -5 },  /* 0xDA Uacute */
   { 669, 8, 5, 4, 0, -5 },  /* 0xDB Ucircumflex */
   { 674, 8, 5, 4, 0, -5 },  /* 0xDC Udieresis */
   { 679, 8, 5, 4, 0, -5 },  /* 0xDD Yacute */
   { 684, 8, 5, 4, 0, -5 },  /* 0xDE Thorn */
   { 689, 8, 6, 4, 0, -5 },  /* 0xDF germandbls */
   { 695, 8, 5, 4, 0, -5 },  /* 0xE0 agrave */
   { 700, 8, 5, 4, 0, -5 },  /* 0xE1 aacute */
   { 705, 8, 5, 4, 0, -5 },  /* 0xE2 acircumflex */
   { 710, 8, 5, 4, 0, -5 },  /* 0xE3 atilde */
   { 715, 8, 5, 4, 0, -5 },  /* 0xE4 adieresis */
   { 720, 8, 5, 4, 0, -5 },  /* 0xE5 aring */
   { 725, 8, 4, 4, 0, -4 },  /* 0xE6 ae */
   { 729, 8, 5, 4, 0, -4 },  /* 0xE7 ccedilla */
   { 734, 8, 5, 4, 0, -5 },  /* 0xE8 egrave */
   { 739, 8, 5, 4, 0, -5 },  /* 0xE9 eacute */
   { 744, 8, 5, 4, 0, -5 },  /* 0xEA ecircumflex */
   { 749, 8, 5, 4, 0, -5 },  /* 0xEB edieresis */
   { 754, 8, 5, 3, 0, -5 },  /* 0xEC igrave */
   { 759, 8, 5, 3, 0, -5 },  /* 0xED iacute */
   { 764, 8, 5, 4, 0, -5 },  /* 0xEE icircumflex */
   { 769, 8, 5, 4, 0, -5 },  /* 0xEF idieresis */
   { 774, 8, 5, 4, 0, -5 },  /* 0xF0 eth */
   { 779, 8, 5, 4, 0, -5 },  /* 0xF1 ntilde */
   { 784, 8, 5, 4, 0, -5 },  /* 0xF2 ograve */
   { 789, 8, 5, 4, 0, -5 },  /* 0xF3 oacute */
   { 794, 8, 5, 4, 0, -5 },  /* 0xF4 ocircumflex */
   { 799, 8, 5, 4, 0, -5 },  /* 0xF5 otilde */
   { 804, 8, 5, 4, 0, -5 },  /* 0xF6 odieresis */
   { 809, 8, 5, 4, 0, -5 },  /* 0xF7 divide */
   { 814, 8, 4, 4, 0, -4 },  /* 0xF8 oslash */
   { 818, 8, 5, 4, 0, -5 },  /* 0xF9 ugrave */
   { 823, 8, 5, 4, 0, -5 },  /* 0xFA uacute */
   { 828, 8, 5, 4, 0, -5 },  /* 0xFB ucircumflex */
   { 833, 8, 5, 4, 0, -5 },  /* 0xFC udieresis */
   { 838, 8, 6, 4, 0, -5 },  /* 0xFD yacute */
   { 844, 8, 5, 4, 0, -4 },  /* 0xFE thorn */
   { 849, 8, 6, 4, 0, -5 },  /* 0xFF ydieresis */
   { 855, 8, 1, 2, 0, -1 },  /* 0x11D gcircumflex */
   { 856, 8, 5, 4, 0, -5 },  /* 0x152 OE */
   { 861, 8, 4, 4, 0, -4 },  /* 0x153 oe */
   { 865, 8, 5, 4, 0, -5 },  /* 0x160 Scaron */
   { 870, 8, 5, 4, 0, -5 },  /* 0x161 scaron */
   { 875, 8, 5, 4, 0, -5 },  /* 0x178 Ydieresis */
   { 880, 8, 5, 4, 0, -5 },  /* 0x17D Zcaron */
   { 885, 8, 5, 4, 0, -5 },  /* 0x17E zcaron */
   { 890, 8, 1, 2, 0, -1 },  /* 0xEA4 uni0EA4 */
   { 891, 8, 1, 2, 0, -1 },  /* 0x13A0 uni13A0 */
   { 892, 8, 1, 2, 0, -3 },  /* 0x2022 bullet */
   { 893, 8, 1, 4, 0, -1 },  /* 0x2026 ellipsis */
   { 894, 8, 5, 4, 0, -5 },  /* 0x20AC Euro */
   { 899, 8, 5, 4, 0, -5 },  /* 0xFFFD uniFFFD */
};

const GFXfont TomThumb PROGMEM = {
  (uint8_t  *)TomThumbBitmaps,
  (GFXglyph *)TomThumbGlyphs,
  0x20, 0x7E, 6 };
