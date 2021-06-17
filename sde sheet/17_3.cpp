void postorder(TreeNode * root){
    if(root==NULL) return;
    postorder(root->L);
    postorder(root->R);
    printf("%d ", root->x);
}