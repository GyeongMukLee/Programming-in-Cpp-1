#include "stdio.h"
#include "stdlib.h"

int sum(int *arr);
double average(int *arr);
int max(int *arr);
int count=0;        //dat파일에서 첫번쨰 숫자를 가져옴. 어쩔수없이 전역변수 지정함

int main(void){
    FILE *f1, *f2;
    f1=fopen("2.dat","rt");
    f2=fopen("2.out","wt");

    int loop; //반복문에서 사용
    fscanf(f1,"%d",&count);
    int number[count];  //dat파일에서 두번째부터 써있는 숫자를 저장.

    for(loop=0;loop<count;loop++){      //dat파일에서 숫자를 받아옴
        fscanf(f1,"%d",&number[loop]);
    }
    
    fprintf(f2,"sum=%d\naverage=%.1lf\nmax=%d",sum(number),average(number),max(number));
    printf("sum=%d\naverage=%.1lf\nmax=%d",sum(number),average(number),max(number));
    fclose(f1);
    fclose(f2);

    return 0;
}

int sum(int *arr){    //함수 내에서 sizeof 함수를 사용할 수 없어서 입력을 하나 더 추가함
    int sum=0;
    int loop;  //반복문에서 사용

    for(loop=0;loop<count;loop++){
        sum= sum + *(arr+loop);
    }
    return sum;
}

double average(int *arr){
    int sum=0;
    double average=0;
    int loop;     //반복문에서 사용
    for(loop=0;loop<count;loop++){
        sum = sum + *(arr+loop);
    }
    average=(double)sum/(double)count;
    return average;
}

int max(int *arr){
    int max_value=*(arr);
    int loop; //반복문에서 사용
    for(loop=0; loop < count; loop++){
        if(max_value<*(arr+loop)){
            max_value=*(arr+loop);
        }
    }
    return max_value;
}