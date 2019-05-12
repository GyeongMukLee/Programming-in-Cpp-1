#include<stdio.h>

//제작자의 코드
typedef struct USERDATA{
    int nAge;
    char szName[32];
    void(*Print)(struct USERDATA *);
}USERDATA;

void printData(USERDATA *pUser){
    printf("%d, %s\n", pUser->nAge, pUser->szName);
}

//사용자의 코드
int main(){
    USERDATA user={20,"철수",printData};
    //printf("%d, %s\n",user.age,user.szName);      //1단계
    //printData(&user);                             //2단계
    user.Print(&user);

    return 0;
}