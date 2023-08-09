// #include<bits/stdc++.h>
// using namespace std;

// class list1{
//     public:
//     int data;
//     list1 *next;

//     list1(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class list2{
//     public:
//     int data;
//     list2 *next;

//     list2(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead1(list1 *&head1,int d){
//     list1 *temp = new list1(d);
//     temp->next = head1;
//     head1 = temp;
// }

// void insertAtHead2(list2 *&head2, int d){
//     list2 *temp = new list2(d);
//     temp->next = head2;
//     head2 = temp;
// }

// int main(){
//     list1 *node1 = new list1(9);
//     list1 *head1 = node1;

//     insertAtHead1(head1,7);
//     insertAtHead1(head1,5);

//     list2 *node2 = new list2(10);
//     list2 *head2 = node2;

//     insertAtHead2(head2,8);
//     insertAtHead2(head2,4);
//     insertAtHead2(head2,3);
// }

// ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
//     if(l1==NULL) return l2;
//     if(l2==NULL) return l1;

//     if(l1->val>l2->val){
//         swap(l1,l2);
//     }
//     ListNode *res = l1; 
//     while(l1!=NULL&&l2!=NULL){
//         ListNode *tmp = NULL;
//         while(l1->val<=l2->val && l1!=NULL){
//             tmp = l1;
//             l1=l1->next;
//         }
//         tmp->next = l2;
//         swap(l1,l2);
//     }
//     return res;
// }