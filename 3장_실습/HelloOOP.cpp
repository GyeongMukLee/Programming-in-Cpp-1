#include<cstdio>
#include<tchar.h>

//제작자의 코드
class USERDATA{
public:
    int nAge;
    char szName[32];

    void Print(){
        printf("%d, %s\n",nAge,szName);
    }
};

int _tmain(int argc, _TCHAR *argv[]){
    USERDATA user={10,"철수"};
    user.Print();

    return 0;
}
