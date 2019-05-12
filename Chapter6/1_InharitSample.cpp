#include<iostream>
#include<tchar.h>
using namespace std;

// 제작자 - 초기 개발자
class CMyData {
    public:
    CMyData(){cout<<"CMyData()"<<endl;}
    int getData(){return m_nData;}

    private:
    int m_nData=0;
};