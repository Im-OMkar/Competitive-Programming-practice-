class Solution
{   
    public:
            void solve(string S,string op, vector<string> &ans){
                
                
                if(S.length()==0){
                    ans.push_back(op);
                    return;
                }
                
                for(int i=0 ; i<S.length() ; i++)
    {
        char ch = S[i];
        string left_substr = S.substr(0,i);
        string right_substr = S.substr(i+1);
        string rest = left_substr + right_substr;
        solve(rest , op+ch, ans);
    }
            }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    string op="";
		    vector<string> ans;
		    sort(S.begin(), S.end());
		    solve(S,op,ans);
		    return ans;
		}
};