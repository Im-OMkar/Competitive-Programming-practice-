int f=1;
int solve(Node* root){
    if(!root) return 0;
    
    int x=solve(root->left);
    int y=solve(root->right);
    
    if(abs(x-y)>1) f=0;
    return max(x,y)+1;
    
}

bool isBalanced(Node *root)
{
    //  Your Code here
    f=1;
    
    solve(root);
    return f;
    
}