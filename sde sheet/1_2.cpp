#include<bits/stdc++.h>
using namespace std;


int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
vector<int>v;
int n,temp; cin>>n;
for(int i=0;i<n; i++){
	cin>>temp;
	v.push_back(temp);
}

int low=0, mid=0, high=n-1;
while(mid<=high){
	switch(v[mid]){
		case 0: swap(low,mid);
		low++; mid++;
		break;

		case1: mid++;
		break;

		case2: swap(mid, high);
		high--;
		break;
	}

}
for(int i=0;i<n; i++){
	cout<<v[i];
}
return 0;

}
