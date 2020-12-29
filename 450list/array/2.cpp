#include <bits/stdc++.h>
using namespace std;
struct minmax{
  int min;
  int max;
};
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
minmax(v, n);
  return 0;

}
}

/*
#include <bits/stdc++.h>
using namespace std;
void minmax( vector<int> v, int n){
  int min=v[0]; int max=v[0];
  for(int i=0; i<n; i++){
    if(min>v[i])min= v[i];
    if(max<v[i])max= v[i];
  }
cout<< min<< " "<< max;
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
minmax(v, n);
  return 0;

}
}
*/
