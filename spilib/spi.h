// (c) 2017 Outernet Inc

#include <stdint.h>

class SPIdev {

public:

    SPIdev(const char *device, uint8_t mode, uint8_t bits, uint32_t speed, uint16_t delay);

    ~SPIdev();

    bool isValid();

    uint8_t transfer(uint8_t len, uint8_t *data);

private:
    int m_dev;
    uint8_t m_mode;
    uint8_t m_bits;
    uint32_t m_speed;
    uint16_t m_delay;
    bool m_isValid;

};
