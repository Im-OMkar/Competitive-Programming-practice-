#include <bits/stdc++.h>
using namespace std;
//union
int main() {
    int t;
    cin>>t;
    while(t--){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	for(int i=0; i<m; i++){
	    cin>>b[i];
	}
	int temp;
	
	set<int>s;
	for(int i=0; i<n; i++){
	    temp=a[i];
	    s.insert(temp);
	}
	
	for(int i=0; i<m; i++){
	    temp=b[i];
	    s.insert(temp);
	}
	
	cout<<s.size()<<endl;
	
    }
	return 0;
}