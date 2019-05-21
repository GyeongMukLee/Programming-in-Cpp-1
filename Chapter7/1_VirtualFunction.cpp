#include <tchar.h>
#include <iostream>
using namespace std;

class CMyData {
   public:
    // 가상 함수로 선언 및 정의했다.
    virtual void printData() {
        cout << "CMyData: " << m_nData << endl;
    }

    void TestFunc() {
        cout << "***TestFunc()***" << endl;

        // 실형식의 함수가 호출된다!
        printData();
        cout << "****************" << endl;
    }

   protected:
    int m_nData;
};

class CMyDataEx : public CMyData {
   public:
    // 기본 클래스의 가상 함수 멤버를 재정의했다.
    // 따라서 기존 정의는 무시된다.
    virtual void printData() {
        cout << "CMyDataEx:" << m_nData * 2 << endl;
    }
};

int _tmain(int argc, _TCHAR* argv[]) {
    CMyDataEx a;
    a.printData();

    CMyData& b = a;

    // 참조 형식에 상관 없이 실 형식의 함수가 호출된다.
    b.printData();

    // 늘 마지막에 재정의된 함수가 호출된다!
    a.TestFunc();

    return 0;
}