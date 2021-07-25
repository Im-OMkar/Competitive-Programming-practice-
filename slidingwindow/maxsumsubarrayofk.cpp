#include<bits/stdc++.h>
using namespace std;
//max sum subarray of sizek
int main(){
int k;
int i=0, j=0;
int sum=0;
while(j<arr.size()){
	sum+=arr[j];
	if(j-i+1<k){
		j++;
	}
	if(j-i+1==k){
		maxsum=max(maxsum, sum);
		sum-=arr[i];
		i++;
		j++;
	}
}
cout<<sum;
}