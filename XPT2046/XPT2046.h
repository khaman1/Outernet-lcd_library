#ifndef _XPT2046_H_
#define _XPT2046_H_

#include <string>
#include <stdint.h>
#include <fstream>

#include "../main.h"
#include "XPT2046_defs.h"


using namespace std;

class XPT2046 {
	private:
		SPIdev 			_spi;
		GPIOpin			IRQ;
		
		// GPIO pins for bitbang
		GPIOpin 		CS;
		GPIOpin 		DIN;
		GPIOpin 		DOUT;
		GPIOpin 		DCLK;
		
		unsigned int 	X,Y;
		unsigned int 	rawX,rawY;
		bool			bitbangMode;
		unsigned int 	X1,X2;
		unsigned int 	Y1,Y2;
		
	public:
		XPT2046(const char* TouchSpiPort, bool enable_bitbangMode); 
		
		void 			init();
		unsigned int*  	getRawCoordinates();
		unsigned int*  	getCoordinates();
		unsigned int 	read();
		void			write(uint8_t num);
		
		void 			printCoordinates();
		void 			printRawCoordinates();
		void 			test();
		//void 			touchCalibration(ILI9341 _lcd);
};


#endif

