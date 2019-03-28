#include <cstdio>
#include <tchar.h>

//  인라인 함수

#define ADD(a,b) ((a) + (b))

int Add(int a, int b){
    return a+b;
}

inline int AddNew(int a, int b){
    return a+b;
}

int _tmain(int argc, _TCHAR *argv[]){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("ADD(): %d\n", ADD(a, b));
    printf("Add(): %d\n", Add(a, b));
    printf("AddNew(): %d\n", AddNew(a, b));

    return 0;
}