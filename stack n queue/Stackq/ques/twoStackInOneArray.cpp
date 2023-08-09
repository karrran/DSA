#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int s){
        this->size=s;
        arr=new int[s];
        top1=-1;
        top2=s;
    }

    void push1(int element){
        //atleast one empty space is present;
        if(top2-top1>1){
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void push2(int element){
        if(top2-top1>1){
            top2--;
            arr[top2]=element;
        }
        else{
            cout<<"Stack overflow";
        }
    }

    int pop1(){
        if(top1>=0){
            int temp=arr[top1];
            top1--;
            return temp;
            
        }
        else{
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
    }

    int pop2(){
        if(top2<size-1){
            int temp = arr[top2];
            top2++;
            return temp;
        }
        else{
            return -1;
        }
    }
};