#include<bits/stdc++.h>
using namesapce std;

int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
  cin>>arr[i];
}
unordered_map<int,int>a;
for(int i=0; i<n; i++){
a[arr[i]]++;
}
bool d=false;
unordered_map<int, int>:: iterator itr;
for(itr=a.begin(); a!=a.end(); itr++){
  if(a->second>1) cout<<a->first;
  else cout<<-1;
}
}

  return 0;
}
