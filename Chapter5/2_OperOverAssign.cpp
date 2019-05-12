#include<iostream>
#include<tchar.h>
using namespace std;

//제작자 코드
class CMyData{
private:
    int *m_pnData=nullptr;

public:
    explicit CMyData(int nParam){
        m_pnData=new int(nParam);
    }

    ~CMyData(){delete m_pnData;}

    operator int(){return *m_pnData;}

    //단순 대입 연산자 다중 정의
    void operator=(const CMyData &rhs){
        delete m_pnData;
        m_pnData=new int(*rhs.m_pnData);
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    CMyData a(0),b(5);
    a=b;
    cout<<a<<endl;

    return 0;
}