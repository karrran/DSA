#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    //constructor
    node(int data){
        this->data=data;
        this->next = NULL;
    }

    //destructor
    ~node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(node* &head,int d){
    node* temp = new node(d);           //create a new node that is to be inserted at the beginning
    temp->next = head;                  //next of that node contains the address of the head, the first node that head was pointing to.
    head = temp;                        //since head always points to the first node of the ll, now head needs to point to this newly inserted node.
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next=temp;     //previous node's address part now contains the address of the newly inserted node, hence the node is inserted at the tail
    tail=temp;           // tail should always point to the last node hence it keeps pointing to the newly inserted node at the end.  
}

void insertAtPosition(node* &head, node* &tail, int pos, int d){

    //inset at starting position
    if(pos==1){
        insertAtHead(head,d);
        return; 
    }

    //reaching the pos-1th node
    node* temp = head;
    int cnt = 1;
    while(cnt<(pos-1)){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    //inseting in the middle
    node* nodeToBeInserted = new node(d);
    nodeToBeInserted->next = temp->next;
    temp->next = nodeToBeInserted;
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void deleteNode(node* &head, node* &tail, int pos){
    //delete the starting node
    if(pos==1){
        node* temp = head;
        head=head->next;
        temp->next = NULL;
        delete temp;
    }

    //delete at pos or last node
    else{

        node* prev = NULL;
        node* curr = head;

        int cnt = 1;

        while(cnt<pos){
            prev = curr;
            curr=curr->next;
            cnt++;
        }
        
        if(curr->next==NULL){
            tail=prev;
            return;
        }

        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    node* node1 = new node(20);
    node* tail = node1;
    node *head = node1;

    cout<<node1->data<<endl;
    cout<<node1->next;

}