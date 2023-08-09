#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        if(this->next!=NULL){
            this->next = NULL;
            delete next;
        }
    }
};

void printNode(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int Length(Node *&head){
    Node *temp = head;
    int cnt =0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

void insertAtHead(Node *&head, Node *&tail, int d){
    if(head == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
    
}

void insertAtTail(Node *&tail, Node *&head, int d){
    if(tail == NULL){
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
}

void insertAtPos(Node *&head, Node *&tail, int pos, int d){
    
    if(pos == 1){
        insertAtHead(head,tail,d);
        return;
    }

    else{
        Node *curr = head;
        int cnt = 1;
        while(cnt<pos-1){
            curr = curr->next;
            cnt++;
        }

        if(curr->next==NULL){
            insertAtTail(tail,head,d);
            return;
        }

        Node *temp = new Node(d);
        curr->next->prev = temp;
        temp->next = curr->next;
        temp->prev = curr;
        curr->next = temp;
    }
}

void deleteNode(int pos, Node *&head, Node *&tail){
    if(pos == 1){
        Node *temp=head;
        head=head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    else{
        Node *curr = head;
        int cnt=1;
        while(cnt<pos){
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            curr->prev->next = NULL;
            tail = curr->prev;
            curr->prev = NULL;
            delete curr;
            return;
        }

        Node *prevNode = curr->prev;
        Node *nextNode = curr->next;
        prevNode->next = curr->next;
        nextNode->prev = curr->prev;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;

    }
}

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head,tail,50);
    insertAtHead(head,tail,13);
    insertAtHead(head,tail,11);
    insertAtTail(tail,head,37);
    insertAtPos(head,tail,3,2);
    deleteNode(6,head, tail);
    cout<<Length(head)<<endl;
    printNode(head);
    //cout<<node1->next<<endl;
    //cout<<node1->prev<<endl;
}