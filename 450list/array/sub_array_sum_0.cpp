class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0;
        unordered_map<int,int>m;
        bool f=false;
        for(int i=0; i<n ;i++){
            sum= sum+ arr[i];
            
            if(sum==0 || m[sum] || arr[i]==0){
                f=true;
                break;
            }
            else{
                m[sum]=1;
            }
        }
       return f;
    }
};