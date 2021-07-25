//Dijktras algo
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

int source=1;

prority_queue<pair<int,int>, vector<int,int>, greater<pair<int,int>>>pq;
vector<int> dist(n+1,INT_MAX);
dist[source]=0;
pq.push(make_pair(dist[source],source));

while(!pq.empty()){
	int disto=pq.top().first;
	int prev=pq.top().second;
	pq.pop()

	for(auto it: adj[prev]){
		int nxt=it.first;
		int nxtdist=it.second;
		
		if(dist[prev]+nxtdist < dist[nxt]){
			dist[nxt]=dist[prev]+nxtdist;
			pq.push(make_pair(dist[nxt], nxt));
		}
	}
}

cout<<dist; //for loop to display dist vector;
}
//tc=mlogn;