#include<iostream>
#include<tchar.h>
using namespace std;

//제작자 코드
class CTestData{
private:
    int m_nData=0;

public:
    explicit CTestData(int nParam):m_nData(nParam){}

    //CTestData 클래스는 int 자료형으로 변환될 수 있다!
    operator int(void) {return m_nData;}
    int getData()const{return m_nData;}
    void setData(int nParam){m_nData=nParam;;}
};

int _tmain(int argc, _TCHAR *argv[]){
    CTestData a(10);
    cout<<a.getData()<<endl;

    //CTestData 형식에서 int 자료형으로 변환될 수 있다.
    cout<<a<<endl;
    cout<<(int)a<<endl;
    cout<<static_cast<int>(a)<<endl;

    return 0;
}