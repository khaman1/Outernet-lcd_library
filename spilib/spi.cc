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
#include "spi.h"

SPIdev::SPIdev(const char *device, uint8_t mode, uint8_t bits, uint32_t speed, uint16_t delay) {
        int ret;

	m_mode = mode;
        m_bits = bits;
        m_speed = speed;
        m_delay = delay;
        m_isValid = false;

        // open device to r/w
	m_dev = open(device, O_RDWR);
        if(m_dev < 0) {
            perror("can't open device");
	    return;
        }

        // set mode
        ret = ioctl(m_dev, SPI_IOC_WR_MODE, &m_mode);
        if (ret == -1) {
            perror("can't set spi mode");
            return;
        }

	// set bits
        ret = ioctl(m_dev, SPI_IOC_WR_BITS_PER_WORD, &m_bits);
        if (ret == -1) {
            perror("can't set bits per word");
            return;
        }

	// set speed
        ret = ioctl(m_dev, SPI_IOC_WR_MAX_SPEED_HZ, &m_speed);
        if (ret == -1) {
            perror("can't set max speed hz");
            return;
        }

	m_isValid = true;

}

SPIdev::~SPIdev() {
	m_isValid = false;
        if (m_dev) close(m_dev);
}

bool SPIdev::isValid() {
	return m_isValid;
}

uint8_t SPIdev::transfer(uint8_t len, uint8_t *data) {
        int ret;

        struct spi_ioc_transfer tr = {
            .tx_buf = (unsigned long)data,
            .rx_buf = (unsigned long)data,
            .len = len,
            .speed_hz = m_speed,
            .delay_usecs = m_delay,
            .bits_per_word = m_bits
        };


        ret = ioctl(m_dev, SPI_IOC_MESSAGE(1), &tr);

        if (ret < 1) {
            perror("can't send spi message");
	    return ret;
        }

	return len;
}

