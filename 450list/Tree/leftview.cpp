vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(!root) return ans;
   
   queue<Node*> q;
   q.push(root);
   
   while(!q.empty()){
       int sz= q.size();
       ans.push_back(q.front()->data);
       while(sz--){
           Node* t= q.front();
           q.pop();
           if(t->left) q.push(t->left);
           if(t->right) q.push(t->right);
           
       }
   }
   return ans;
}