#include<iostream>

class Fraction{

};

int main() {
    std::cout << "** 분수 클래스 실습 Main() 루틴 **" << std::endl<< std::endl;
    Fraction a(1,2);
    std::cout << "a = "; printFraction(a);
    Fraction b(2,3);
    std::cout << "b = "; printFraction(b);
    Fraction c(0,1);
    std::cout << "c = "; printFraction(c);
    Fraction d(1,1);
    std::cout << "d = "; printFraction(d);
    Fraction e(1,0); // 이때 에러메시지와 함께 다른 정수를 입력하라는 메시지가 나오면 3를 입력할 것.
    std::cout << "e = "; printFraction(e);
    std::cout << "Set c is 3/4" << std::endl; c.setFraction(3,4);
    std::cout << "set c is 8/5" << std::endl; d.setFraction(8,5);
    std::cout << "set c is 9/6" << std::endl; e.setFraction(9,6);
    std::cout << "c = "; printFraction(c);
    std::cout << "d = "; printFraction(d);
    std::cout << "e = "; printFraction(e);
} 
