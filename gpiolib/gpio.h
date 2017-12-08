#ifndef _GPIOLIB_
#define _GPIOLIB_

#include <string>
#include <stdint.h>
#include <fstream>

using namespace std;

class GPIOpin {

public:

     GPIOpin(int p, string direction, string edge, bool force);

     GPIOpin(int p);

     GPIOpin(int p, bool force);

     ~GPIOpin();

     void setDirection(string direction);

     void setEdge(string edge);

     string getDirection();

     string getEdge();

     bool isHigh();

     void setLow();

     void setHigh();

     int8_t awaitSync(int32_t timeout, string edge);

     int8_t awaitSync(int32_t timeout);

private:
     uint32_t pin;
     fstream direction_fs;
     fstream edge_fs;
     fstream value_fs;

     int8_t awaitSyncInterrupt(int32_t);
     int8_t awaitSyncPoll(int32_t, string);
};


#endif

