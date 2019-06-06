#include <tchar.h>
#include <cstring>
#include <iostream>
using namespace std;

class CMyException {
   public:
    CMyException(int nCode, const char* pszMsg) {
        m_nErrorCode = nCode;
        strcpy(m_szMsg, pszMsg);
    }

    int getErrorCode() const { return m_nErrorCode; }
    const char* getMessage() const { return m_szMsg; }

   private:
    int m_nErrorCode;
    char m_szMsg[128];
};

int tmain(int argc, _TCHAR* argv[]) {
    try {
        int nInput = 0;
        cout << "양의 정수를 입력하세요: ";
        cin >> nInput;

        if (nInput < 0) {
            CMyException exp(10, "양의 정수를 입력해야 합니다.");
            throw exp;
        }
    } catch (CMyException& exp) {
        cout << "ERROR CODE [" << exp.getErrorCode() << "] "
             << exp.getErrorCode() << endl;
    }

    return 0;
}