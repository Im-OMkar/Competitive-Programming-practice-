class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(!node) return 0;
        
        int lh= height(node->left);
        int rh= height(node->right);
        
        return max(lh, rh)+1;
    }
};