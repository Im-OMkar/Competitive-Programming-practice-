#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node* insertbst(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    
    if(val<=root->data){
        root->left=insertbst(root->left, val);
    }
    
    else{
       root->right= insertbst(root->right, val);
    }
    
    return root;
}

void inorder(Node* root){
    if(root==NULL) return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

void preorder(Node* root){
    if(root==NULL) return;
    
   
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

void postorder(Node* root){
    if(root==NULL) return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    Node* root=NULL;
    int temp; cin>>temp;
    root=insertbst(root, temp);
    for(int i=1; i<n; i++){
        
        int t; cin>>t;
        insertbst(root, t);
        
    }
    
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}
