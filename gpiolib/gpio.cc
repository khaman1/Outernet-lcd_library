#include <poll.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/signalfd.h>
#include <unistd.h>
#include <string>
#include <stdexcept>
#include <sys/types.h>
#include <sys/stat.h>
#include "gpio.h"

using namespace std;

GPIOpin::GPIOpin(int p, string direction, string edge, bool force): pin(p) {

     bool exported = false;

     if(!force)  {
	struct stat st;
        if (stat(("/sys/class/gpio/gpio" + to_string(pin) + "/value").c_str(), &st) == 0) {
		exported = true;
        }
     }

     if (force || !exported) {
	 ofstream export_fs("/sys/class/gpio/export");
         if (!export_fs) {
	    throw runtime_error("Failed to open /sys/class/gpio/export for writing");
	    return;
         }
         export_fs << pin;
         export_fs.close();
     }

     value_fs.open("/sys/class/gpio/gpio" + to_string(pin) + "/value");
     if (!value_fs.is_open()) {
	throw runtime_error("Failed to open /sys/class/gpio/gpio" + to_string(pin) + "/value for r/w");
	return;
     }

     direction_fs.open("/sys/class/gpio/gpio" + to_string(pin) + "/direction");
     if (!direction_fs.is_open()) {
	throw runtime_error("Failed to open /sys/class/gpio/gpio" + to_string(pin) + "/direction for writing");
	return;
     }

     edge_fs.open("/sys/class/gpio/gpio" + to_string(pin) + "/edge");
     // its ok for this to fail as not all gpio have "edge" support

     if (force || (GPIOpin::getDirection().compare(direction) !=0 )) GPIOpin::setDirection(direction);
     if (force || (GPIOpin::getEdge().compare(edge) !=0 )) GPIOpin::setEdge(edge);
}

GPIOpin::GPIOpin(int p): GPIOpin(p,"out", "rising", false) {
}

GPIOpin::GPIOpin(int p, bool force): GPIOpin(p,"out", "rising", force) {
}

GPIOpin::~GPIOpin() {
    if (value_fs) value_fs.close();
    if (direction_fs) direction_fs.close();
    if (edge_fs) edge_fs.close();

/* leave them exported
    ofstream unexport_ofs("/sys/class/gpio/unexport");
    if (!unexport_ofs) {
        throw "Failed to open /sys/class/gpio/unexport for writing";
	return;
    }

    unexport_ofs << pin << endl;
    unexport_ofs.close();
*/
}

void GPIOpin::setDirection(string direction) {
    direction_fs.seekp(0);
    direction_fs << direction << endl;
}

void GPIOpin::setEdge(string edge) {
    if (edge_fs.is_open()) {
        edge_fs.seekp(0);
        edge_fs << edge << endl; // "none", "rising", "falling", "both"
    }
}

string GPIOpin::getDirection() {
    string d;
    direction_fs.seekg(0);
    direction_fs >> d;
    return d;
}

string GPIOpin::getEdge() {
    if (edge_fs.is_open()) {
        string e;
        edge_fs.seekg(0);
        edge_fs >> e; // "none", "rising", "falling", "both"
        return e;
    }
    return "none";
}

bool GPIOpin::isHigh() {
    string value;

    value_fs.seekg(0);
    value_fs >> value;
    if (value == "0" )
	return false;
    else
	return true;
};

void GPIOpin::setLow() {
    value_fs.seekp(0);
    value_fs << "0" << endl;
};

void GPIOpin::setHigh() {
    value_fs.seekp(0);
    value_fs << "1" << endl;
};


int8_t GPIOpin::awaitSyncInterrupt(int32_t timeout) {
    uint8_t buf[8];

    sigset_t sigset;
    int err;
    err = sigemptyset(&sigset);
    err = sigaddset(&sigset, SIGINT);
    err = sigaddset(&sigset, SIGHUP);

    //block signals temporarily
    err = sigprocmask(SIG_BLOCK, &sigset, NULL);

    int sfd = signalfd(-1, &sigset, 0);

    struct pollfd pfd[2];

    // watch for signals
    pfd[0].fd = sfd;
    pfd[0].events = POLLIN;
    // watch for interrupt
    // this is quite ugly as poll needs fds not fstreams.
    // so we reopen the file as an fd
    string vf_path = "/sys/class/gpio/gpio" + to_string(pin) + "/value";
    int vfd = open(vf_path.c_str(),O_RDONLY);
    if (vfd < 0) {
	throw runtime_error("Failed to open /sys/class/gpio/gpio" + to_string(pin) + "/value for read-only as fd");
	return -1;
    }
    pfd[1].fd = vfd;
    pfd[1].events = POLLPRI;

    lseek(pfd[1].fd, 0, SEEK_SET);    // consume any prior interrupt
    read(pfd[1].fd, buf, sizeof buf);

    err = poll(pfd, 2, timeout);         // wait for interrupt or signal
    int8_t ret = -1;
    // check what happened: error,timeout, signal or interrupt
    if (err < 0) { // error
	ret = -1;
    } else if (err == 0) { // timeout
        ret = 1;
    } else {
        if(pfd[0].revents & POLLIN) { // signal: quit
           ret = -2;
        } else if (pfd[1].revents & POLLPRI) {
           lseek(pfd[1].fd, 0, SEEK_SET);    // consume any interrupt
           read(pfd[1].fd, buf, sizeof buf);

           ret = 0; // proper return
        }
    }

    close(sfd);
    close(vfd);
    err = sigprocmask(SIG_UNBLOCK, &sigset, NULL);
    return ret;
}

// if you change this value, ensure 1000/SLEEP_US is an integer!
#define SLEEP_US 20
#define TIMEOUTFACTOR (1000/SLEEP_US)

int8_t GPIOpin::awaitSyncPoll(int32_t timeout, string edge) {
    int8_t ret = -1;
    for(int i=0; i < (timeout*TIMEOUTFACTOR); i++) {
        if (edge.compare("rising")==0) {
            if (isHigh()) { ret = 0; break; }
        } else { // "falling"
            if (!isHigh()) { ret = 0; break; }
        }
        usleep(SLEEP_US);
    }
    if (ret!=0) ret = 1;
    return ret;
}

int8_t GPIOpin::awaitSync(int32_t timeout) {
    return awaitSync(timeout, "rising");
}

int8_t GPIOpin::awaitSync(int32_t timeout, string edge) {
    //if edge file is available, its an interrupt capable pin, we can use "poll" call to
    // avoid...umm...polling. If no edge file, its not interrupt capable, and we need to poll.
    if(edge_fs.is_open()) {
        return awaitSyncInterrupt(timeout);
    } else {
        return awaitSyncPoll(timeout, edge);
    }
};

