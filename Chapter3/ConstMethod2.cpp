#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{

private:
    mutable int m_nData=0;

public:
    CTest(int nParam):m_nData(nParam){};
    ~CTest(){}

    //상수형 메서드로 선언 및 정의했다.
    int getData() const{
        m_nData=20;
        return m_nData;
    }

    int setData(int nParam){
        m_nData=nParam;
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    CTest a(10);
    cout<<a.getData()<<endl;

    return 0;
}