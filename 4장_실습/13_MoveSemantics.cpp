#include<iostream>
#include<tchar.h>
using namespace std;

//제작자 코드
class CTestData{
private:
    int m_nData=0;

public:
    CTestData(){cout<<"CTestData()"<<endl;}
    ~CTestData(){cout<<"~CTestData()"<<endl;}

    CTestData(const CTestData &rhs):m_nData(rhs.m_nData){
        cout<<"CTestData(const CTestData &)"<<endl;
    }

    //이동 생성자
    CTestData(CTestData &&rhs):m_nData(rhs.m_nData){
        cout<<"CTestData(const CTestData &&)"<<endl;
    }
    CTestData& operator=(const CTestData &)=default;

    int getData()const{return m_nData;}
    void setData(int nParam){m_nData=nParam;}
};

CTestData TestFunc(int nParam){
    cout<<"*** TestFunc(): Begin ***"<<endl;
    CTestData a;
    a.setData(nParam);
    cout<<"*** TestFunc(): End ***"<<endl;

    return a;
}

int _tmain(int argc, _TCHAR *argv[]){
    CTestData b;
    cout<<"* Before *****************"<<endl;
    b=TestFunc(20);
    cout<<"* After ******************"<<endl;
    CTestData c(b);

    return 0;
}