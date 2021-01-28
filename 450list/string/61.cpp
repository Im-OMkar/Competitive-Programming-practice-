#include<bits/stdc++.h>
using namespace std;

int main(){
  string str1, str2, r;
  cin>>str1,str2,r;

  if(first.size() + second.size() != result.size()) {
      return false;
    }
    int i = 0, j = 0, k = 0;

    while (k != result.size()) {

      if (i < first.size() && first.at(i) == result.at(k))
        i++;

      else if (j < second.size() && second.at(j) == result.at(k))
        j++;

      else {
        cout<<"-1";
      }

      k++;
    }

    if(i < first.size() || j < second.size()) {
cout<<"-1";    }

cout<<"1";  }

  return 0;
}
