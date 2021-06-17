void inorder(TreeNode* Root)
{
    if(Root==NULL) return;
    inorder(Root->L);
    printf("%d ", Root->x);
    inorder(Root->R);

}