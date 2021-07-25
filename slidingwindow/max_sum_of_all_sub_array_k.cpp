#include<bits/stdc++.h>
using namespace std;
//1st negative number in wondow of size k
int main(){
int k;
int i=0, j=0;
deque<int>l;
while(j<arr.size()){
	
	
	while(l.size()>0 and arr[j]>l.back()){//calculation
		l.pop_back();
	}
	l.push_back(arr[j]);

	if(j-i+1<k){
		j++;
	}

	else if(j-i+1==k){
	ans.push_back(l.front());
	if(l.front == arr[i]) l.pop_front();	
		
	}
	i++;j++;
}
cout<<ans;
}