// (c) 2017 Outernet Inc

#ifndef _ILI9341_IMAGES_H_
#define _ILI9341_IMAGES_H_

const unsigned char gImage_startBtn[812] = { /* 0X00,0X01,0X70,0X00,0X3A,0X00, */
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X01,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X1F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X7F,0XF8,0X3F,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X07,0XFC,0X7F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFE,
0X7E,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7E,0XFC,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,
0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X1F,
0XFF,0XF3,0XFF,0XFE,0XFF,0XFF,0X9F,0XFF,0XF3,0XFF,0XFE,0X1F,0XF8,0X1F,0XFF,0XF3,
0XFF,0XFE,0XFF,0XFF,0X9F,0XFF,0XF3,0XFF,0XFE,0X1F,0XF8,0X1F,0XFF,0XF3,0XFF,0XFE,
0XFF,0XFF,0X9F,0XFF,0XF3,0XFF,0XFE,0X1F,0XF8,0X1F,0XFF,0XF3,0XFF,0XFE,0XFF,0XFF,
0X9F,0XFF,0XF3,0XFF,0XFE,0X1F,0XF8,0X1F,0XFF,0XF3,0XFF,0XFE,0XFF,0XFF,0X9F,0XFF,
0XF3,0XFF,0XFE,0X1F,0XF8,0X1F,0XFF,0XF3,0XFF,0XFE,0XFE,0X3F,0X9F,0XFF,0XF3,0XFF,
0XFE,0X1F,0XF8,0X1F,0XC0,0X00,0X1F,0XC0,0XFE,0X3F,0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,
0XF8,0X1F,0XC0,0X00,0X1F,0XC0,0XFE,0X3F,0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,
0XFF,0XF0,0X1F,0XC0,0XFE,0X3F,0X9F,0XFF,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,
0X1F,0XC0,0XFE,0X3F,0X9F,0XFF,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,
0XFE,0X3F,0X9F,0XFF,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,0XFF,0XFF,
0X9F,0XFF,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,0XFF,0XFF,0X9F,0XFF,
0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,0XFF,0XFF,0X9F,0XFF,0XC0,0X1F,
0XC0,0X1F,0XF8,0X00,0X07,0XF0,0X1F,0XC0,0XFF,0XFF,0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,
0XF8,0X00,0X07,0XF0,0X1F,0XC0,0XFF,0XFF,0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,
0XFF,0XF0,0X1F,0XC0,0XFE,0X3F,0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,
0X1F,0XC0,0XFE,0X3F,0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,
0XFE,0X3F,0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,0XFE,0X3F,
0X9F,0XC7,0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,0XFE,0X3F,0X9F,0XC7,
0XF0,0X1F,0XC0,0X1F,0XF8,0X1F,0XFF,0XF0,0X1F,0XC0,0XFE,0X3F,0X9F,0XC7,0XF0,0X1F,
0XC0,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,
0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X1F,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,
0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFC,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0X7E,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFE,0X7F,0X80,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFE,0X3F,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0F,0XFC,0X1F,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0F,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X0F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,};








