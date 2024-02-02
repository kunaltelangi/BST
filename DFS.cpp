#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int val;
        node* left;
        node* right;
        node(int val){
            this->val = val;
            this->right = NULL;
            this->left = NULL;
        }
};

node* ins(node* root,int n){
    if(root == NULL){
        root = new node(n);
        return root;
    }

    if(n > root->val){
        root->right = ins(root->right,n);
    }
    else root->left = ins(root->left,n);
    return root;
}

void takeip(node* &root){
    int n;
    cout<<"Enter the values to create BST"<<endl;
    cin>>n;
    while(n!=-1){
        root = ins(root,n);
        cin>>n;
    }
}

void inOrder(node* root){
    if(root == NULL)return;

    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root == NULL){
        return;
    }
    //cout<<endl;
    cout<<root->val<<" ";
    inOrder(root->left);
    inOrder(root->right);
}

void postOrder(node* root){
    if(root == NULL)return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}

int main(){
    node* root = NULL;
    takeip(root);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    

    return 0;
}
