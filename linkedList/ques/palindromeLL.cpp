#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode *next;

    ListNode(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(ListNode *&tail, int d){
    ListNode *temp = new ListNode(d);
    //temp->next = NULL;
    tail->next=temp;
    tail=temp;
}

ListNode* reverseList(ListNode *&head){
    ListNode* pre = NULL;
    ListNode* next = NULL;
    while(head!=NULL){
        next = head->next;
        head->next = pre;
        pre = head;
        head = head->next;
    }
    return pre;
}

bool isPalindrome(ListNode *&head){
    if(head==NULL||head->next==NULL){
        return true;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow = slow -> next;
        fast = fast->next->next;
    }

    slow->next = reverseList(slow->next);
    slow = slow->next;

    while(slow!=NULL){
        if(head->data!=slow->data) return false;

        slow = slow->next;
        head = head->next;
    }
    return true;
}

void print(ListNode *&head){
    ListNode *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    ListNode *node1 = new ListNode(1);
    ListNode *head = node1, *tail = node1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);

    print(head);

    cout<<isPalindrome(head);


    
}