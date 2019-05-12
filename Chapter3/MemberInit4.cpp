#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{
public:
    //두 개의 멤버 데이터 선언
    int m_nData1;
    int m_nData2;

    //생성자 초기화 목록을 이용한 멤버 초기화
    CTest():m_nData1(10),m_nData2(20)
    {}

    //멤버 함수 선언 및 정의
    void printData(){
        cout<<m_nData1<<endl;
        cout<<m_nData2<<endl;
    }
};

//사용자 코드
int _tmain(int argc, _TCHAR *argv[]){
    CTest t;
    t.printData();

    return 0;
}