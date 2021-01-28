#include<bits/stdc++.h>
using namespace std;
 int main(){
   string s;
   vector<int> arr(26, 0);

   cin>> s;
   int count=0;
   for (int i = 0; i < s.size(); i++) {
     arr[s[i]-'a']++;
   }

   for (int i = 0; i < 26; i++) {
     if(arr[i]>1) cout<<(char)('a'+i);
   }

 }

 //adhg 0 4 8 7 0
