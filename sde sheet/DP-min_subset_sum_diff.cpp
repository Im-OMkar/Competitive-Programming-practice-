#include<bits/stdc++.h>
using namespace std;
 
int subsetsum(int arr[], int sum, int n){
	bool t[n+1][sum+1]; 
	for(int i=0; i<n+1; i++){
		t[i][0]=true;
	}

	for(int j=1; j<sum+1;j++){
		t[0][j]=false;
	}

	for(int i=1; i<n+1; i++){
		for(int j=1; j<sum+1; j++){

			if(arr[i-1]<=j){
				t[i][j]= t[n-1][j] | t[n-1][j-arr[n-1]] ;
			}else{

				t[i][j]=t[n-1][j];
			}

		}
	}

	vector<int> res;
	for(int j=0; j< (sum+1)/2; j++){
		if(t[n][j]==true) res.push_back(j);
	}

	int mn=INT_MAX;

	for(int i=0; i<res.size(); i++){
		mn=min(mn, sum- 2*res[i]);
	}

	return mn;


}


int main(){

int n; cin>>n;
int arr[n];
int range=0;

for(int i=0; i<n;i++){
cin>>arr[i];
range+=arr[i];
}

cout<< subsetsum(arr, range, n);

}
	
