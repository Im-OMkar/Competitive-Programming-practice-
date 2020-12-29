#include <bits/stdc++.h>
using namespace std;
void print(vector<int>v, int n){
    vector<int > v2;
int c0=0, c1=0, c2=0;
for(int i=0; i< n; i++){
  switch (v[i])
{   case 0:
          c0++;
          break;
    case 1:
        c1++;
        break;
    case 2:
        c2++;
        break;

}
}
for(int i=0; i< c0; i++){
  v2.push_back(0);
}
for(int i=0; i< c1; i++){
  v2.push_back(1);

}
for(int i=0; i< c2; i++){
  v2.push_back(2);

}
for(int i=0; i< v.size(); i++){
  cout<<v2[i];
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

}
print(v,n);
return 0;
}
