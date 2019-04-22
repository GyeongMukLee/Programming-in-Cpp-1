#include<iostream>

/*
    자료구조+고급프로그래밍 실습
    선형큐 구현

    int 형태의 자료만 입력가능함.
*/

class Queue{
private:
    int *qu=nullptr;
    int queueSize;
    int front=-1;
    int rear=-1;

public:
    //생성자
    Queue(int maxSize){
        queueSize=maxSize;
        qu=new int[queueSize];
        for(int i=0;i<queueSize;i++){
            qu[i]=0;
        }
    }

    //소멸자
    ~Queue(){
        delete[] qu;
    }

    //선형큐를 프린트하는 메서드. 인수로 true가 들어가면 front와 rear를 표시한다. 기본값은 false.
    void queuePrint(bool fr=false)const{
        std::cout<<"| ";
        if(fr==true){
            for(int i=0;i<queueSize;i++){
                if(i==front){
                    std::cout<<"F";
                }
                if(i==rear){
                    std::cout<<"R";
                }
                std::cout<<qu[i];
                std::cout<<" | ";
            }
        }
        else if(fr==false){
            for(int i=0;i<queueSize;i++){
                if(i<=front){
                    std::cout<<"NULL | ";
                }
                else if(i>rear){
                    std::cout<<"NULL | ";
                }
                else{
                    std::cout<<qu[i];
                    std::cout<<" | ";
                }
            }
        }
    }

    // 큐가 비어있는지 확인하는 메서드
    bool isEmpty()const{
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    //큐가 전부 차있는지 확인하는 메서드
    bool isFull()const{
        if(rear==queueSize-1){
            return true;
        }
        else{
            return false;
        }
    }

    //큐의 끝에 요소를 추가하는 메서드
    void enQueue(int item){
        if(!isFull()){
            this->qu[rear+1]=item;
            rear++;
        }  
        else if(isFull()){
            std::cout<<"OVERFLOW";
        }      
    }

    //큐의 앞에서 요소를 제거하는 메서드
    int deQueue(){
        int item;
        if(!isEmpty()){
            front++;
            return this->qu[front];
        }
        else if(isEmpty()){
            std::cout<<"UNDERFLOW";
        }
    }
};


int main(){
    Queue q1(3);
    q1.queuePrint();std::cout<<std::endl;
    q1.enQueue(1);
    q1.enQueue(2);
    q1.queuePrint();std::cout<<std::endl;
    q1.deQueue();
    q1.queuePrint();
    if(q1.isEmpty()){
        std::cout<<"EMPTY";
    }
    else if(!q1.isEmpty()){
        std::cout<<"!EMPTY"<<std::endl;
    }
    q1.deQueue();
    q1.queuePrint();
    q1.deQueue();//언더플로우가 발생
    return 0;
}