#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{
    int m_nData;

public:
    CTest(){
        cout<<"CTest::CTest()"<<endl;
    }
    ~CTest(){
        cout<<"CTest::~CTest()"<<endl;
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    cout<<"begin"<<endl;

    //new 연산자를 이용해 동적으로 객체를 생성한다
    CTest *pData=new CTest;
    cout<<"Test"<<endl;

    delete pData;
    cout<<"End"<<endl;

    return 0;    
}