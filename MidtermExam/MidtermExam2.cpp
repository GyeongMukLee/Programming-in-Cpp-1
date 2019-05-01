#include<iostream>
using namespace std;

/* 2019년 1학기 고급프로그래밍 1 중간고사 (코딩) */
/* 문제 2. 정수의 오름차순 정렬 프로그램 */

int main(){
    const int N = 5;
    int i, j;
    int A[5] = { 3, 1, 2, 5, 4};
    void exchange(int * , int *) ; //exchange 함수 원형선언

    cout << "************************************" << endl;
    cout << " 2번 정수의 오름차순 정렬 프로그램 " << endl;
    cout << "************************************ \n \n" << endl;

    cout << " 정렬할 자료 : ";
    for (i=0; i<N; i++){
        cout << A[i] << " " ;
    }

    cout << endl;
    for (i=0;i<N;i++) {
        for (j=0;j<N-1;j++) {
            if(A[i] < A[j]) {
                exchange(&(A[i]), &(A[j]));
            }
        }
    }

    cout << " 정렬된 자료 : ";
    for(i=0;i<N;i++){
        cout << A[i] << " " ;
    }

    cout << endl;
    return 0;
}

void exchange(int *a, int *b){
    int temp;
    //a와 b의 값을 temp를 이용하여 교환
    *a=temp;
    *a=*b;
    *b=temp;
}