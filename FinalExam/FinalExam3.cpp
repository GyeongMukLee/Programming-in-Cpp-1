// FinalExam3.cpp
//

#include <iostream>
using namespace std;

class CAnimal {
   public:
    virtual char* GetSound() = 0;
};

class CPig : public CAnimal {
   public:
    virtual char* GetSound() {
        return "꿀꿀";
    }
};

class CDog : public CAnimal {
   public:
    virtual char* GetSound() {
        return "멍멍";
    }
};

void PrintSound(CAnimal* p) {
    cout << p->GetSound() << endl;
}

int main(void) {
    CPig* p1 = new CPig;
    PrintSound(p1);
    CDog* d1 = new CDog;
    PrintSound(d1);

    return 0;
}  //end of main()
