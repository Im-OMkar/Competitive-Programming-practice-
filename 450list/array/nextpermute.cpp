class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int t=-1;
        
        
        for(int i=N-1; i>0; i--){
            if(arr[i]>arr[i-1]) {
                t=i;
                break;
            }
        }
        
        if(t==-1) {
            reverse(arr.begin() , arr.end());
            return arr;
        }
        else{
            int prev=t;
            
            for(int i=t+1; i<N; i++){
                if(arr[i]>arr[t-1] && arr[i]<=arr[prev]) prev=i;
            }
            swap(arr[t-1], arr[prev]);
            reverse(arr.begin() + t, arr.end());
            return arr;
        }
         
    }
};