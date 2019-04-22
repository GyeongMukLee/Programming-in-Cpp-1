#include<iostream>

class Stack{
private:
    int *st;
    int stackSize;
    int top=-1;

public:
    //생성자
    Stack(int maxSize){
        stackSize=maxSize;
        st=new int[stackSize];
        for(int i=0;i<stackSize;i++){   //스택을 초기화
            st[i]=0;
        }
    }

    //소멸자
    ~Stack(){
        delete[] st;
    }

    //스택을 프린트하는 메서드. 인수가 true로 들어가면 top를 표시한다. 기본값은 false. 
    void printStack(bool t=false)const{
        std::cout<<"||";
        if(t==true){
            for(int i=0;i<stackSize;i++){
                if(i==top){
                    std::cout<<"T";
                }
                std::cout<<st[i];
                std::cout<<" | ";
            }
        }
        else if(t==false){
            for(int i=0;i<stackSize;i++){
                if(i>top){
                    std::cout<<"NULL";
                }
                else{
                    std::cout<<st[i];
                }
                std::cout<<" | ";
            }
        }
    }
};