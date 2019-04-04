#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{
public:
    //멤버 데이터 선언
    int m_ndata;

    //CTest 클래스의 '생성자 함수' 선언 및 정의
    CTest(){
        m_ndata=10;
    }

    void PrintData(){
        cout << m_ndata << endl;
    }
};

int _tmain(){
    CTest t;
    t.PrintData();

    return 0;
}