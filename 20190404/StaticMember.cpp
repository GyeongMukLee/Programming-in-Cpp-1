#include<iostream>
#include<tchar.h>
using namespace std;

class CTest{
private:
    int m_nData;

    //정적 멤버 변수 선언(정의는 아니다!)
    static int m_nCount;

public:
    CTest(int nParam):m_nData(nParam){m_nCount++;}
    int getData(){return m_nData;}
    void ResetCount(){m_nCount=0;}

    static int getCount(){
        return m_nCount;
    }
};

//CTest 클래스의 정적 멤버 변수 정의
int CTest::m_nCount=0;

int _tmain(int argc, _TCHAR *argv[]){
    CTest a(10), b(5);

    //정적 멤버에 접근
    cout << a.getCount() << endl;
    b.ResetCount();

    //정적 멤버에 접근. 인스턴스 없이도 접근 가능!
    cout << CTest::getCount() << endl;

    return 0;
}