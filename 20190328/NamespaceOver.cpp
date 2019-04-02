#include<iostream>
#include<tchar.h>
using namespace std;

void TestFunc(void){
    cout << "::TestFunc()" << endl;
}

namespace TEST{
    void TestFunc(void){
        cout << "TEST::TestFunc()" << endl;
    }
}

namespace MYDATA{
    //MYDATA 네임스페이스 소속
    void TestFunc(void){
        cout << "MYDATA::TestFunc()" << endl;
    }
}

int _tmain(int argc, _TCHAR *argv[]){
    TestFunc(); //묵시적 전역
    ::TestFunc(); //명시적 전역
    TEST::TestFunc();
    MYDATA::TestFunc();

    return 0;
}