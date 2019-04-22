#include<iostream>
#include<tchar.h>

//  네임스페이스 선언 및 정의

namespace TEST{
    int g_nData = 100;

    void TestFunc(void){
        std::cout << "TEST::TestFunc()" << std::endl;
    }
}

int _tmain(int argc, _TCHAR *argv[]){
    TEST::TestFunc();
    std::cout << TEST::g_nData << std::endl;

    return 0;
}