#include<iostream>
#include<tchar.h>
using namespace std;

class CTestData{

private:
    int m_nData=0;

public:
    CTestData(int nParam):m_nData(nParam){
        cout<<"CTestData(int)"<<endl;
    }

    CTestData(const CTestData &rhs): m_nData(rhs.m_nData){
        cout<<"CTestData(const CTestData &)"<<endl;
    }

    //읽기 전용인 상수형 메서드
    int getData() const {return m_nData;}

    //멤버 변수에 쓰기를 시도하는 메서드
    void setData(int nParam){
        m_nData=nParam;
    }
};

void TestFunc(CTestData param){
    cout << "TestFunc()"<<endl;

    //피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
    param.setData(20);
}

int _tmain(int argc, _TCHAR *argv[]){
    cout<<"*** Begin ***"<<endl;
    CTestData  a(20);
    TestFunc(a);

    //함수 호출 후 a의 값을 출력한다.
    cout<<"a: "<<a.getData()<<endl;

    cout<<"*** End ***"<<endl;

    return 0;
}