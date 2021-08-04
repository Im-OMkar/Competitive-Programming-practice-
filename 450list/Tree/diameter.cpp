class Solution {
    int ma;
    
    int solve(Node* root){
        if(!root) return 0;
        
        int ld= solve(root->left);
        int rd=solve(root->right);
        
        ma=max(ma,ld+rd+1);
        return max(ld,rd)+1;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        ma=INT_MIN;
        if(!root) return 0;
        
        solve(root);
        return ma;
    }
};