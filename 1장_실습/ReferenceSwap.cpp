#include<iostream>
#include<tchar.h>
using namespace std;

void swap(int &a, int &b){
    int nTmp=a;
    a=b;
    b=nTmp;
}

int _tmain(int argc, _TCHAR *argv[]){
    int x=10,y=20;

    //참조 전달이며 두 변수의 값이 교환된다.
    swap(x,y);

    //교환된 결과를 출력한다.
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}