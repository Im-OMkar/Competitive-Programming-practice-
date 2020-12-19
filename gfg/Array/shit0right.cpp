#include<bits/stdc++.h>
using namespace std;

void shift0rigth(vector<int>v, int n){
  int cnt=0;
  for(int i=0; i<n; i++){
    if(v[i]!=0){
      swap(v[i], v[cnt]);
      cnt++;
    }

  }
} 
