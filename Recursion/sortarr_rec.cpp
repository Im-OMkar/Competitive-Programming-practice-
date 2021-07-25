#include<bits/stdc++.h>
using namespace std;

void insertarr(vector<int> &v, int temp){
	if(v.size()==0 || v[v.size()-1]<=temp){ // for v.size=0: if no ele in arr just insert
											// for v[v.size-1]<=temp: if last ele is smaller than ele we r inserting then just insert
		v.push_back(temp);
		return;
	}

	int val= v[v.size()-1]; // temp store val to insert after ele inserting temp as v[v.size-1]> temp
	v.pop_back();
	insertarr(v,temp); 

	v.push_back(val);// insert again removed ele

	return;
}

void sortarr(vector<int> &v){
	if(v.size()==1) return; // base: if only one ele no need to sort

	int temp= v[v.size()-1]; // storing last ele to push back again after sort line 28 for insert

	v.pop_back(); // thinking about next rec call to one less element 

	sortarr(v); // hyp

	insertarr(v,temp); // recursively inserting element into its perfect pos
}

int main(){
	
	vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(7);
	v.push_back(6);
	v.push_back(1);

	sortarr(v);

	for(auto x: v){
		cout<< x<<" ";
	}

}