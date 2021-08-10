class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int l,h;
        int start=0, end=1;
        int len=s.length();

            for(int i=1; i<len; i++){
                //even length aabbcc
                l=i-1;
                h=i;
                while(l>=0 && h<len && s[l]==s[h]){
                    if(h-l+1>end){
                        start=l;
                        end=h-l+1;
                    }
                    l--;
                    h++;
                }
            
            //odd length tracking ssasass
                l=i-1;
                h=i+1;
                while(l>=0 && h<len && s[l]==s[h]){
                    if(h-l+1>end){
                        start=l;
                        end=h-l+1;
                    }
                    l--;
                    h++;
                }
            }
        
        return s.substr(start, end);
        
    }
};