// FinalExam2.cpp
//

#include <iostream>
using namespace std;

class CRadio {
   public:
    virtual void TurnOn() = 0;
    virtual void VolumeUp() = 0;
    virtual void ChangeChannel() = 0;
};

class CFixRadio : public CRadio {
   public:
    virtual void TurnOn() {}
    virtual void VolumeUp() {}
    virtual void ChangeChannel() {}
};

int main(void) {
    CFixRadio sr;
    return 0;
}  //end of main()
