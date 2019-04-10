#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData{

private:
    int m_nData;

public:
    CMyData():m_nData(0){};

    int getData(void){return m_nData;}
    void setData(int nParam){m_nData=nParam;}

    //실수로 double 자료형 실인수가 넘어오는 경우를 차단한다
    void setData(double nParam) = delete;
};

int _tmain(int argc, _TCHAR *argv[]){
    CMyData a;

    //CMyData::setData(int) 메서드가 호출된다.
    a.setData(10);
    cout<<a.getData()<<endl;

    CMyData b;

    //CMyData::setData(int) 메서드가 호출된다.
    b.setData(5.5);
    cout<<b.getData()<<endl;

    return 0;
}