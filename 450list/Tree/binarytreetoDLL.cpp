class Solution

{   
    public :
    void solve(Node* root, Node* &head, Node* &prev){
    if(!root) return ;
    solve(root->left, head, prev);
    
    if(prev==NULL){                           //when first node
       
        head=root;
        prev=root;
    }
    else{                                      //connecting new node to prev prev<->root
        prev->right=root;
        prev->right->left=prev;
        prev=prev->right;
    }
    
    solve(root->right, head, prev);
}
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
        Node* head=NULL;
        Node* prev=NULL;
        int f=0;
        solve(root,head,prev);
        return head;
    }
};