#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node *&tail, int element, int d){
    //assuming that the element is present in the list

    if(tail==NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty list
        //assuming that the element is present in the list
        Node *curr = tail; //pointing to the element to which the tail is pointing
        
        while(curr->data!=element){
            curr=curr->next;
        }

        //if we are outside the loop that means the element has been found and current is representing that element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;



    }

}

void print(Node *&tail){
    Node *temp = tail;

    if(tail==NULL){
        cout<<"The list is empty!"<<endl;
    }

    
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
}

void deleteNode(Node *&tail, int value){

    //empty list
    if(tail == NULL){
        cout<< "List is empty, please check again"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr -> data != value){
            prev = curr;
            curr=curr->next;
        }

        prev->next = curr->next; //curr node deleted nothing points to it now

        if(curr==prev){
            tail=NULL;
        }

        if(tail == curr){
            tail = prev;
        }


        curr->next=NULL;
        delete curr; //deleting the the node now.

    }
}

int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    
}