#include <bits/stdc++.h>
using namespace std;
void rev( vector<int> v, int n){
  for(auto it=v.end()-1; it!=v.begin(); it--){
    cout<< *it<<" ";
  }

}
int main(){
  int t;
  cin>>t;
while(t--){
  vector<int> v;
  int n,m;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>m;
    v.push_back(m);
  }
rev(v, n);
  return 0;

}
}
