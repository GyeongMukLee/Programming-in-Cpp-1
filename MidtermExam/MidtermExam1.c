#include <stdio.h>

/*
    Visual Studio Code에서 작성됨
    컴파일러: gcc (MinGW.org GCC-6.3.0-1) 6.3.0
*/

int main() {
    int num1, num2;
    printf("\n***********************************");
    printf("\n 두자리 자연수의 곱 계산 프로그램 ");
    printf("\n***********************************");

    printf("\n 2자리 자연수를 입력하시오 : ");
    scanf("%d", &num1);

    printf(" 2자리 자연수를 하나 더 입력하시오 : ");
    scanf("%d", &num2);

    printf("\n\t \t %4d", num1);
    printf("\n\tx \t %4d", num2);
    printf("\n***************************");

    int num2_1 = num2 % 10;       //num2의 1의 자리 숫자 저장
    int num2_10 = num2 - num2_1;  //num2의 10의 자리 숫자 저장

    printf("\n(%d) x %4d \t is %4d", num1, num2_1, num1 * num2_1);
    printf("\n(%d) x %4d \t is %4d", num1, num2_10, num1 * num2_10);

    printf("\n***************************");
    printf("\n\t=\t %4d", num1 * num2);
    printf("\n***************************");
    return 0;
}