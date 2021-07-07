class Solution
{
    
    public:
    	
    void dfs(int i, vector<int> adj[], vector<int> & vis, stack<int> &st){
    vis[i]=1;
    for(auto it: adj[i]){
        if(!vis[it]) dfs(it, adj, vis, st);
    }
    st.push(i);
}

    void revdfs(int node, vector<int> trans[], vector<int> &vis){
        vis[node]=1;
        
        for(auto it: trans[node]){
            if(!vis[it ]) revdfs(it, trans, vis);
        }
  
    }


	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        int n=0;
         stack<int> st;
        vector<int> vis(V,0);
        
        for(int i=0; i<V; ++i){
            if(!vis[i]) dfs(i, adj, vis, st);
        }
        
        vector<int> trans[V];
        
        for(int i=0; i<V; ++i){
            vis[i]=0;
            for(auto it: adj[i]){
                trans[it].push_back(i);
            }
        }
        
        while(!st.empty()){
            int node= st.top();
            st.pop();
            
            if(!vis[node]){
                revdfs(node, trans, vis);
                n+=1;
            }
        }
        return n;
        
    }
};