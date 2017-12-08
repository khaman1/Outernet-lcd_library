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

void ILI9341::testFillScreen() {
    fillScreen(ILI9341_BLACK);
    fillScreen(ILI9341_RED);
    fillScreen(ILI9341_GREEN);
    fillScreen(ILI9341_BLUE);
    fillScreen(ILI9341_BLACK);
	
}




void ILI9341::testText() {
	fillScreen(ILI9341_BLACK);

	setCursor(0, 0);
	setTextColor(ILI9341_WHITE);  setTextSize(1);
	print("Hello World!");
	setTextColor(ILI9341_YELLOW); setTextSize(2);
	print(1234.56);
	setTextColor(ILI9341_RED);    setTextSize(3);
	print(0xDEADBEEF, 16);
	println();
	setTextColor(ILI9341_GREEN);
	setTextSize(5);
	print("Groop");
	setTextSize(2);
	print("I implore thee,");
	setTextSize(1);
	print("my foonting turlingdromes.");
	print("And hooptiously drangle me");
	print("with crinkly bindlewurdles,");
	print("Or I will rend thee");
	print("in the gobberwarts");
	print("with my blurglecruncheon,");
	print("see if I don't!");

}

void ILI9341::testLines(uint16_t color) {
	unsigned long tt;
	int x1, y1, x2, y2,
		w = width(),
		h = height();

	fillScreen(ILI9341_BLACK);

	x1 = y1 = 0;
	y2    = h - 1;

	for(x2=0; x2<w; x2+=6) drawLine(x1, y1, x2, y2, color);
	x2    = w - 1;
	for(y2=0; y2<h; y2+=6) drawLine(x1, y1, x2, y2, color);
	tt     = 1; // fillScreen doesn't count against timing

	fillScreen(ILI9341_BLACK);

	x1    = w - 1;
	y1    = 0;
	y2    = h - 1;

	for(x2=0; x2<w; x2+=6) drawLine(x1, y1, x2, y2, color);
	x2    = 0;
	for(y2=0; y2<h; y2+=6) drawLine(x1, y1, x2, y2, color);
	tt    += 1;

	fillScreen(ILI9341_BLACK);

	x1    = 0;
	y1    = h - 1;
	y2    = 0;

	for(x2=0; x2<w; x2+=6) drawLine(x1, y1, x2, y2, color);
	x2    = w - 1;
	for(y2=0; y2<h; y2+=6) drawLine(x1, y1, x2, y2, color);
	tt    += 1;

	fillScreen(ILI9341_BLACK);

	x1    = w - 1;
	y1    = h - 1;
	y2    = 0;

	for(x2=0; x2<w; x2+=6) drawLine(x1, y1, x2, y2, color);
	x2    = 0;
	for(y2=0; y2<h; y2+=6) drawLine(x1, y1, x2, y2, color);


}

void ILI9341::testFastLines(uint16_t color1, uint16_t color2) {
	int  x, y, w = width(), h = height();

	fillScreen(ILI9341_BLACK);
	for(y=0; y<h; y+=5) drawFastHLine(0, y, w, color1);
	for(x=0; x<w; x+=5) drawFastVLine(x, 0, h, color2);


}

void ILI9341::testRects(uint16_t color) {
	int n, i, i2,
		cx = width()  / 2,
		cy = height() / 2;

	fillScreen(ILI9341_BLACK);
	n     = min(width(), height());

	for(i=2; i<n; i+=6) {
		i2 = i / 2;
		drawRect(cx-i2, cy-i2, i, i, color);
	}
}

void ILI9341::testFilledRects(uint16_t color1, uint16_t color2) {
	unsigned long tt = 0;
	int           n, i, i2,
				cx = width()  / 2 - 1,
				cy = height() / 2 - 1;

	fillScreen(ILI9341_BLACK);
	n = min(width(), height());

	for(i=n; i>0; i-=6) {
		i2    = i / 2;
		fillRect(cx-i2, cy-i2, i, i, color1);
		tt    += 1;
		// Outlines are not included in timing results
		drawRect(cx-i2, cy-i2, i, i, color2);
	}
}

