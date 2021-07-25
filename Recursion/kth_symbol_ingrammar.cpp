#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k){
	if(n==1 and k==1) return 0;               


	int mid=pow(2,n-1)/2; 

	if(k<=mid){
		return solve(n-1,k); 
	}else{
		return !solve(n-1, k-mid);
	}


}

int main(){
	
int n=3, k=2;
cout<<solve(n,k);

}

/* 0
01
0110
01101001
0110100110010110

if we look at the pattern half o fthe pattern is same as prev and remaining half is complement of prev grammar

