LDLIBS := -lm
CPPFLAGS := -std=c++11 -Wall -Wextra -Ofast -w

ILI9341_FILES  = ILI9341/ILI9341.cc ILI9341/ILI9341_funcs.cc ILI9341/Adafruit_GFX.cc ILI9341/ILI9341_tests.cc 
XPT2046_FILES  = XPT2046/XPT2046.cc

ALL: main
.PHONY: all

clean:
	rm main

main: main.cc spilib/spi.cc gpiolib/gpio.cc $(ILI9341_FILES) $(XPT2046_FILES) utils/utils.cc 