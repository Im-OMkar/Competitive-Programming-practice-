#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op){

	string str[]= {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };

    for(int i=0; i<ip.length(); i++){
    	string t= str[ip[i]-'A'];
    	op+=t;
    }
    cout<<op;

}
	


int main(){
	
	string ip="CODENCODE";
	string op="";
	solve (ip, op);

}

