#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{
public:
    CTest(){
        cout<<"CTest::Ctest()"<<endl;
    }

    ~CTest(){
        cout<<"CTest::~CTest()"<<endl;
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    cout<<"Begin"<<endl;
    CTest a;
    cout<<"End"<<endl;

    return 0;
}