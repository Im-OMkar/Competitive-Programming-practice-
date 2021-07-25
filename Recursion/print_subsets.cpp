#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op){
	if(ip.size()==0){
		cout<<op<<endl;             //for printing subsets
		return;
	}
	string op1=op; //when we dont take particular slice of string
	string op2=op; //when we take it

	op2.push_back(ip[0]); // for output to print and generate subset

	ip.erase(ip.begin() + 0); //remove taken ele

	solve(ip, op1); //call rec when not taken

	solve(ip, op2);// call rec when taken

	return;

}
	


int main(){
	
	string ip="abcd";
	string op="";
	solve (ip, op);

}