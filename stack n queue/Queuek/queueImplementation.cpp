#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int s){
        this->size=s;
        arr= new int[s];
        front=0;
        rear=0;
        
    }

    void enqueue(int num){
        if(rear==size){
            cout<<"queue is full";
        }
            arr[rear]=num;
            rear++;
        
    }

    void dequeue(){
        if(rear==front){
            cout<<"Queue is empty"<<endl;
        }
        else{
            front++;
            if(rear==front){
                rear=0;
                front=0;
            }
        }
    }

    bool isEmpty(){
        if(rear==front){
            return true;
        }
        else{
            return false;
        }
    }

    int frontE(){
        if(rear==front){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int sizee(){
        if(rear==front){
            return 0;
        }
        else{
            return rear-front;
        }
    }
};

int main(){
    Queue q(10);

    q.enqueue(1);
    q.enqueue(58);
    q.enqueue(47);
    q.enqueue(7);
    q.enqueue(78);
    q.enqueue(5);

    cout<<q.frontE()<<endl;
    cout<<q.sizee()<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout<<q.frontE()<<endl;
    cout<<q.sizee()<<endl;
    cout<<q.isEmpty()<<endl;

}