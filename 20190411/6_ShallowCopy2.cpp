#include<iostream>
#include<tchar.h>
using namespace std;

//  瑠璃色金魚と花菖蒲

class CMyData
{
private:
    int *m_pnData=nullptr;

public:
    CMyData(int nParam){
        m_pnData=new int;
        *m_pnData=nParam;
    }

    //복사 생성자 선언 및 정의
    CMyData(const CMyData &rhs){
        cout<<"CMyData(const CMyData &rhs)"<<endl;
    
        //메모리를 할당한다.
        m_pnData=new int;

        //포인터가 가리키는 위치에 값을 복사한다.
        *m_pnData=*rhs.m_pnData;
    }

    //객체가 소멸하면 동적 할당한 메모리를 해제한다.
    ~CMyData(){
        delete m_pnData;
    }

    //단순 대입 연산자 함수를 정의한다.
    CMyData& operator=(const CMyData &rhs){
        *m_pnData=*rhs.m_pnData;

        return *this;
    }

    int getData()const{
        if(m_pnData != NULL){
            return *m_pnData;
        }

        return 0;
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    CMyData a(10);
    CMyData b(20);

    //단순 대입을 시도하면 모든 멤버의 값을 그대로 복사한다.
    a=b;
    cout<<a.getData()<<endl;

    return 0;
}