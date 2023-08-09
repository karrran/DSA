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

node* reverseKGroup(node *&head,int k){
    if(head == NULL || k==1) return head;

    node *dummy = new node(0);
    dummy->next = head;

    node *cur = dummy, *nex = dummy, *pre = dummy;
    int count = 0;

    while(cur -> next !=NULL){
        cur = cur->next;
        count++;
    }

    while(count >= k){
        cur = pre->next;
        nex = cur->next;
        for(int i = 1; i<k; i++){
            cur -> next = nex -> next;
            nex -> next = pre -> next;
            pre -> next = nex;
            nex = cur -> next;
        }
        pre = cur;
        count-=k;
    }
    return dummy-> next;


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

    

    
}