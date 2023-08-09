#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void insertAtHead(node *&head,int d){
    node *temp = new node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(node *&tail,int d){
    node *temp = new node(d);
    tail->next = temp;
    temp->next=NULL;
    tail=temp;
}

void insertAtPos(node *&head, node *&tail, int pos, int d){
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    node *temp = head;
    int cnt = 1;
    while(cnt<(pos-1)){
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    node *newNode = new node(d);
    newNode->next = temp->next;
    temp->next = newNode;

}

node* middleNode(node *&head){
    node *slow = head, *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;               
}

int main(){
    node *node1 = new node(6);
    node *head = node1;
    node *tail = node1;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

    node* middle = middleNode(head);

    cout<<middle->data;
}