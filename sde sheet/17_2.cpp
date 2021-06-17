void preorder(struct TreeNode* root){
    if(root == NULL) return ;
    printf("%d ", root->x);
    preorder(root->L);
    preorder(root->R);
}