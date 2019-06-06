#include <tchar.h>
#include <iostream>
#include <memory>
using namespace std;

class CMyData {
   public:
    CMyData() { cout << "CMyData()" << endl; }
    ~CMyData() { cout << "~CMyData()" << endl; }
};

int _tmain(int argc, _TCHAR* argv[]) {
    cout << "***** Begin *****" << endl;
    {
        //속한 범위를 벗어나면 자동으로 소멸한다.
        auto_ptr<CMyData> ptrTest(new CMyData);
    }

    cout << "****** End ******" << endl;

    return 0;
}