#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(node *&tail, int element, int d){

    if(tail==NULL){
        node *newNode = new node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else{
        node *curr = tail;

        while(curr->data!=element){
            curr = curr->next;
        }

        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node *&tail){
    if(tail==NULL){
        cout<<"The list is empty";
    }

    else{
        node* temp = tail;

        do{
            cout<<tail->data<<" ";
            tail = tail->next;
        }while(tail!=temp);
    }
}

void deleteNode(node *&tail, int value){

    if(tail == NULL){
        cout<<"The list is empty";
        return;
    }
    else{
    node *prev = tail;
    node *curr = prev->next;

    while(curr->data!=value){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;

    if(prev==curr){
        tail=NULL;
    }

    if(curr = tail){
        tail = prev;
    }

    curr->next = NULL;
    delete curr;
    }
    

}

int main(){
    node *tail = NULL;
    
}