class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
         map<int,int>mp;
        queue<pair<Node*,int>> q;
        vector<int> ans;
        
        if(!root) return ans;
        
        q.push({root,0});
        while(!q.empty()){
            Node* t=q.front().first;
            int h= q.front(). second;
            q.pop();
            mp[h]= t->data; //only diff from top view - as we traverse just keep updating map
            
            if(t->left) q.push({t->left,h-1});
            if(t->right) q.push({t->right,h+1});
        }
        
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};