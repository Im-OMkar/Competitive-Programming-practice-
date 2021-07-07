class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
     
       // your code here
       
       int t[n];
        t[0]=1;
       
       for(int i=1; i<n;i++){
           t[i]=1;
           for(int j=0;j<i;j++){
               if(a[i]>a[j] and t[i]<t[j]+1){
                   t[i]=t[j]+1;
               }
           }
           
       }
return *max_element(t,t+n);
    }
};
