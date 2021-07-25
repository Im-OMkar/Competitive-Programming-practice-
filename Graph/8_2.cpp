 class solution{
 public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        // Your code here
        int c=1,res=1;
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        int i=1, j=0;
        
        while(i<n and j<n){
            if(arr[i]<=dep[j]){
                c++;i++;
            }
            else if(arr[i]>arr[j]){
                c--;
                j++;
            }
            if(c>res)res=c;
        }
        return res;
    }
};