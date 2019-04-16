#include<iostream>
#include<tchar.h>
using namespace std;

void TestFunc(int &nParam){
    cout<<"TestFunc(int &)"<<endl;
}

void TestFunc(int &&rParam){
    cout<<"TestFunc(int &&)"<<endl;
}

int _tmain(int argc, _TCHAR *argv[]){
    //3+4 연산 결과는 r-value이다. 절대 l-value가 될 수 없다.
    TestFunc(3+4);

    return 0;
}