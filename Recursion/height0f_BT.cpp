#include<bits/stdc++.h>
using namespace std;


struct Node{
	int val;
	struct Node* left;
	struct Node* right;
	Node(int data){
		val=data;
		left=NULL;
		right=NULL;
	}
};

int height(struct Node* root){

if(root==NULL) return 0; //base smallest valid input 

int lh= height(root->left); //nxt smallest input <- hyp
int rh=height(root->right);

return max(lh,rh)+1; //induction as we want max height and +1 coz condiering height of the root
}

int main(){
	struct Node* root = new Node(1);
	root->left=new Node(2);
	root->right= new Node(3);
	root->left->left= new Node(4);
	root->left->left->left= new Node(5);

	cout<< height(root);

}