#include <tchar.h>
#include <cstring>
#include <iostream>
#include <memory>
using namespace std;

template <typename T>
T add(T a, T b) { return a + b; }

template <>
char* add(char* pszLeft, char* pszRight) {
    int left = strlen(pszLeft);
    int right = strlen(pszRight);
    char* result = new char[left + right];

    //새로 할당한 메모리에 문자열을 복사한다
    strcpy(result, pszLeft);
    strcpy(result + left, pszRight);

    return result;
}

int _tmain(int argc, _TCHAR* argv[]) {
    int nResult = add<int>(3, 4);
    cout << nResult << endl;

    char* pszResult = add<char*>("hello", "World");
    cout << pszResult << endl;

    delete pszResult;
}