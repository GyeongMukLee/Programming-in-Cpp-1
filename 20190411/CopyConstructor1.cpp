#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData{

private:
    int m_nData=0;
    
public:
    CMyData(){cout<<"CMyData()"<<endl;}

    //복사 생성자 선언 및 정의
    CMyData(const CMyData &rhs){
        this->m_nData=rhs.m_nData;
        cout<<"CMyData(const CMyData &)"<<endl;
    }

    int getData(void) const {return m_nData;}
    void setData(int nParam){m_nData=nParam;}
};

int _tmain(int argc, _TCHAR *argv[]){
    //디폴트 생성자가 호출되는 경우
    CMyData a;
    a.setData(10);

    //복사생성자가 호출되는 경우
    CMyData b(a);
    cout<<b.getData()<<endl;

    return 0;
}