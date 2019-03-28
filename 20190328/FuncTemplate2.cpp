#include <iostream>
#include <tchar.h>

//  함수 템플릿으로 만든 add 함수

template <typename T>
T Add(T a, T b){
    return a+b;
}

int _tmain(int argc, _TCHAR *argv[]){
    std::cout << Add(3, 4) << std::endl;
    std::cout << Add(3.3, 4.4) << std::endl;

    return 0;
}