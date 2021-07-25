#include<bits/stdc++.h>
using namespace std;
//1st negative number in wondow of size k
int main(){
int k;
int i=0, j=0;
int sum=0;
while(j<arr.size()){
	if(arr[j]<0) l.push_back(arr[j]);
	if(j-i+1<k){
		j++;
	}
	else if(j-i+1==k){
		if(l.size()==0) ans.push_back(0);
		else{
			ans.push_back(l.front());
			if(arr[i]==l.front) l.pop_front();
		}
		
	}
	i++;j++;
}
cout<<ans;
}