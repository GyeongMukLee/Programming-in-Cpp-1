#include <iostream>
#include <tchar.h>
using namespace std;

int nData=100;

namespace TEST{
    int nData=200;
}

using namespace TEST;

int _tmain(int argc, _TCHAR *argv[]){
    cout << nData << endl;
}