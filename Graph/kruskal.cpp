//Kruskalalgo
#include<bits/stdc++.h>
using namespace std;

struct node{
	int u,v,wt;
	node(int first, int sec, int wweight){
		u=first;
		v=sec;
		wt=weight;
	}
};

bool comp(node a, node b){
	return a.wt<b.wt;
}

int find_par(int u, vector<int> &parent){
	if(u==parent[u]) return u;

	return parent[u]=find_par(parent[u], parent);
  }

void unionn(int u, int v, vector<int> &parent, vector<int> &rank ){
	u=find_par(u);
	v=find_par(v);

	if(rank[u]<rank[v]) parent[u]=v;
	else if(rank[v]<rank[u]) parent[v]=u;
	else{
		parent[v]=u;
		rank[u]++;
	}
}

int main(){
	int n,m; cin>>n>>m;
	vector<node>edges;

	for(int i=0; i<m; i++){
	int u,v,wt; cin>>u>>v>>wt;
	edges.push_back(node(u,v,wt));
}

sort(edges.begin(), edges.end(), comp);

vector<int>parent(n);
vector<int>rank(n,0);

int cost=0;

vector<pair<int, int>> mst;

for(auto it: edges){
	if(find_par(it.v, parent)!=find_par(it.u, parent)){
		cost+=it.wt;
		mst.push_back(make_pair(it.u, it.v));
		unionn(it.u, it.v, parent, rank);
	}
}

cout<<cost;

//for graph print parent;
}