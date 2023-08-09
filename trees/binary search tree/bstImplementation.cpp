#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};

node* insertIntoBST(node* root, int data){
    //base case
    if(root==NULL){
        root=new node(data);
        return root;
    }

    //inserting in right part
    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }

    //inserting in left part
    else if(data<root->data){
        root->left=insertIntoBST(root->left,data);
    }

    return root;
}

void takeInput(node* root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
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

bool searchInBST(node *root,int x){
    if(root==NULL){
        return false;
    }

    if(root->data==x){
        return true;
    }

    if(root->data>x){
        return searchInBST(root->left,x);
    }

    if(root->data<x){
        return searchInBST(root->right,x);
    }
}

bool searchInBSTIterative(node *root,int x){
    node *temp = root;

    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }   
        else if(temp->data>x){
            temp=temp->left;
        }
        else if(temp->data<x){
            temp=temp->right;
        }
    }
    return false;
}

node* minInBST(node *root){
    node *temp = root;
    if(temp==NULL){
        return temp;
    }

    else{
        while(temp->left!=NULL){
            temp=temp->left;
        }
    }

    return temp;
}

node* maxInBST(node *root){
    node *temp = root;

    if(temp==NULL){
        return temp;
    }

    else{
        while(temp->right!=NULL){
            temp=temp->right;
        }
    }
}

node* deleteFromBST(node *root, int val){
    //base case
    if(root==NULL){
        return root;
    }

    //another base case, where the value is found at the root node.
    if(root->data==val){
        //0 child case
        if(root->right==NULL&&root->left==NULL){
            delete root;
            return NULL;
        }

        //1 child case

        //left child
        if(root->left!=NULL&&root->right==NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left==NULL&&root->right!=NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }

        //2 child
        if(root->left!=NULL&&root->right!=NULL){
            int min=minInBST(root->right)->data;
            root->data = min;
            root->right=deleteFromBST(root->right,min);
            return root;
        }
    }

    else if(root->data>val){
        root->left = deleteFromBST(root->left,val);
        return root;
    }

    else{
        root->right = deleteFromBST(root->right,val);
        return root;
    }
}

int main(){
    node *root = NULL;

    cout<<"Enter tree data: "<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
}