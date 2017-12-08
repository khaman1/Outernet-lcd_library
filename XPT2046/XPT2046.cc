#include <poll.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/signalfd.h>
#include <unistd.h>
#include <stdexcept>
#include <sys/types.h>
#include <sys/stat.h>
#include "XPT2046.h"
#include <string.h>
#include <stdlib.h>

#include "XPT2046.h"

using namespace std;

/*******************************************************************
* NAME :            XPT2046::XPT2046(const char* TouchSpiPort, bool enable_bitbangMode)
*
* DESCRIPTION :     XPT2046 Constructor
*
*/
XPT2046::XPT2046(const char* TouchSpiPort, bool enable_bitbangMode):
_spi(TouchSpiPort, TOUCH_SPI_MODE, TOUCH_SPI_DATA_BITS, TOUCH_SPI_SPEED, 0),
IRQ(XPT2046_IRQ, "in", "rising", true),
CS(XPT2046_CS, "out", "rising", true),
DIN(XPT2046_DIN, "out", "rising", true),
DOUT(XPT2046_DOUT, "in", "rising", true),
DCLK(XPT2046_DCLK, "out", "rising", true)
{
	bitbangMode = enable_bitbangMode;
}


/*******************************************************************
* NAME :            XPT2046::XPT2046(const char* TouchSpiPort, bool enable_bitbangMode)
*
* DESCRIPTION :     XPT2046 Init. Only used for bitbangMode
*
*/
void XPT2046::init()
{
	if(bitbangMode)
	{
		CS.setHigh();
		DCLK.setHigh();
		DIN.setHigh();
		DCLK.setHigh();
	}
}


/*******************************************************************
* NAME :            XPT2046::XPT2046(const char* TouchSpiPort, bool enable_bitbangMode)
*
* DESCRIPTION :     Read the X,Y coordinates. The raw data is in range of 0 and 4095
*
*/
unsigned int* XPT2046::getRawCoordinates()
{
	unsigned int* data = (unsigned int*) malloc(2);;
	unsigned int rawX=-1, rawY=-1;
	
	data[0]=0;data[1]=0;
	
	
	if(bitbangMode)
	{
		init();
		
		CS.setLow();
		
		// Retrieve X
		write(0x90); 	
		DCLK.setHigh(); 
		DCLK.setLow(); 	
		rawX=read();
		
		
		// Retrieve Y
		write(0xD0);	
		DCLK.setHigh(); 
		DCLK.setLow(); 	
		rawY=read();
		
		CS.setHigh();	
	}
	else
	{
		
	}
	
	
	data[0] = rawX;
	data[1] = rawY;
	
	return data;
}


/*******************************************************************
* NAME :            XPT2046::XPT2046(const char* TouchSpiPort, bool enable_bitbangMode)
*
* DESCRIPTION :     Convert the Raw Coordinates to fit the coordinates in the (width,length) of the screen.
*
*/

unsigned int* XPT2046::getCoordinates()
{
	unsigned int* data = getRawCoordinates();
	unsigned int max  = ILI9341_TFTWIDTH > ILI9341_TFTHEIGHT ? ILI9341_TFTWIDTH : ILI9341_TFTHEIGHT;
	
	X=(((data[0]-240)*10)/152);
	Y=(((data[1]-180)*10)/117);
	
	
	// Output result
	if(X>=0 && X<=max && Y>=0 && Y<=max)
	{
		data[0] = X;
		data[1] = Y;
	}
	else
	{
		data[0] = 0;
		data[1] = 0;
	}

	return data;
}


unsigned int XPT2046::read()
{
	unsigned char cnt=0;
	unsigned int n=0;
	
	if(bitbangMode)
	{
		for(cnt=0;cnt<12;cnt++)
		{
			n<<=1;
			DCLK.setHigh(); 
			DCLK.setLow(); 	
			if(DOUT.isHigh()) 
				n++;
		}
	}	
	else
	{
		
	}	
	return(n);
}

void XPT2046::write(uint8_t n)
{
	unsigned char cnt=0;
	
	if(bitbangMode)
	{
		DCLK.setLow(); 	
		for(cnt=0;cnt<8;cnt++)
		{
			if(n&0x80)
				DIN.setHigh();
			else
				DIN.setLow();
			
			n<<=1;
			
			DCLK.setLow(); 	            
			DCLK.setHigh(); 
		}
	}
	else
	{
		
	}
}

void XPT2046::printRawCoordinates()
{
	printf("X: %d      Y: %d\n", rawX, rawY);
}

void XPT2046::printCoordinates()
{
	printf("X: %d      Y: %d\n", X, Y);
}

void XPT2046::test()
{
	getRawCoordinates();
	printRawCoordinates();
}

/*void XP2046::touchCalibration(ILI9341* _lcd)
{
	
}
*/