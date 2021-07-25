//prims algo

#include<bits/stdc++.h>
using namespace std;

int main(){
int m,n;cin>>m>>n;

vector<int>adj[n];

for(int i=0; i<m; i++){
	int u,v,wt; cin>>u>>v>>wt;
	adj[u].push_back(make_pair(v,wt));
	adj[v].push_back(make_pair(u,wt));
}

int key[n];
bool mstset[n];
int par[n];

for(int i=0; i<n; i++){
	key[i]=INT_MAX; mstset[i]=false;
}

key[0]=0;
par[0]=-1;

priority_queue<pair<int,int>, vector<int,int>, greater<pair<int,int>>>pq;

pq.push(make_pair(0, 0));

while(!pq.empty()){
	int u= pq.top().second;
	pq.pop();

	for(auto it: adj[u]){
		int v= it.first;
		int weight=it.second
		if(mstset[it]==false and weight<key[v]){
			parent[v]=u;
			key[v]=weight;
			pq.push(make_pair(weight, v));
		}
	}
}

for (int i = 1; i < N; i++) 
        cout << parent[i] << " - " << i <<" \n"; 
	return 0;

}