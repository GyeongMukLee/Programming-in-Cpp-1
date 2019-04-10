#include<iostream>
#include<tchar.h>
using namespace std;

class CRefTest{
public:
    //참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
    CRefTest(int &rParam):m_nData(rParam){};
    int GetData(){return m_nData;}

private:
    int &m_nData;
};

int _tmain(int argc, _TCHAR *argv[]){
    int a=10;
    CRefTest t(a);

    cout<<t.GetData()<<endl;

    a=20;
    cout<<t.GetData()<<endl;

    return 0;
}