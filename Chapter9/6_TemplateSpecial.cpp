#include <tchar.h>
#include <cstring>
#include <iostream>
using namespace std;

template <typename T>
class CMyData {
   public:
    CMyData(T param) : m_Data(param) {}

    T getData() const { return m_Data; }
    void setData(T param) { m_Data = param; }

   private:
    T m_Data;
};

template <>
class CMyData<char*> {
   public:
    CMyData(char* pszParam) {
        int nLen = strlen(pszParam);
        m_Data = new char[nLen + 1];
    }

    ~CMyData() { delete[] m_Data; }
    char* getData() const { return m_Data; }

   private:
    char* m_Data;
};

int _tmain(int argc, _TCHAR* argv[]) {
    CMyData<char*> a("hello");
    cout << a.getData() << endl;

    return 0;
}