#include<bits/stdc++.h>
using namespace std;
void seclar(vector<int>v, int n){
int s, l;
s=v[0];
l=v[0];
for(int i=0; i<n; i++){
  if(v[i]>l) {
    s=l;
    l=v[i];

}
}
cout<<s<<" "<<l;}
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
    //for second largest
    seclar(v,n);
  }
  return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
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
  int k;
  cin>>k;
  sort(v.begin(), v.end());

  cout<< v[k-1];
    return 0;

}
}*/
