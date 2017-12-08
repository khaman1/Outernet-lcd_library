#ifndef _ILI9341_H_
#define _ILI9341_H_


#include "../main.h"
#include "Adafruit_GFX.h"
#include "ILI9341_defs.h"
#include "../XPT2046/XPT2046.h"
	
class ILI9341: public Adafruit_GFX {
	private: 
		SPIdev _spi;
		GPIOpin DC;
		GPIOpin RST;
		GPIOpin BL;
		
	public:
		ILI9341 (const char* LCDSpiPort); 
		
		// SPI functions
        void        writeCMD(uint8_t data);
		void		writeU8(uint8_t data);
		void        writeU16(uint16_t data);
		void		write(int datasize, uint8_t *data);
		
		void		reset();
		void 		delayms(int num);
			
		// LCD functions
		void		init();		
		void		setBacklight(bool state);
		void 		setAddrWindow(uint16_t x0, uint16_t x1, uint16_t y0, uint16_t y1);
		uint16_t 	color565(uint8_t r, uint8_t g, uint8_t b);
		void 		setRotation(uint8_t m);
		void 		invertDisplay(bool i);
		
		void		writePixels(uint16_t * colors, uint32_t len);
		void 		drawRGBBitmap(int16_t x, int16_t y, uint16_t *pcolors, int16_t w, int16_t h);
		
		// LCD Tests
		void 		testFillScreen();
		void 		testText();
		void 		testLines(uint16_t color);
		void 		testFastLines(uint16_t color1, uint16_t color2);
		void 		testRects(uint16_t color);
		void 		testFilledRects(uint16_t color1, uint16_t color2);
		void 		testFilledCircles(uint8_t radius, uint16_t color);
		void 		testCircles(uint8_t radius, uint16_t color);
		void 		testTriangles();
		void 		testFilledTriangles();
		void 		testRoundRects();
		void 		testFilledRoundRects();
		
		
		void		test1();
		void		test2();
		
		// Virtual funnctions over Adafruit_GFX
		void 		drawPixel(int16_t x, int16_t y, uint16_t color);
		void 		fillScreen(uint16_t color);
		
		
};

#endif