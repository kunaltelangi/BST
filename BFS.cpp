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

void BFS(node* root){
    queue<node*> q;
    q.push(root);
    int cnt = 1;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right)q.push(temp->right);
        if(temp->left)q.push(temp->left);
    }
}

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

int main(){
    node* root = NULL;
    takeip(root);
    BFS(root);
    return 0;
}
