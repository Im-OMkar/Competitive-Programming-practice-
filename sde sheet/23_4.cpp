class solution
{
	public:

		bool checkcyc(int i, vector<int> adj[], int V, vector<int> &vis){
			queue<pair<int, int>>q;
			vis[i]= true;
			q.push({i, -1});

			while(!q.empty()){
				int node=q.front().first;
				int prev= q.front().second;
				q.pop();
				for(auto it: adj[node]){
					if(!vis[it]) {
						vis[i]=true;
						q.push({it, node});
					}

					else if(prev!=it) return true;

				}
			}
			return false;
		}

	public:

		bool iscycle(vector<int> adj[], int V){
			vector<int> vis(V,0);

			for(int i=0 ; i<V; i++){
				if(!vis[i]) return checkcyc(i, adj, V, vis);

			}
			return false;
		}
};