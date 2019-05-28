#include <iostream>
using namespace std;

class CMyException {
   private:
    string errorMessage;

   public:
    CMyException(const string message) {
        errorMessage = message;
    }

    string what() const {
        return errorMessage;
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
            throw CMyException("두 수 중에 어떤 수도 음수일 수 없음");
        }

        cout << "또 다른 정수를 입력하시오: ";
        cin >> myInt2;

        if (myInt2 < 0) {
            throw CMyException("두 수 중에 어떤 수도 음수일 수 없음");
        }

        if (myInt2 == 0) {
            throw CMyException("0으로 나눌 수 없음");
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
                throw CMyException("문자열의 범위를 벗어남");
            }
            cout << myString[i];
        }
        cout << endl
             << "**********************" << endl;
    }

    catch (CMyException& e) {
        cout << e.what() << endl;
    }
}