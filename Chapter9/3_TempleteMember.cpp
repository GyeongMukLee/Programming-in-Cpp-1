#include <tchar.h>
#include <iostream>
using namespace std;

template <typename T>
class CTest {
   public:
    //생성자 선언
    CTest();
    T TestFunc();

   protected:
    //정적 멤버데이터 선언
    static T m_Data;
};

// 생성자 정의
template <typename T>
CTest<T>::CTest() {}

//멤버 함수 정의
template <typename T>
T CTest<T>::TestFunc() {
    return m_nData;
}

//정적 멤버 변수 정의
template <typename T>
T CTest<T>::m_Data = 15;

int _tmain(int argc, _TCHAR *argv[]) {
    CTest<double> a;
    cout << a.TestFunc() << endl;

    return 0;
}