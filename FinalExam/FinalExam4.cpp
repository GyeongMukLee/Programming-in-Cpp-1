// FinalExam4 .cpp
//

#include <iostream>
using namespace std;

class NegativeInputError {};
class DividedByZeroError {};

int main(void) {
    int a, b, c;
    float d;
    char f;

    while (1) {
        try {
            cout << "**************************************************************" << endl;
            cout << " 두개의 양의 정수를 입력받아 나눗셈 결과를 출력하는 프로그램" << endl;
            cout << "**************************************************************" << endl;
            cout << endl;
            cout << " 첫번째 양의 정수를 입력하시오 : ";
            cin >> a;
            if (a < 0) throw NegativeInputError();
            cout << " 두 번째 양의 정수를 입력하시오 : ";
            cin >> b;
            if (b < 0) throw NegativeInputError();
            if (b == 0) throw DividedByZeroError();

            if (a % b == 0) {
                c = a / b;
                throw c;
            } else {
                d = (float)a / (float)b;
                throw d;
            }
        } catch (int c) {
            cout << " 정수 결과 출력 : " << c << endl;
        } catch (float d) {
            cout << " 실수 결과 출력 : " << d << endl;
        } catch (NegativeInputError e) {
            cout << " 음수 입력" << endl;
        } catch (DividedByZeroError e) {
            cout << " 나누는 수에 0 입력" << endl;
        }

        cout << endl
             << " 종료하려면 'q', 계속하려면 'c'를 입력하시오! ";
        cin >> f;
        cout << endl;
        if (f == 'q') break;
    }
    return 0;
}  //end of main()
