#include <tchar.h>
#include <iostream>
using namespace std;

// 초기 제작자
class CMyData {
   public:
    int getData() const { return m_nData; }
    void setData(const int nData) { m_nData = nData; }

   private:
    int m_nData = 0;
};

// 후기 제작자
class CMyDataEx : public CMyData {
   public:
    void setData(const int nParam) {
        if (nParam < 0) {
            CMyData::setData(0);
        }
        if (nParam > 10) {
            CMyData::setData(10);
        }
    }
};

// 사용자 코드
int _tmain(int argc, _TCHAR* argv[]) {
    CMyData a;
    a.setData(-10);
    cout << a.getData() << endl;

    CMyDataEx b;
    b.setData(15);
    cout << b.getData() << endl;

    return 0;
}