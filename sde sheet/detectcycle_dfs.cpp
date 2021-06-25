class solution
{
public:

	bool checkcyc(int i, int prev, vector<int> &vis, vector<int> adj[]){
		vis[i]=true;

		for(auto it: adj[i]){
			if(!vis[it]) if(checkcyc(it, i,  vis, adj)) return true;

		}
		return false;
	}

public:

	bool iscycle(vector<int> adj[], int V){
		vector<int> vis(V+1, 0);

		for(int i=1; i<V; i++){
			if(!vis[i])  if(checkcyc(i, -1, vis, adj)) return true; ;
		}

		return false;
	}
}