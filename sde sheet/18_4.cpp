bool heightbal(Node* root){
	if(root==NULL) return true;

	if(heightbal(root->left)==false) return false;
	if(heightbal(root->right)==false) return false;

	int lh= calheight(root->left); // calculate height func in 18_3
	int rh=calheight(root->right);

	if(abs(lh-rh)<=1) return true;
	else return false;
}