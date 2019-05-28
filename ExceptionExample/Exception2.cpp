#include <exception>
#include <iostream>
using namespace std;

class Negative : public exception {
   public:
    virtual const char* what() const throw() {
        return "두 수 중에서 어떤 수도 음수여서는 안됨.";
    }
};

class Div0 : public exception {
   public:
    virtual const char* what() const throw() {
        return "0으로 나눌 수 없음.";
    }
};

class string_Overflow : public exception {
   public:
    virtual const char* what() const throw() {
        return "문자열의 범위를 벗어남";
    }
};

int main() {
    try {
        int i, myInt1, myInt2;
        double myDouble1;
        char myString[10] = "ABCDEFGHI";

        cout << "**********************" << endl;
        cout << "2개의 양의 정수의 나눗셈" << endl;
        cout << "**********************" << endl;
        cout << "하나의 정수를 입력하시오: ";
        cin >> myInt1;

        if (myInt1 < 0) {
            throw Negative();
        }

        cout << "또 다른 정수를 입력하시오: ";
        cin >> myInt2;

        if (myInt2 < 0) {
            throw Negative();
        }
        if (myInt2 == 0) {
            throw Div0();
        }

        myDouble1 = (double)myInt1 / (double)myInt2;
        cout << "***************************" << endl;
        cout << "2개의 양의 정수의 나눗셈 결과" << endl;
        cout << myInt1 << " / " << myInt2 << " = " << myDouble1 << endl;
        cout << "***************************" << endl
             << endl
             << endl;

        cout << "**********************" << endl;
        cout << "      문자열 출력      " << endl;
        cout << "**********************" << endl;
        for (i = 0; i < 11; i++) {
            if (i >= sizeof(myString) / sizeof(char)) {
                throw string_Overflow();
            }

            cout << myString[i];
        }
        cout << endl
             << "**********************" << endl;
    }

    catch (exception& e) {
        cout << e.what() << endl;
    }
}
