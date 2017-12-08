#include <stdio.h>
#include <string>
#include "main.h"


int main (void)
{		
	ILI9341 lcd("/dev/spidev32765.0");
	
	lcd.init();
	lcd.test2();
}