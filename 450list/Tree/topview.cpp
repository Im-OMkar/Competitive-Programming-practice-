class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        map<int,int>mp;
        queue<pair<Node*,int>> q;
        vector<int> ans;
        
        if(!root) return ans;
        
        q.push({root,0});
        while(!q.empty()){
            Node* t=q.front().first;
            int h= q.front(). second;
            q.pop();
            if(!mp[h])mp[h]= t->data; //update value only once 
            
            if(t->left) q.push({t->left,h-1});
            if(t->right) q.push({t->right,h+1});
        }
        
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }

};