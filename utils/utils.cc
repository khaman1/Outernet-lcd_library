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
#include <time.h>
#include <stdint.h>
#include <math.h>
#include "utils.h"

/*******************************************************************
* NAME :            void fsleep (double seconds)
*
* DESCRIPTION :     Delay the execution in seconds
*
*/
void fsleep (double seconds)
{
    struct timespec req =
        {floor (seconds), floor (1000000.0 * (seconds - floor (seconds)))};
    
    nanosleep (&req, NULL);
}


void _nop(int times)
{
	int i;
	for(i=0;i<times;i++)
	{
		asm("nop");
	}
}