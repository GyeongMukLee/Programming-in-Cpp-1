#include <cmath>
#include <iostream>

using namespace std;

/* 2019년 1학기 고급프로그래밍 1 중간고사 (코딩) */
/* 문제 4 좌표 연산 객체지향 프로그램 */

/*
    visual studio code에서 작성됨
    컴파일러: g++ (MinGW.org GCC-6.3.0-1) 6.3.0
*/

class CCord {
   public:
    CCord(int nParam1, int nParam2) {
        xVal = nParam1;
        yVal = nParam2;
    }
    CCord& operator=(CCord& rhs) {
        this->xVal = rhs.xVal;
        this->yVal = rhs.yVal;

        return *this;
    }
    CCord operator+(CCord rhs) {
        CCord result(0, 0);
        result.xVal = this->xVal + rhs.xVal;
        result.yVal = this->xVal + rhs.yVal;

        return result;
    }
    void print(string nParam) {
        cout << nParam << " 좌표 (" << xVal << "," << yVal << ")" << endl;
    }
    void distance(string nParam) {
        cout << nParam << " 거리 :  " << sqrt(xVal * xVal + yVal * yVal) << endl;
    }

   private:
    double xVal;
    double yVal;
};

int main() {
    cout << "*********************************************" << endl;
    cout << "  문제 4.  좌표 연산 객체지향 프로그램" << endl;
    cout << "*********************************************" << endl;
    cout << endl;

    CCord t1(1, 1);
    CCord t2(2, 3);
    t1.print("t1");
    t2.print("t2");

    CCord t3 = t1 + t2;

    cout << endl
         << "t3 = t1 + t2 " << endl
         << endl;

    t3.print("t3");
    t3.distance("t3");

    return 0;
}