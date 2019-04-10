#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData{

private:
    int m_nData;

public:
    CMyData(): m_nData(0){};

    int getData(void){
        return m_nData;
    }

    void setData(int nParam){
        m_nData=nParam;
    }

    //매개변수가 double 자료형일 경우로 다중 정의했다.
    void setData(double dParam){
        m_nData=0;
    }
};

//사용자의 코드
int _tmain(int argc, _TCHAR *argv[]){
    CMyData a;

    //CMyData::setData()메서드가 호출된다
    a.setData(10);
    cout<<a.getData()<<endl;

    CMyData b;

    b.setData(5.5);
    cout<<b.getData()<<endl;

    return 0;
}