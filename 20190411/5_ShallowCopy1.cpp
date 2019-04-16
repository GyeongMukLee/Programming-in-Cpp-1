#include<iostream>
#include<tchar.h>
using namespace std;

class CMyData{
private:
    //포인트 멤버 데이터
    int *m_pnData=nullptr;
public:

    CMyData(int nParam){
        m_pnData=new int;
        *m_pnData=nParam;
    }
    int getData(){
        if(m_pnData != NULL){
            return *m_pnData;
        }

        return 0;
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    CMyData a(10);
    CMyData b(a);

    cout<<a.getData()<<endl;
    cout<<b.getData()<<endl;

    return 0;
}