#include<iostream>
#include<tchar.h>
using namespace std;

int _tmain(int argc, _TCHAR *argv[]){
    int nInput=0;
    cout << "11 이상의 정수를 입력하세요" << endl;
    cin >> nInput;

    if(nInput>10){
        cout << nInput << endl;
    }
    else{
        cout << "error" << endl;
    }

    return 0;
}