#include<bits/stdc++.h>
using namespace std;

class Stack{
    //data members
    public:
        int *arr;
        int top;
        int size;

    //behaviour
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top=-1;
        }

        void push(int element){
            if(size-top>1){
                top++;
                arr[top] =element;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }

        }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack Underflow"<<endl;
            }
        }

        int peek(){
            if(top>=0 && top<size){
                return arr[top];
            }
            else{
                cout<<"Stack is empty!"<<endl;
                return -1;
            }
            
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

        void print(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                for(int i=top;i>=0;i--){
                    cout<<arr[i]<<endl;
                }
                cout<<endl;
            }
        }
};

int main(){

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.print();

    st.pop();
    st.pop();
    st.pop();

    cout<<st.peek()<<endl;

    cout<<st.isEmpty()<<endl;

    st.print();


}