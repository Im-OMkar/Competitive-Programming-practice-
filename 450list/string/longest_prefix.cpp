class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)return "";
        if(n==1)return strs[0];
        sort(strs.begin(), strs.end());
        
        string x=strs[0];
        string y=strs[n-1];
        
        int i=0;
        
        while(i<strs[n-1].size() and x[i]==y[i] )i++;
        
        return x.substr(0,i);
    }
};