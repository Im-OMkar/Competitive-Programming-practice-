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

int main(){
	int n,m; cin>>n>>m;
	vector<node>edges;

	for(int i=0; i<m; i++){
	int u,v,wt; cin>>u>>v>>wt;
	edges.push_back(node(u,v,wt));
}

int src; cin>>src;

vector<int>dist(n,INT_MAX);
dist[src]=0;
for(int i=1; i<=n-1; i++){
	for(auto it: edges){
		if(dist[it.u]+it.wt<dist[it.v]) dist[it.v]=dist[it.u]+it.wt;
	}
}

int flag=0;

for(auto it: edges){
		if(dist[it.u]+it.wt<dist[it.v]){
			flag=1;
			break;
		}
	}

if(flag==0)
cout<<dist; //for loop to display dist vector;
}

//tc= mn;