#include <tchar.h>
#include <iostream>
using namespace std;

class CMyUSB {
   public:
    virtual int getUSBVersion() = 0;
    virtual int getTransferRate() = 0;
};

class CMySerial {
   public:
    virtual int getSignal() = 0;
    virtual int getRate() = 0;
};

class CMyDevice : public CMyUSB, public CMySerial {
   public:
    //USB 인터페이스
    virtual int getUSBVersion() { return 0; }
    virtual int getTransferRate() { return 0; }

    //시리얼 인터페이스
    virtual int getSignal() { return 0; }
    virtual int getRate() { return 0; }
};

int _tmain(int argc, _TCHAR* argv[]) {
    CMyDevice dev;

    return 0;
}