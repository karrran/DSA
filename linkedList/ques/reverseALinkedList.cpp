#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next = NULL;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        cout<<"Node with value "<<this->data<<" has been deleted"<<endl;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void insertAtHead(Node *&head, int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail,int d){
    Node *temp = new Node(d);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}

void insertAtPos(Node *&head, Node *&tail, int pos, int d){

    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
  
    while(cnt<(pos-1)){
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next=newNode;
}

void print(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void reverselist(Node *&head){
    Node* newHead = NULL;
    while(head!=NULL){
        Node *next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }
    head = newHead;
}


int main(){
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail= node1;

    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

    print(head);
    reverselist(head);
    cout<<endl;
    print(head);

}