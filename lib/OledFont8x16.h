//-------------------------------------------------------------------------
//
// The MIT License (MIT)
//
// Copyright (c) 2017 Andrew Duncan
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//-------------------------------------------------------------------------

#ifndef OLED_FONT_8X16_H
#define OLED_FONT_8X16_H

//-------------------------------------------------------------------------

#include <cstdint>
#include <string>

#include "OledPixel.h"
#include "point.h"

//-------------------------------------------------------------------------

namespace SSD1306
{

//-------------------------------------------------------------------------

constexpr int16_t sc_fontWidth8x16{8};
constexpr int16_t sc_fontHeight8x16{16};

//-------------------------------------------------------------------------

OledPoint
drawChar8x16(
    const OledPoint& p,
    uint8_t c,
    PixelStyle style,
    OledPixel& pixels);

OledPoint
drawString8x16(
    const OledPoint& p,
    const char* string,
    PixelStyle style,
    OledPixel& pixels);

OledPoint
drawString8x16(
    const OledPoint& p,
    const std::string& string,
    PixelStyle style,
    OledPixel& pixels);

//-------------------------------------------------------------------------

} // namespace SSD1306

//-------------------------------------------------------------------------

#endif
