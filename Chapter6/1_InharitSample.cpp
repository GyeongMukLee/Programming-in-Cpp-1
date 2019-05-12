#include <tchar.h>
#include <iostream>
using namespace std;

// 제작자 - 초기 개발자
class CMyData {
   public:
    CMyData() { cout << "CMyData()" << endl; }
    int getData() const { return m_nData; }
    void setData(const int nData) { m_nData = nData; }

   protected:
    void printData() const { cout << "CMyData::printData()" << endl; }

   private:
    int m_nData = 0;
};

// 제작자 - 후기 개발자
class CMyDataEx : public CMyData {
   public:
    CMyDataEx() { cout << "CMyDataEx()" << endl; }
    void testFunc() {
        printData();
        setData(5);
        cout << CMyData::getData() << endl;
    }
};

// 사용자
int _tmain(int argc, _TCHAR* argv[]) {
    CMyDataEx data;

    // 기본 클래스(CMyData) 멤버에 접근
    data.setData(10);
    cout << data.getData() << endl;

    //파생 클래스(CMyDataEx) 멤버에 접근
    data.testFunc();

    return 0;
}