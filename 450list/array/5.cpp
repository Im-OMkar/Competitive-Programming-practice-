#include <bits/stdc++.h>
using namespace std;
void negate (vector<int>v, int n){
  int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            if (i != j)
                swap(v[i], v[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++){
      cout<<v[i]<<" ";
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
negate(v,n);
return 0;
}