const unsigned char gImage_outernet_logo[3200] = { /* 0X00,0X01,0XFD,0X00,0X64,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XFF,0X80,0X00,0XFF,0X80,0X00,0X3F,0XEC,0X00,0X00,0X01,0X80,0X00,0X0C,
0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X07,0XFC,0X00,0X00,0X1B,0X00,0X00,0X00,0X60,
0X00,0X0F,0XFF,0XF0,0X00,0X7F,0X00,0X00,0X1F,0XCF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFC,
0X7F,0XFF,0XC0,0X00,0X06,0X00,0X00,0X01,0XF8,0X3F,0XFF,0XFB,0XFF,0XFF,0XFF,0XE0,
0X00,0X3F,0XFF,0XFC,0X00,0X3E,0X00,0X00,0X1F,0X87,0XFF,0XFF,0XFF,0X8F,0XFF,0XF8,
0X3F,0X07,0XF0,0X00,0X07,0X00,0X00,0X01,0XF8,0X1F,0XFF,0XF1,0XFF,0XFF,0XFF,0XE0,
0X00,0X7E,0X7F,0X3E,0X00,0X3E,0X00,0X00,0X0F,0X87,0X00,0XF8,0X03,0X07,0XC0,0X38,
0X3E,0X01,0XF8,0X00,0X07,0X80,0X00,0X01,0XF0,0X0F,0X80,0X71,0XC0,0X3E,0X00,0XC0,
0X00,0XF8,0X7F,0X1F,0X00,0X3E,0X00,0X00,0X0F,0X86,0X00,0XF8,0X03,0X07,0XC0,0X18,
0X3E,0X01,0XF8,0X00,0X07,0XC0,0X00,0X01,0XF0,0X0F,0X80,0X31,0X80,0X3E,0X00,0XC0,
0X01,0XF0,0X7F,0X07,0XC0,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0XFC,0X00,0X07,0XE0,0X00,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X03,0XE0,0X7F,0X03,0XC0,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XF0,0X00,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X07,0XC0,0X7F,0X01,0XE0,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XF8,0X00,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X0F,0XC0,0X7F,0X01,0XF0,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XFC,0X00,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X0F,0X80,0X7F,0X00,0XF8,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XFE,0X00,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X80,0X7F,0X00,0XF8,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XDF,0X00,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X00,0X7F,0X00,0X7C,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XCF,0X80,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X00,0X7F,0X00,0X7C,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XC7,0XC0,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X00,0X7F,0X00,0X7C,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X78,0X00,0X07,0XC3,0XE0,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X7E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X78,0X00,0X07,0XC1,0XF0,0X01,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X7E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X18,
0X3E,0X00,0XF0,0X00,0X07,0XC0,0XF8,0X01,0XF0,0X0F,0X80,0X30,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X3E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XFF,0XF8,
0X3E,0X00,0XF0,0X00,0X07,0XC0,0X7C,0X01,0XF0,0X0F,0XFF,0XF0,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X3E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XFF,0XF8,
0X3E,0X03,0XE0,0X00,0X07,0XC0,0X3E,0X01,0XF0,0X0F,0XFF,0XF0,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X3E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X78,
0X3F,0XFF,0XC0,0X00,0X07,0XC0,0X1F,0X01,0XF0,0X0F,0X80,0XF0,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X3E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X30,
0X3F,0XFF,0X80,0X00,0X07,0XC0,0X0F,0X81,0XF0,0X0F,0X80,0X60,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X3E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X10,
0X3F,0XFF,0XC0,0X00,0X07,0XC0,0X07,0XC1,0XF0,0X0F,0X80,0X20,0X00,0X3E,0X00,0X00,
0X3F,0X00,0X7F,0X00,0X3E,0X3E,0X00,0X00,0X0F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X1F,0XE0,0X00,0X07,0XC0,0X03,0XE1,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X00,0X7F,0X00,0X7E,0X3E,0X00,0X00,0X1F,0X80,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X07,0XF0,0X00,0X07,0XC0,0X01,0XF1,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X00,0X7F,0X00,0X7C,0X3E,0X00,0X00,0X1F,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X01,0XF0,0X00,0X07,0XC0,0X00,0XF1,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X00,0X7F,0X00,0X7C,0X1F,0X00,0X00,0X1F,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0XF8,0X00,0X07,0XC0,0X00,0X79,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X1F,0X80,0X7F,0X00,0X7C,0X1F,0X00,0X00,0X1F,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0XFC,0X00,0X07,0XC0,0X00,0X7D,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X0F,0X80,0X7F,0X00,0XF8,0X1F,0X00,0X00,0X1F,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X7C,0X00,0X07,0XC0,0X00,0X3F,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X0F,0XC0,0X7F,0X00,0XF8,0X0F,0X00,0X00,0X1E,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X3E,0X00,0X07,0XC0,0X00,0X1F,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X07,0XC0,0X7F,0X01,0XF0,0X0F,0X80,0X00,0X3E,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X3F,0X00,0X07,0XC0,0X00,0X0F,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X03,0XE0,0X7F,0X01,0XE0,0X07,0X80,0X00,0X3C,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X1F,0X80,0X07,0XC0,0X00,0X07,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X01,0XF0,0X7F,0X03,0XC0,0X07,0XC0,0X00,0X78,0X00,0X00,0XF8,0X00,0X07,0XC0,0X00,
0X3E,0X00,0X0F,0XC0,0X07,0XC0,0X00,0X03,0XF0,0X0F,0X80,0X00,0X00,0X3E,0X00,0X00,
0X00,0XF8,0X7F,0X07,0X80,0X03,0XE0,0X00,0XF0,0X00,0X00,0XF8,0X00,0X07,0XC0,0X04,
0X3E,0X00,0X07,0XE0,0X07,0XC0,0X00,0X01,0XF0,0X0F,0X80,0X08,0X00,0X3E,0X00,0X00,
0X00,0X7E,0X7F,0X1F,0X00,0X01,0XF0,0X01,0XE0,0X00,0X00,0XF8,0X00,0X07,0XE0,0X0C,
0X3E,0X00,0X03,0XF0,0X07,0XC0,0X00,0X00,0XF0,0X0F,0XC0,0X18,0X00,0X3E,0X00,0X00,
0X00,0X1F,0XFF,0XFC,0X00,0X00,0X7C,0X03,0XC0,0X00,0X00,0XF8,0X00,0X07,0XF0,0X1C,
0X3E,0X00,0X01,0XF8,0X07,0XC0,0X00,0X00,0X70,0X0F,0XE0,0X38,0X00,0X3E,0X00,0X00,
0X00,0X07,0XFF,0XF0,0X00,0X00,0X3F,0XFF,0X80,0X00,0X01,0XFC,0X00,0X0F,0XFE,0XFC,
0X7F,0X00,0X00,0XFF,0X0F,0XE0,0X00,0X00,0X30,0X1F,0XFD,0XF8,0X00,0X7F,0X00,0X00,
0X00,0X00,0XFF,0XC0,0X00,0X00,0X07,0XFC,0X00,0X00,0X03,0XFE,0X00,0X1F,0XFF,0XFC,
0XFF,0X80,0X00,0X3F,0X1F,0XF0,0X00,0X00,0X00,0X3F,0XFF,0XF8,0X00,0XFF,0X80,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0XE0,0X00,0XFF,0XFF,0X9C,0X1F,0XFF,0XFE,0X0F,0XFF,0XC1,
0XC0,0X06,0X00,0X33,0X80,0X18,0X3F,0XC0,0X00,0X07,0XE3,0XF0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X06,0X00,0XC0,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC1,0X80,
0XCC,0X06,0X60,0X33,0X30,0X18,0XC1,0X80,0X0C,0X06,0X33,0X18,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0C,0X00,0XE0,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC1,0X80,
0XCE,0X06,0X70,0X33,0X38,0X19,0X80,0X00,0X0E,0X06,0X33,0X18,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X06,0X01,0XE0,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC1,0X80,
0XCF,0X06,0X78,0X33,0X3C,0X19,0X80,0X00,0X1E,0X06,0X33,0X18,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X07,0X01,0XE0,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC1,0X80,
0XCF,0X86,0X7C,0X33,0X3E,0X1B,0X00,0X00,0X1E,0X06,0X33,0X18,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0X81,0X30,0X0C,0X1F,0X9C,0X18,0X30,0X7E,0X00,0XC1,0X80,
0XCC,0XC6,0X66,0X33,0X33,0X1B,0X00,0X00,0X13,0X06,0X23,0X10,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0XC3,0X30,0X0C,0X1C,0X9C,0X18,0X30,0X72,0X00,0XC1,0X80,
0XCC,0X66,0X63,0X33,0X31,0X9B,0X01,0XC0,0X33,0X07,0XC3,0XE0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0XE3,0X38,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC1,0X80,
0XCC,0X3E,0X61,0XF3,0X30,0XFB,0X81,0X80,0X33,0X86,0X03,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X62,0X18,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC1,0XC1,
0XCC,0X1E,0X60,0XF3,0X30,0X79,0X81,0X80,0X21,0X86,0X03,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X66,0X1C,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC0,0XC1,
0X8C,0X0E,0X60,0X73,0X30,0X39,0XC1,0X80,0X61,0XC6,0X03,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0C,0XC6,0X1C,0X0C,0X1C,0X1C,0X18,0X30,0X70,0X00,0XC0,0XE1,
0X0C,0X06,0X60,0X33,0X30,0X18,0XE1,0X80,0X61,0XC6,0X03,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X07,0X8E,0X0E,0X0E,0X1F,0XDF,0XDC,0X38,0X7F,0X00,0XE0,0X3E,
0X0E,0X02,0X70,0X13,0XB8,0X08,0X3F,0X80,0XE0,0XE7,0X03,0X80,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XE0,0XE7,0XE7,0XE0,0X3E,0XE1,0XF0,
0X00,0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XE0,0XE7,0X06,0X30,0X60,0XC7,0X7C,
0X60,0X30,0X07,0XE0,0X01,0XF8,0X3C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0XC7,0X06,0X30,0XC0,0XCC,0X66,
0X70,0X30,0X1E,0X70,0X07,0X9C,0X78,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0XC7,0X06,0X30,0X60,0XCC,0X66,
0X78,0X30,0X1C,0X38,0X07,0X0E,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X31,0X87,0X06,0X30,0X70,0XDC,0X67,
0X7C,0X30,0X18,0X18,0X06,0X06,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X31,0X87,0XE6,0X20,0X38,0XF8,0X63,
0X66,0X30,0X38,0X1C,0X0E,0X07,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1B,0X07,0X27,0XE0,0X1C,0XF8,0X63,
0X63,0X30,0X38,0X1C,0X0E,0X07,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0X07,0X06,0X60,0X0E,0XDC,0X63,
0X61,0XF0,0X38,0X1C,0X0E,0X07,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0X07,0X06,0X30,0X06,0XCC,0X67,
0X60,0XF0,0X18,0X18,0X06,0X06,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0E,0X07,0X06,0X18,0X06,0XCC,0X66,
0X60,0X70,0X18,0X18,0X06,0X06,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0E,0X07,0X06,0X1C,0XCC,0XC7,0X7C,
0X60,0X30,0X1E,0X71,0XC7,0X9C,0X1C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X07,0XF7,0X0F,0XF8,0XE1,0XF0,
0X70,0X10,0X0F,0XF1,0XC3,0XFC,0X7E,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};


#endif