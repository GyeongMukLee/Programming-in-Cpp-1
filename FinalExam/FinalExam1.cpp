// FinalExam1.cpp
//

#include <iostream>
using namespace std;

class CMyClass {
    friend CMyClass operator+(int arg1, const CMyClass& arg2);

   public:
    CMyClass(int arg) {
        m_Value = arg;
    }

   private:
    int m_Value = 0;
};

CMyClass operator+(int arg1, const CMyClass& arg2) {
    CMyClass t(0);
    t.m_Value = arg1 + arg2.m_Value;

    cout << t.m_Value << endl;
    return t;
}

int main(void) {
    CMyClass t(2);
    CMyClass s = 1 + t;

    return 0;
}  //end of main()
