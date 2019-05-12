#include<iostream>
#include<tchar.h>
using namespace std;

//제작자 코드
class CTestData{
private:
    int m_nData=0;

public:
    CTestData(int nParam){
        cout<<"CTestData(int nParam)"<<endl;
    }

    CTestData(const CTestData &rhs): m_nData(rhs.m_nData){
        cout<<"CTestData(const CTestData &)"<<endl;
    }

    int getData()const{return m_nData;}
    void setData(int nParam){m_nData=nParam;}
};

//사용자 코드
void testFunc(CTestData param){
    cout<<"TestFunc(): "<<param.getData()<<endl;
}

int _tmain(int argc, _TCHAR *argv[]){
    testFunc(5);

    return 0;
}