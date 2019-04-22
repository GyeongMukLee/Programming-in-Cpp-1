#include<stdio.h>

//제작자가 구현한 코드
typedef struct USERDATA
{
    int nAge;
    char szName[32];
}USERDATA;

void printData(USERDATA *pUser){
    printf("%d, %s\n",pUser->nAge, pUser->szName);
}

//사용자의 코드
int main(){
    USERDATA user={20,"철수"};
    //printf("%d, %s\n",user.age,user.szName);      //1단계
    printData(&user);       //2단계

    return 0;
}