#include "stdio.h"

/*
    2019년 3월 7일: (C언어)조건문 연습

    ? 2개의 정수(a1, a2)를 keyboard로 부터 읽어 들인다.
    ? 두 수의 차 (a1-a2)를 diff로 저장한다.
    ? 만일 diff가 0보다 크면, “0보다 크다”를 화면으로 출력
    ? 그렇지 않고 0보다 작거나 같으면, “0보다 작거나 같음” 을 화면으로 출력
    ? 끝.
*/

int main(void){
    int a1, a2, diff;
    scanf("%d %d", &a1, &a2);
    diff=a1-a2;

    if(diff>0){
        printf("0보다 크다.");
    }
    else{
        printf("0보다 작거나 같다.");
    }

    return 0;
}