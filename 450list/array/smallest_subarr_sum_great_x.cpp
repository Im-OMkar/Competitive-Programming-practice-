 public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here   
        int s=0;
        int ans=INT_MAX;
        int i=0,j=0;
        
        while(j<n and i<=j){
            while(s<=x && j<n){
                s+=arr[j++];
            }
            while(s>x && i<j ){
                ans=min(ans, j-i);
                s-=arr[i++];
                
            }
        }
        return ans;
    }