#include<bits/stdc++.h>
using namespace std;

void calLPS(int n, string pat, int *LPS){
	int len=0;
	int i=1;
	LPS[0]=0; //first element of lps is =0 as for string len=1 no suffix = prefix

	while(i<n){
		if(pat[i]==pat[len]){
			len++;                //
			LPS[i]=len;
			i++;
		}


		else {
			if(len!=0){
				len=LPS[len-1];
			}
			else{
				LPS[i]=0;
				i++;
			}
		}
	}
}

void patmatch(string s, string pat){
	int n=pat.size();
	int m=s.size();

	int LPS[n];

	calLPS(n, pat, LPS);

	int i=0,j=0; 


	while(i<m){
		if(pat[j]==s[i]){
			i++;
			j++;  // if element matches move both pointer to next;
		}

		if(j==n){
			cout<<"found patterm at:"<< i-j;
			j=LPS[j-1];
		}


		else if(i<m and pat[j]!=s[i]){
			if(j!=0) j=LPS[j-1];
			else i++;

		}
	}


}

int main(){
	string s="abxabcabcaby";
	string pat="abcaby";
	patmatch(s,pat);
	return 0;
}