void ILI9341::testFilledCircles(uint8_t radius, uint16_t color) {
	int x, y, w = width(), h = height(), r2 = radius * 2;

	fillScreen(ILI9341_BLACK);

	for(x=radius; x<w; x+=r2)
		for(y=radius; y<h; y+=r2)
			fillCircle(x, y, radius, color);
}

void ILI9341::testCircles(uint8_t radius, uint16_t color) {
	int           x, y, r2 = radius * 2,
				w = width()  + radius,
				h = height() + radius;

	// Screen is not cleared for this one -- this is
	// intentional and does not affect the reported time.

	for(x=0; x<w; x+=r2)
		for(y=0; y<h; y+=r2)
			drawCircle(x, y, radius, color);

}

void ILI9341::testTriangles() {
	int           n, i, cx = width()  / 2 - 1,
					  cy = height() / 2 - 1;

	fillScreen(ILI9341_BLACK);
	n     = min(cx, cy);

	for(i=0; i<n; i+=5) 
		drawTriangle(
		  cx    , cy - i, // peak
		  cx - i, cy + i, // bottom left
		  cx + i, cy + i, // bottom right
		  color565(0, 0, i));
}

	
	
void ILI9341::testFilledTriangles() {
	int i, cx = width()  / 2 - 1,
		cy = height() / 2 - 1;

	fillScreen(ILI9341_BLACK);

	for(i=min(cx,cy); i>10; i-=5) {
		fillTriangle(cx, cy - i, cx - i, cy + i, cx + i, cy + i,
		  color565(0, i, i));

		drawTriangle(cx, cy - i, cx - i, cy + i, cx + i, cy + i,
		  color565(i, i, 0));
	}
}

void ILI9341::testRoundRects() {
	int           w, i, i2,
				cx = width()  / 2 - 1,
				cy = height() / 2 - 1;

	fillScreen(ILI9341_BLACK);
	w     = min(width(), height());
	
	for(i=0; i<w; i+=6) {
		i2 = i / 2;
		drawRoundRect(cx-i2, cy-i2, i, i, i/8, color565(i, 0, 0));
	}
}



void ILI9341::testFilledRoundRects() {
	int i, i2,
		cx = width()  / 2 - 1,
		cy = height() / 2 - 1;

	fillScreen(ILI9341_BLACK);

	for(i=min(width(), height()); i>20; i-=6) {
		i2 = i / 2;
		fillRoundRect(cx-i2, cy-i2, i, i, i/8, color565(0, i, 0));
	}
}


void ILI9341::test1() {
	/* testFillScreen();
	testText();
	testLines(ILI9341_CYAN);
	testFastLines(ILI9341_RED, ILI9341_BLUE);
	testRects(ILI9341_GREEN);
	testFilledRects(ILI9341_YELLOW, ILI9341_MAGENTA);
	testFilledCircles(10, ILI9341_MAGENTA); */
	testCircles(10, ILI9341_WHITE);
	/* testTriangles();
	testRoundRects();
	testFilledRoundRects(); */
}

void ILI9341::test2(){
	unsigned int* touchdata;
	
	XPT2046 touch("/dev/spidev32764.0",1);
	
	fillScreen(ILI9341_BLACK);
	setRotation(1);
	drawBitmap(35,15,gImage_outernet_logo,253,100, ILI9341_WHITE); 	// Draw Outernet logo
	drawBitmap(104,140,gImage_startBtn,112,58, ILI9341_RED);		// Draw Start button
	setTextColor(ILI9341_WHITE);  setTextSize(2);
	
	
	// Read touch data and display
	touchdata = touch.getCoordinates();
		
	while(1)
	{
		touchdata = touch.getCoordinates();
		
		setCursor(0, 220);
		print("X: ");
		fillRect(18,220,55,14,ILI9341_BLACK); // Clear the coordinates area
		print(touchdata[0]);
		
		fillRect(168,220,55,14,ILI9341_BLACK); // Clear the coordinates area
		setCursor(150, 220);
		print("Y:");
		print(touchdata[1]);
	}
}