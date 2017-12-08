# lcd_library

Connect the ILI9341 display to Outernet Dreamcatcher v2.03 


Here is the information of the display:
- Mainpage: http://www.buydisplay.com/default/qvga-2-4-inch-tft-lcd-touch-shield-320x240-serial-module-display-ili9341
- Datasheet: https://www.buydisplay.com/download/manual/ER-TFTM024-3_Datasheet.pdf
- Interface: http://www.buydisplay.com/download/interfacing/ER-TFTM024-3_Interfacing.pdf


------------------ TESTING ------------------
---------------------------------------------
We can run the function test2() to test out the screen and the touch.


LCD pins						DC pins
1								GND
2								5V
21 (RST)						PE11
23 (LCD_CS)						SPI1 CS0
24 (LCD_CLK)					SPI1 CLK
25 (LCD_DC)						PE10
27 (LCD_MOSI/DIN)				SPI1 MOSI
28 (LCD_MISO/DOUT)				SPI1 MISO
29 (LCD_BL)						PE9
30 (TP_CS)						PC3
31 (TP_PEN)						PG10
32 (TP_SDO)						PC1
33 (TP_SCL)						PC2
34 (TP_SDI)						PC0

