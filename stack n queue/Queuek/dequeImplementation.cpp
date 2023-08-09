#include<bits/stdc++.h>
using namespace std;

class Dequeue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Dequeue(int s){
        this->size=s;
        arr = new int[s];
        front =-1;
        rear=-1;
    }

    bool pushFront(int x){
        //to check whether the queue is full
        if((front==0)&&(rear=size-1) || (rear==(front-1)%(size-1))){
            cout<<"queue is full";
            return false;
        }

        //first element insertion
        else if(front==-1){
            front=rear=0;
            arr[front]=x;
        }

        //maintain cyclic nature
        else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=x;
        }

        //free flow
        else {
            front--;
            arr[front]=x;
        }
        return true;
    }

    bool pushBack(int x){
        //check if the queue is full
        if((front==0)&&(rear==size-1)||(rear=front-1)%(size-1)&&front!=0){
            cout<<"Queue is full"<<endl;
            return false;
        }

        //first element to insert
        else if(front==-1){
            front=rear=0;
            arr[rear]=x;
        }

        //to maintain cyclic nature
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=x;
        }

        //normal flow
        else{
            rear++;
            arr[rear]=x;
        }
        return true;
    }

    int popFront(){
        //check if queue is empty
        if(front==-1){
            cout<<"Queue is empty!";
        }

        //single element is present
        else if(front==rear){
            int temp = front;
            front=rear-1;
            return arr[temp];
        }

        //to maintain cyclic nature
        else if(front==size-1){
            int temp=front;
            front=0;
            return arr[temp];
        }

        else{
            int temp=front;
            front++;
            return arr[temp];
        }
    }

    int popBack(){
        //if queue is empty
        if(front==-1){
            cout<<"Queue is empty";
            return -1;
        }

        //single element is present in the queue
        else if(front==rear){
            int temp=rear;
            front=rear=-1;
            return arr[temp];
        }

        //maintain cyclic nature
        else if(rear==0){
            rear=size-1;
            return arr[0];
        }

        //normal flow
        else{
            int tmp=rear;
            rear--;
            return arr[tmp];
        }
    }
};