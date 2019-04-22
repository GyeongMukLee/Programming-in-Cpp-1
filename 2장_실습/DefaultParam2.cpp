#include <iostream>
#include <tchar.h>

//  매개변수가 두 개일때의 디폴트 값

int TestFunc(int nParam1, int nParam2 = 2){
    return nParam1 * nParam2;
}

int _tmain(int argc, _TCHAR *argv[]){
    std::cout << TestFunc(10) << std::endl;
    std::cout << TestFunc(10,5) << std::endl;

    return 0;
}