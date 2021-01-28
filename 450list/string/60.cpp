#include<bits/stdc++.h>
using namespace std;
 int main(){
   string str1, str2;
   cin>> str1>>str2;
string temp;
temp= str1+str2;

if (str1.length() != str2.length())
        {cout<<"-1";}
else if(temp.find(str2) != string::npos){
  cout<<"1";
}
   return 0;
 }
