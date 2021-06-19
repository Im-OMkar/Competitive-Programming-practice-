void leftview(Node* root){
	if(root==NULL) return;

	queue<Node*> q;
	q.push(root);

	while(!q.empty()){
		Node* node= q.fromt();
		int n=q.size();
		q.pop();
		for(int i=0; i<n; i++){
			if(i==1) cout<<node->data;
			if(node->left)q.push(node->left);
			if(node->right)q.push(node->right);
		}
	}
}