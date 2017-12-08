// spi transaction command line tool
//
// (c) 2017 Abhishek Goyal
// spi_trx <device> <hex of data to send and receive in a single transaction>
//	outputs hex of data received

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "spi.h"

#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

static void pabort(const char *s)
{
    perror(s);
    abort();
}

uint8_t hex2int(char h) {
	if (('0' <= h) && ('9' >= h))
		return (h-'0');
	else if (('A' <= h) && ('F' >= h))
		return (h-'A' + 10);
	else if (('a' <= h) && ('f' >= h))
		return (h-'a' + 10);
	else {
		fprintf(stdout, "invalid hex char %c", h);
		exit(1);
	}
}

int main(int argc, char *argv[])
{
    int len;
    const char *device = "/dev/spidev32765.0";
    uint8_t mode = 0;
    uint8_t bits = 8;
    uint32_t speed = 20000000;
    uint16_t delay = 0;

    if (argc<3) {
	fprintf(stdout, "Usage: %s <device> <hex of data to send and receive in a single transaction>\n",argv[0]);
	exit(1);
    }

    device = argv[1];
    len = strlen(argv[2]);

    if (len%2)
	pabort("length of data in hex must be even");

    len = len/2;

    uint8_t *data = (uint8_t *) malloc(len);

    for(int i = 0; i < len; i++) {
	data[i]=hex2int(argv[2][i*2]) * 16 + hex2int(argv[2][i*2+1]);
    }

    SPIdev spi(device, mode, bits, speed, delay);

    if (!spi.isValid())
        pabort("spi failed to init");

    spi.transfer(len, data);

    for (int i = 0; i < len; i++) {
        printf("%.2X ", data[i]);
    }

    printf("\n");

    return 0;
}

