#include <iostream>
#include <tchar.h>

//  함수의 다중 정의

int Add(int a, int b, int c){
    std::cout << a+b+c << std::endl;

    return a+b+c;
}

int Add(int a, int b){
    std::cout << a+b << std::endl;

    return a+b;
}

double Add(double a, double b){
    std::cout << a+b << std::endl;

    return a+b;
}

int _tmain(int argc, _TCHAR *argv[]){
    std::cout << Add(3, 4) << std::endl;
    std::cout << Add(3, 4, 5) << std::endl;
    std::cout << Add(3.3, 4.4);

    return 0;
}