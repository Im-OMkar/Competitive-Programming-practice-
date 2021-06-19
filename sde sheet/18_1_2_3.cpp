void levelorder(Node* root){
	if(root==NULL) return;
	queue<Node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		Node* node= q.front();

		if(node!=NULL){
			cout<<node->data;
			q.pop;
			if(node->left) q.push(node->left);
			if(node->right) q.push(node->right);
		}else if(!q.empty){
			q.push(NULL);
		}
	}
}

int calheight(Node* root){
	if(root==NULL) return 0;
	int lh= calheight(root->left);
	int rh= calheight(root->height);

	return rh+lh+1;
}

int caldia(Node* root, int * height){

	if(root==NULL){
		*height=0;
		return 0;
	}
	int lh=0, rh=0;

	int ldia= caldia(root->left, &lh);
	int rdia= caldia(root->right, &rh);

	int curd=rh+lh+1;
	*height=max(lh,rh)+1;

	return mac(curd, max(ldia, rdia));
}