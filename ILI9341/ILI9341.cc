#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <stdint.h>
#include <math.h>
#include <sys/ioctl.h>
#include <linux/spi/spidev.h>

#include "ILI9341.h"

using namespace std;

/*******************************************************************
* NAME :            ILI9341::ILI9341(const char* LCDSpiPort)
*
* DESCRIPTION :     ILI9341 Constructor
*
* INPUTS :
*       PARAMETERS:
*           const char* LCDSpiPort: The SPI port to communicate with ILI9341. Usually it looks like "/dev/spidev32765.0" which can be found in /dev/ folder
*			There are another pins need to be set: DC, RST, BL(BackLight) that can be modified in ILI9341_defs.h
*
*/

ILI9341::ILI9341(const char* LCDSpiPort):
Adafruit_GFX(ILI9341_TFTWIDTH,ILI9341_TFTHEIGHT),
_spi(LCDSpiPort, LCD_SPI_MODE, LCD_SPI_DATA_BITS, LCD_SPI_SPEED, 0),
DC(LCD_DC, "out", "rising", true),
RST(LCD_RST, "out", "rising", true),
BL(LCD_BL, "out", "rising", true)
{
	
}




/*******************************************************************
* NAME :            void ILI9341::reset ()
*
* DESCRIPTION :     Reset the LCD by setting the values of RST
*
*/
void ILI9341::reset ()
{
    RST.setHigh();
    fsleep (0.005);
    RST.setLow();
    fsleep (0.02);
    RST.setHigh();
    fsleep (0.15);
}


/*******************************************************************
* NAME :            void ILI9341::init ()
*
* DESCRIPTION :     Init the beginning configuration for ILI9341
*
*/
void ILI9341::init ()
{
	reset ();
	
	setBacklight(1);
	
	
	writeCMD(0x11);
	fsleep (0.120);
	
	writeCMD(0xCF);
	writeU8(0x00);
	writeU8(0XC3);
	writeU8(0X30);
	
	writeCMD(0xED);
	writeU8(0x64);
	writeU8(0x03);
	writeU8(0X12);
	writeU8(0X81);
	
	writeCMD(0xE8);
	writeU8(0x85);
	writeU8(0x10);
	writeU8(0x79);
	
	writeCMD(0xCB);
	writeU8(0x39);
	writeU8(0x2C);
	writeU8(0x00);
	writeU8(0x34);
	writeU8(0x02);
	writeCMD(0xF7);
	writeU8(0x20);
	writeCMD(0xEA);
	writeU8(0x00);
	writeU8(0x00);
	writeCMD(ILI9341_PWCTR1);	// Power control 
	writeU8(0x23);					// VRH[5:0] 
	writeCMD(ILI9341_PWCTR2);	// Power control 
	writeU8(0x10);					// SAP[2:0];BT[3:0] 
	writeCMD(ILI9341_VMCTR1);	// VCM control 
	writeU8(0x3e);
	writeU8(0x28);
	writeCMD(ILI9341_VMCTR2);	// VCM control2 
	writeU8(0x86);					// --
	writeCMD(ILI9341_MADCTL);	//  Memory Access Control 
	writeU8(0x48);
	writeCMD(ILI9341_PIXFMT);
	writeU8(0x55);
	writeCMD(ILI9341_FRMCTR1);
	writeU8(0x00);
	writeU8(0x18);
	writeCMD(ILI9341_DFUNCTR);	//  Display Function Control 
	writeU8(0x08);
	writeU8(0x82);
	writeU8(0x27);
	writeCMD(0xF2);				//  3Gamma Function Disable 
	writeU8(0x00);
	writeCMD(ILI9341_GAMMASET);	// Gamma curve selected 
	writeU8(0x01);
	writeCMD(ILI9341_GMCTRP1);	// Set Gamma 
	writeU8(0x0F);
	writeU8(0x31);
	writeU8(0x2B);
	writeU8(0x0C);
	writeU8(0x0E);
	writeU8(0x08);
	writeU8(0x4E);
	writeU8(0xF1);
	writeU8(0x37);
	writeU8(0x07);
	writeU8(0x10);
	writeU8(0x03);
	writeU8(0x0E);
	writeU8(0x09);
	writeU8(0x00);
	writeCMD(ILI9341_GMCTRN1);	// Set Gamma 
	writeU8(0x00);
	writeU8(0x0E);
	writeU8(0x14);
	writeU8(0x03);
	writeU8(0x11);
	writeU8(0x07);
	writeU8(0x31);
	writeU8(0xC1);
	writeU8(0x48);
	writeU8(0x08);
	writeU8(0x0F);
	writeU8(0x0C);
	writeU8(0x31);
	writeU8(0x36);
	writeU8(0x0F);
	writeCMD(ILI9341_SLPOUT);	// Exit Sleep*/
	fsleep (0.120);
	writeCMD(ILI9341_DISPON);	// Display on 
	fsleep (0.120);
}




/*******************************************************************
* NAME :           	void ILI9341::writeCMD
*
* DESCRIPTION :    	write a 8-bit command to a register in ILI9341
*
* INPUTS :
*       PARAMETERS:
*           color can be found in ILI9341_defs.h
*
*/
void ILI9341::writeCMD(uint8_t n)
{
	DC.setLow();
	_spi.transfer(1, &n);
}

/*******************************************************************
* NAME :           	void ILI9341::writeU8
*
* DESCRIPTION :    	write a 8-bit data to a register in ILI9341
*
* INPUTS :
*       PARAMETERS:
*           color can be found in ILI9341_defs.h
*
*/
void ILI9341::writeU8(uint8_t n)
{
	DC.setHigh();
	_spi.transfer(1, &n);
}

/*******************************************************************
* NAME :           	void ILI9341::writeU16
*
* DESCRIPTION :    	write a 16-bit data to a register in ILI9341
*
* INPUTS :
*       PARAMETERS:
*           color can be found in ILI9341_defs.h
*
*/
void ILI9341::writeU16(uint16_t data)
{
	unsigned char arr[2];
	arr[0] = data >> 8;
	arr[1] = data & 255;
	
	DC.setHigh();
	_spi.transfer(2, arr);
}


/*******************************************************************
* NAME :           	void ILI9341::setBacklight
*
* DESCRIPTION :    	Turn on/off the backlight of ILI9341
*
* INPUTS :
*       PARAMETERS:
*           color can be found in ILI9341_defs.h
*
*/
void ILI9341::setBacklight(bool state)
{
	if(state==true)
		BL.setHigh();
	else
		BL.setLow();
}