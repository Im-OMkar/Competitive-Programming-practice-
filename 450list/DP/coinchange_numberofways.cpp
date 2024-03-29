public:
    long long int count( int S[], int n, int sum )
    {
       
        //code here.
        long long int t[n+1][sum+1];
        for(int i=0;i<=n; i++) t[i][0]=1;
            
        for(int j=0; j<=sum; j++) t[0][j]=0;
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                
                if(S[i-1]<= j){
                    t[i][j]= t[i-1][j] + t[i][j-S[i-1]];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
    }