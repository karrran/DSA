#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode *next;

    ListNode(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(ListNode *&tail, int d){
    ListNode *temp = new ListNode(d);
    tail->next  = temp;
    tail = temp;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* dummy = new ListNode(NULL);
    ListNode* temp = dummy;
    int carry = 0;
    while(l1!=NULL || l2!=NULL || carry){
        int sum = 0;
        if(l1->data!=NULL){
            sum+=l1->data;
            l1=l1->next;
        }

        if(l2!=NULL){
            sum+=l2->data;
            l2 = l2->next;
        }

        sum+=carry;
        carry = sum/10;
        ListNode *node = new ListNode(sum);
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
}