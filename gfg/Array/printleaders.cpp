#include<bits/stdc++.h>
using namespace std;
void main(vector<int>v, int n){
  int rl=v[n-1];
  for(int i=n-1; i>=0; i--){
    if(v[i]>rl){
      cout<< v[i];
      rl=v[i];
    }
  }
}


 int main(){




   return 0;
 }
