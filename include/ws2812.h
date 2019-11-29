/** MIT licence

 Copyright (C) 2019 by Vu Nam https://github.com/vunam https://studiokoda.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do
 so, subject to the following conditions: The above copyright notice and this
 permission notice shall be included in all copies or substantial portions of
 the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO
 EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 DEALINGS IN THE SOFTWARE.

*/

#ifndef WS2812_H
#define WS2812_H

#include <stdbool.h>
#include <stdint.h>

#define LED_NUMBER 8
#define PIXEL_SIZE 12 // each colour takes 4 bytes
#define SAMPLE_RATE (93750)
#define ZERO_BUFFER 48
#define I2S_NUM (0)
#define I2S_DO_IO (GPIO_NUM_25)
#define I2S_DI_IO (-1)

typedef struct {
  uint8_t green;
  uint8_t red;
  uint8_t blue;
} ws2812_pixel_t;

void ws2812_init();

void ws2812_update(ws2812_pixel_t *pixels);

#endif
