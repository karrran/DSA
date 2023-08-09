#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node *root){ //passed the root pointer to the function
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);   //created an object aka node, to which the root pointer points. it points to the pbject created.

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in left: "<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter data for inserting in right: "<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
            }
        
    }
}

void inorder(node *root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node *root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* buildFromLevelOrder(node* root){
    queue<node*> q;
    cout<<"Enter data for root: ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
    node *root = NULL;  //created a pointer to the first node that is to be created, i.e. the root node

    //building tree
    root = buildTree(root);     //called the function that creates the node, passed the root node pointer that will point to the very first object created 

    //level order traversal
    levelOrderTraversal(root);

    return 0;
}