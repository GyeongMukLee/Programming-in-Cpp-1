#include <string>
#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR *argv[]){
    std::string strData = "Test string";
    std::cout << "Sample String" << std::endl;
    std::cout << strData << std::endl;

    strData="New String";
    std::cout << strData << std::endl;

    std::cout << "저는 " << 20 << "살" << "입니다." << std::endl;

    return 0;
}