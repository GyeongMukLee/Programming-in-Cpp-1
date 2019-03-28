#include <iostream>
#include <tchar.h>

//디폴트 매개변수와 다중 정의가 조합되었을 때의 모호성

void TestFunc(int a){
    std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b = 10){
    std::cout << "TestFunc(int, int)" << std::endl;
}

int _tmain(int argc, _TCHAR *argv[]){
    TestFunc(5);    //호출이 모호하기 때문에 컴파일시 오류가 발생한다.

    return 0;
}