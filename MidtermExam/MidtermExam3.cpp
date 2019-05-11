#include <iostream>
using namespace std;

/* 2019년 1학기 고급프로그래밍 1 중간고사 (코딩) */
/* 문제 3 여러 생성자 작성 프로그램 */
class CTest1 {
   public:
    CTest1() {
        this->aValue = 1;  //aValue를 1로 초기화
    }
    CTest1(int nParam) {
        this->aValue = nParam;  // 매개변수를 사용하여 초기화
    }
    CTest1(const CTest1 &obj) {
        this->setValue(obj.getValue);  // 복사 생성자
    }
    int getValue(void) {
        return aValue;
    }
    void setValue(int nParam) {
        this->aValue = nParam;
    }

   private:
    int aValue;
};

int main() {
    cout << "*******************************************************************" << endl;      
    cout << "  문제 3.  여러  생성자(기본, 변환, 복사)를 작성하는 프로그램" << endl;
    cout << "*******************************************************************" << endl;
    cout << endl;

    CTest1 t1;  // 디폴트 생성자 호출
    cout << "1. 디폴트 생성자를 이용 \t: t1.aValue = " << t1.getValue() << endl;

    CTest1 t2(2);  // 변환 생성자 호출
    cout << "2. 변환 생성자를 이용 \t\t: t2.aValue = " << t2.getValue() << endl;

    t1.setValue(3);
    CTest1 t3(t1);  // 복사 생성자 호출
    cout << "3. 복사 생성자를 이용 \t\t: t3.aValue = " << t3.getValue() << endl;
    return 0;
}