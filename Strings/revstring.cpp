
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string>temp;
        string str="";
        
        for(int i=0; i<S.length(); i++){
            if(S[i]=='.') {
                temp.push_back(str);
                str="";
            }
            
            else{
                str+=S[i];
            }
        }
        temp.push_back(str);
        string ans;
        for(int i=temp.size()-1; i>0; i--){
            ans=ans+temp[i]+".";
        }
        ans+=temp[0];
        return ans;
    } 
};