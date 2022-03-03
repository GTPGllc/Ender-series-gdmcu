/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from 56x19 C/C++ data
 */
#pragma once

#include "Configuration.h"

#if ENABLED(ENDER3_PRO)
//#define STATUS_SCREEN_X 72
//#define STATUS_LOGO_WIDTH 56

#define STATUS_LOGO_X         0
#define STATUS_LOGO_Y         8
#define STATUS_LOGO_WIDTH     40
#define STATUS_LOGO_HEIGHT    19

#elif ENABLED(ENDER3)

#define BW(N) ((N + 7) / 8)

#define STATUS_LOGO_X         0
#define STATUS_LOGO_Y         8
#define STATUS_LOGO_WIDTH     40

#elif ENABLED(ENDER3_MAX)
#define BW(N) ((N + 7) / 8)

#define STATUS_LOGO_X         0
#define STATUS_LOGO_Y         8
#define STATUS_LOGO_WIDTH     40
#define STATUS_LOGO_HEIGHT    19

#elif ENABLED(ENDER5)
#define BW(N) ((N + 7) / 8)

#define STATUS_LOGO_X         0
#define STATUS_LOGO_Y         8
#define STATUS_LOGO_WIDTH     40
/* Ender-5 */
#define STATUS_LOGO_HEIGHT    8

#elif ENABLED(ENDER5_PRO)

#define BW(N) ((N + 7) / 8)

#define STATUS_LOGO_X         0
#define STATUS_LOGO_Y         8
#define STATUS_LOGO_WIDTH     40
/* Ender-5 Pro*/
#define STATUS_LOGO_HEIGHT    19

#elif ENABLED(ENDER2_PRO165)
//#define STATUS_SCREEN_X 72
//#define STATUS_LOGO_WIDTH 56

#define STATUS_LOGO_X         0
#define STATUS_LOGO_Y         8
#define STATUS_LOGO_WIDTH     40
#define STATUS_LOGO_HEIGHT    19
#elif ENABLED(ENDER2_PRO200)
//#define STATUS_SCREEN_X 72
//#define STATUS_LOGO_WIDTH 56

#define STATUS_LOGO_X         0
#define STATUS_LOGO_Y         8
#define STATUS_LOGO_WIDTH     40
#define STATUS_LOGO_HEIGHT    19

#endif

const unsigned char status_logo_bmp[] PROGMEM = {

#if ENABLED(ENDER3_PRO)
  0x00,0x00,0x00,0x00,0x00,
  0xF8,0x01,0x80,0x00,0x30,
  0x48,0x00,0x80,0x00,0x48,
  0x43,0xC3,0x8C,0xD0,0x08,
  0x71,0x24,0x92,0x6F,0xB0,
  0x41,0x24,0x9E,0x40,0x08,
  0x49,0x24,0x90,0x40,0x48,
  0xFB,0xB3,0xCE,0xE0,0x30,
  0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,
  0x00,0x7C,0x00,0x00,0x00,
  0x00,0x22,0x00,0x00,0x00,
  0x00,0x22,0x00,0x00,0x00,
  0x00,0x22,0x6C,0x70,0x00,
  0x00,0x3C,0x30,0x88,0x00,
  0x00,0x20,0x20,0x88,0x00,
  0x00,0x20,0x20,0x88,0x00,
  0x00,0x20,0x20,0x88,0x00,
  0x00,0x70,0x78,0x70,0x00,

#elif ENABLED(ENDER3)

  B11111000,B00000001,B10000000,B00000000,B00001100,
  B01001000,B00000000,B10000000,B00000000,B00010010,
  B01000011,B11000011,B10001100,B11010000,B00000010,
  B01110001,B00100100,B10010010,B01100111,B11001100,
  B01000001,B00100100,B10011110,B01000000,B00000010,
  B01001001,B00100100,B10010000,B01000000,B00010010,
  B11111011,B10110011,B11001110,B11100000,B00001100

#elif ENABLED(ENDER3_MAX)
  0xF8,0x01,0x80,0x00,0x30,
  0x48,0x00,0x80,0x00,0x48,
  0x43,0xC3,0x8C,0xD0,0x08,
  0x71,0x24,0x92,0x6F,0xB0,
  0x41,0x24,0x9E,0x40,0x08,
  0x49,0x24,0x90,0x40,0x48,
  0xFB,0xB3,0xCE,0xE0,0x30,
  0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,
  0x00,0xEE,0x00,0x00,0x00,
  0x00,0x6C,0x00,0x00,0x00,
  0x00,0x6C,0x00,0x00,0x00,
  0x00,0x6C,0x38,0x76,0x00,
  0x00,0x6C,0x44,0x24,0x00,
  0x00,0x54,0x0C,0x18,0x00,
  0x00,0x54,0x34,0x18,0x00,
  0x00,0x54,0x44,0x18,0x00,
  0x00,0x54,0x4C,0x24,0x00,
  0x00,0xD6,0x36,0x6E,0x00,

#elif ENABLED(ENDER5)
  0xF8,0x00,0x80,0x00,0x3C,
  0x48,0x00,0x80,0x00,0x20,
  0x43,0xC3,0x99,0xA0,0x38,
  0x71,0x24,0xA4,0xCF,0x84,
  0x41,0x24,0xBC,0x80,0x04,
  0x49,0x24,0xA0,0x80,0x24,
  0xFB,0xB3,0x9D,0xC0,0x18,
  0x00,0x00,0x00,0x00,0x00,

#elif ENABLED(ENDER5_PRO)
  0xF8,0x00,0x80,0x00,0x3C,
  0x48,0x00,0x80,0x00,0x20,
  0x43,0xC3,0x99,0xA0,0x38,
  0x71,0x24,0xA4,0xCF,0x84,
  0x41,0x24,0xBC,0x80,0x04,
  0x49,0x24,0xA0,0x80,0x24,
  0xFB,0xB3,0x9D,0xC0,0x18,
  0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,
  0x00,0x7C,0x00,0x00,0x00,
  0x00,0x22,0x00,0x00,0x00,
  0x00,0x22,0x00,0x00,0x00,
  0x00,0x22,0x6C,0x70,0x00,
  0x00,0x3C,0x30,0x88,0x00,
  0x00,0x20,0x20,0x88,0x00,
  0x00,0x20,0x20,0x88,0x00,
  0x00,0x20,0x20,0x88,0x00,
  0x00,0x70,0x78,0x70,0x00

#elif ENABLED(ENDER2_PRO165) || ENABLED(ENDER2_PRO200) || ENABLED(ENDER2_PRO250)
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B11110000,B00000010,B00000000,B00000000,B00110000,
  B10000000,B00000010,B00000000,B00000000,B01001000,
  B10000101,B10001110,B00110011,B01100000,B00001000,
  B11100110,B01010010,B01001001,B10001111,B00010000,
  B10000100,B01010010,B01111001,B00000000,B00100000,
  B10000100,B01010010,B01000001,B00000000,B01000000,
  B11110100,B01001111,B00111011,B10000000,B01111000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011110,B00000000,B00000000,B00000000,
  B00000000,B00010001,B00000000,B00000000,B00000000,
  B00000000,B00010001,B00000000,B00000000,B00000000,
  B00000000,B00011110,B00110110,B00110000,B00000000,
  B00000000,B00010000,B00011000,B01001000,B00000000,
  B00000000,B00010000,B00010000,B01001000,B00000000,
  B00000000,B00010000,B00010000,B01001000,B00000000,
  B00000000,B00010000,B00111000,B00110000,B00000000

#endif
};