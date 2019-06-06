#include <tchar.h>
#include <iostream>
#include <new>
using namespace std;

class CTest {
   public:
    CTest(int nSize) {
        //메모리 할당에 실패하면 예외를 던진다!
        m_pszData = new char[nSize];
    }

    ~CTest() {
        delete[] m_pszData;
        cout << "정상적으로 객체가 소멸함" << endl;
    }

   private:
    char* m_pszData;
};

int _tmain(int argc, _TCHAR* argv[]) {
    try {
        int nSize;
        cout << "Input size: ";

        //사용자가 입력한 값을 검증 없이 그대로 사용해 객체를 생성
        cin >> nSize;
        CTest a(nSize);
    } catch (bad_alloc& exp) {
        cout << exp.what() << endl;
        cout << "ERROR: CTest()" << endl;
    }

    return 0;
}