#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{
public:
    //멤버 데이터 선언
    int m_nData;

    //CTest 클래스의 '생성자 함수' 선언 및 정의
    CTest(){
        //인스턴스가 생성되면 멤버 데이터를 '자동'으로 초기화한다.
        m_nData=10;
    }

    //멤버 함수 선언. 정의가 분리되었다.
    void PrintData();
};

void CTest::PrintData(){
    cout<<m_nData<<endl;
}

int _tmain(int argc, _TCHAR *argv[]){
    CTest t;
    t.PrintData();

    return 0;
}