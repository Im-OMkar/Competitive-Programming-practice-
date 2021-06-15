#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &sdfs){
sdfs.push_back(node);
vis[i]==1;
for(auto it: adj[node]){
	if(!vis[i]){
		dfs(it, vis, adj, sdfs);
	}
}
}

vector<int>bfsgraph(int n, vector<int>adj){
	vector<int>vis(n+1, 0);
	vector<int>sdfs;
	for(int i=0; i<=n; i++){
		if(!vis[i]){
			dfs(i, vis, adj, sdfs);
		}
	}
	return sdfs;
}

int main(){


}
	
