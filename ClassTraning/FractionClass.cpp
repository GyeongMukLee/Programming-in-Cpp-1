#include <iostream>

class Fraction{
private:
    //분자
    int numerator;

    //분모
    int denominator;

public:
    //생성자 선언 및 설정
    Fraction(int num, int den){
        setNumerator(num);
        setDenominator(den);
    }

    //복사생성자
    Fraction(const Fraction &rhs){
        this->numerator=rhs.getNumerator();
        this->denominator=rhs.getDenominator();
    }
    
    //소멸자
    ~Fraction(){
    }

    //분수의 분자를 return하는 함수
    int getNumerator() const {
        return this->numerator;
    }

    //분수의 분모를 return하는 함수
    int getDenominator() const {
        return this->denominator;
    }

    //분수의 분자를 변경하는 함수
    void setNumerator(int value){
        this->numerator=value;
    }

    //분수의 분모를 변경하는 함수
    void setDenominator(int value){
        while(value==0){      //분모가 0일 수 없으므로 확인하는 과정이 필요함
            std::cout<<"분모가 0이 될 수 없습니다. 다시 입력해 주세요. ";
            std::cin>>value;
        }

        this->denominator=value;
    }

    //분수의 분모와 분자를 변경하는 함수
    void setFraction(int num, int den){
        setDenominator(den);
        setNumerator(num);
    }

    // = 연산자에 대한 다중 정의
    void operator= (const Fraction &rhs) {
        this->numerator=rhs.getNumerator();
        this->denominator=rhs.getDenominator();
    }

    // + 연산자에 대한 다중 정의
    Fraction operator+ (const Fraction &rhs) const {
        Fraction result(1,1);

        //두 분수를 더한 것의 분모는 그 두 분수의 분모를 곱한 것과 같다.
        result.setDenominator(this->getDenominator() * rhs.getDenominator());

        //두 분수(a,b)를 더한 것의 분자는 (a의 분자*b의 분모 + b의 분자*a의 분모)를 계산한 것과 같다. 
        result.setNumerator((this->getDenominator() * rhs.getNumerator())+(this->getNumerator()*rhs.getDenominator()));

        return result;
    }

    // - 연산자에 대한 다중 정의
    Fraction operator- (const Fraction &rhs) const {
        Fraction result(1,1);

        //두 분수를 더한 것의 분모는 그 두 분수의 분모를 곱한 것과 같다.
        result.setDenominator(this->getDenominator() * rhs.getDenominator());

        //두 분수(a,b)를 더한 것의 분자는 (a의 분자*b의 분모 - b의 분자*a의 분모)를 계산한 것과 같다. 
        result.setNumerator((this->getDenominator()*rhs.getNumerator()) - (this->getNumerator()*rhs.getDenominator()));

        return result;
    }

    // * 연산자에 대한 다중 정의
    Fraction operator* (const Fraction &rhs) const {
        Fraction result(1,1);

        //두 분수를 곱한 것의 분모는 그 두 분수의 분모를 곱한 것과 같다.
        result.setDenominator(this->getDenominator() * rhs.getDenominator());

        //두 분수를 곱한 것의 분자는 그 두 분수의 분자를 곱한 것과 같다.
        result.setNumerator(this->getNumerator() * rhs.getNumerator());

        return result;
    }

    Fraction operator/ (const Fraction &rhs) const {
        Fraction result(1,1);

        //두 분수(a,b)를 나눈 것의 분모는 a의 분모와 b의 분자를 곱한 것과 같다.
        result.setDenominator(this->getDenominator() * rhs.getNumerator());

        //두 분수(a,b)를 나눈 것의 분자는 a의 분자와 b의 분모를 곱한 것과 같다.
        result.setNumerator(this->getNumerator() * rhs.getDenominator());

        return result;
    }

    bool operator==(const Fraction &rhs) const {
        if(this->getDenominator()==rhs.getDenominator()){
            if(this->getNumerator()==rhs.getNumerator()){
                //분자와 분모가 모두 같으면 참을 return한다
                return true;
            }
            else{
                //나머지 경우에는 거짓을 return한다.
                return false;
            }
        }
        else{
            //나머지 경우에는 거짓을 return 한다.
            return false;
        }
    }
};

//분수를 출력하는 전역변수
void printFraction(Fraction f){
    std::cout  << f.getNumerator() << "/" << f.getDenominator() << std::endl;
}

int main() {
    /*
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
    */

    std::cout << "** 분수 클래스 실습2 Main() 루틴 **" << std::endl << std::endl;

    Fraction a(1,2);
    std::cout << "a = ";
    printFraction(a);

    Fraction b(2,3);
    std::cout << "b = ";
    printFraction(b);

    std::cout << "a + b = ";
    printFraction(a+b);

    std::cout << "a - b = ";
    printFraction(a-b);

    std::cout << "a * b = ";
    printFraction(a*b);

    std::cout << "a / b = ";
    printFraction(a/b);

    std::cout << "if (a==a) : "<< ( a==a ) << std::endl;
    std::cout << "if (a==b) : "<< ( a==b ) << std::endl;
    std::cout << "if (b==a) : "<< ( b==a ) << std::endl;
    std::cout << "if (b==b) : "<< ( b==b ) << std::endl;
}