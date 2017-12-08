// (c) 2017 Outernet Inc

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <string.h>

#include <math.h>
#include "ILI9341.h"

/*******************************************************************
* NAME :            void ILI9341::set_background
*
* DESCRIPTION :    Set the full screen with a specific color
*
* INPUTS :
*       PARAMETERS:
*           color can be found in ILI9341_defs.h
*
*/
void ILI9341::fillScreen(uint16_t color)
{
	setAddrWindow (0, 0, ILI9341_TFTWIDTH - 1, ILI9341_TFTHEIGHT - 1);
	
	for(int w=0;w<=ILI9341_TFTHEIGHT;w++)		    
		for(int u=0;u<=ILI9341_TFTWIDTH;u++)
			writeU16(color);
}


/*******************************************************************
* NAME :            void ILI9341::set_window
*
* DESCRIPTION :     Create a window in ILI9341
*
* INPUTS :
*       PARAMETERS:
*           x0,x1,y0,y1 are the 2 2-D coordinates to locate the the pointer 
*
*/
void ILI9341::setAddrWindow (uint16_t x0, uint16_t x1, uint16_t y0, uint16_t y1)
{
    writeCMD(ILI9341_CASET);
    writeU16(x0);
    writeU16(y0);
    writeCMD(ILI9341_PASET);
    writeU16(x1);
    writeU16(y1);
    writeCMD(ILI9341_RAMWR);
}

void ILI9341::drawPixel(int16_t x, int16_t y, uint16_t color)
{
	setAddrWindow(x,y,x+1,y+1);
	writeU16(color);
}

uint16_t ILI9341::color565(uint8_t r, uint8_t g, uint8_t b) {
  return ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | (b >> 3);
}

void ILI9341::setRotation(uint8_t m) {
  writeCMD(ILI9341_MADCTL);
  rotation = m % 4; // can't be higher than 3
  switch (rotation) {
   case 0:
     writeU8(MADCTL_MX | MADCTL_BGR);
     _width  = ILI9341_TFTWIDTH;
     _height = ILI9341_TFTHEIGHT;
     break;
   case 1:
     writeU8(MADCTL_MV | MADCTL_BGR);
     _width  = ILI9341_TFTHEIGHT;
     _height = ILI9341_TFTWIDTH;
     break;
  case 2:
    writeU8(MADCTL_MY | MADCTL_BGR);
     _width  = ILI9341_TFTWIDTH;
     _height = ILI9341_TFTHEIGHT;
    break;
   case 3:
     writeU8(MADCTL_MX | MADCTL_MY | MADCTL_MV | MADCTL_BGR);
     _width  = ILI9341_TFTHEIGHT;
     _height = ILI9341_TFTWIDTH;
     break;
  }

}



void ILI9341::invertDisplay(bool i) {
	writeCMD(i ? ILI9341_INVON : ILI9341_INVOFF);
}



void ILI9341::writePixels(uint16_t * colors, uint32_t len){
    for(int i=0; i<len; i++)
		writeU8(colors[i]);
}



void ILI9341::drawRGBBitmap(int16_t x, int16_t y,
	uint16_t *pcolors, int16_t w, int16_t h) {

    int16_t x2, y2; // Lower-right coord
    if(( x             >= _width ) ||      // Off-edge right
       ( y             >= _height) ||      // " top
       ((x2 = (x+w-1)) <  0      ) ||      // " left
       ((y2 = (y+h-1)) <  0)     ) return; // " bottom

    int16_t bx1=0, by1=0, // Clipped top-left within bitmap
            saveW=w;      // Save original bitmap width value
    if(x < 0) { // Clip left
        w  +=  x;
        bx1 = -x;
        x   =  0;
    }
    if(y < 0) { // Clip top
        h  +=  y;
        by1 = -y;
        y   =  0;
    }
    if(x2 >= _width ) w = _width  - x; // Clip right
    if(y2 >= _height) h = _height - y; // Clip bottom

    pcolors += by1 * saveW + bx1; // Offset bitmap ptr to clipped top-left

    setAddrWindow(x, y, w, h); // Clipped area
    while(h--) { // For each (clipped) scanline...
      writePixels(pcolors, w); // Push one (clipped) row
      pcolors += saveW; // Advance pointer by one full (unclipped) line
    }
}