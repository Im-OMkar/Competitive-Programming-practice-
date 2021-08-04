class Solution {
     
    int solve (Node *node){
        if(!node) return 0;
        int lsum= solve(node->left);
        int rsum=solve(node->right);
        int x=node->data;
        node->data=lsum+rsum;
        return lsum+rsum+x;
    }
    
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    void toSumTree(Node *node)
    {
        // Your code here
       solve(node);
    }
};