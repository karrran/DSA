#include<bits/stdc++.h>
using namespace std;

class CQueue{
    public:
    int *arr;
    int size;
    int qfront;
    int qrear;

    CQueue(int s){
        this->size=s;
        arr = new int[s];
        qfront = -1;
        qrear = -1;
    }

    void enqueue(int num){
        if(qfront==0&&qrear==size-1){
            cout<<"Queue is full"<<endl;
        }
        else if(qrear=(qfront-1)%(size-1)){
            cout<<"Queue is full"<<endl;
        }
        else if(qrear==size-1&&qfront!=0){
            qrear=0;
            arr[qrear]=num;
        }
        else if(qfront==-1){
            qfront = 0;
            qrear = 0;
            arr[qrear]=num;
        }
        else{
            qrear++;
            arr[qrear]=num;
        }
    }

    void dequeue(){
        if(qfront==-1){
            cout<<"Queue is empty!"<<endl;
        }
        else if(qfront==qrear){
            qfront = qrear = -1;
        }
        else if(qfront==size-1){
            qfront==0;
        }
        else{
            qfront++;
        }

    }
};