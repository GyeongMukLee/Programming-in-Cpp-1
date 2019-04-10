#include <iostream>
#include <tchar.h>

class Fraction{
private:
    int numerator;      //분자
    int denominator;    //분모

public:
    //생성자 선언 및 설정
    Fraction(int num, int den){
        setNumerator(num);
        setDenominator(den);
    }
    
    //소멸자
    ~Fraction(){
    }

    //분수의 분자를 return하는 함수
    int getNumerator(){
        return this->numerator;
    }

    //분수의 분모를 return하는 함수
    int getDenominator(){
        return this->denominator;
    }

    //분수의 분자를 변경하는 함수
    void setNumerator(int value){
        this->numerator=value;
    }

    //분수의 분모를 변경하는 함수
    void setDenominator(int value){
        while(value==0){      //분모가 0일 수 없으므로 확인하는 과정이 필요함
            std::cout<<"분모가 0이 될 수 없습니다. ";
            std::cin>>value;
        }

        this->denominator=value;
    }

    //분수의 분모와 분자를 변경하는 함수
    void setFraction(int num, int den){
        this->numerator=num;
        this->denominator=den;
    }
};

void printFraction(Fraction f){
    std::cout<<f.getDenominator<<'/'<<f.getNumerator<<std::endl;
}

int _tmain() {
    std::cout << "** 분수 클래스 실습  Main() 루틴 **" << std::endl << std::endl; 
 
 
    Fraction a(1,2);
    std::cout << "a = ";
    printFraction(a);

    Fraction b(2,3);
    std::cout << "b = ";
    printFraction(b);

    Fraction c(0,1);
    std::cout << "c = ";
    printFraction(c);

    Fraction d(1,1);
    std::cout << "d = ";
    printFraction(d);
    Fraction e(1,0);   // 이때 에러메시지와 함께 다른 정수를 입력하라는 메시지가 나오면 3를 입력할 것.
    std::cout << "e = ";
    printFraction(e);

    std::cout << "Set c is 3/4" << std::endl;
    c.setFraction(3,4);

    std::cout << "set c is 8/5" << std::endl;
    d.setFraction(8,5);

    std::cout << "set c is 9/6" << std::endl;
    e.setFraction(9,6); 
 
    std::cout << "c = ";
    printFraction(c);

    std::cout << "d = ";
    printFraction(d);

    std::cout << "e = ";
    printFraction(e);

    return 0;
}