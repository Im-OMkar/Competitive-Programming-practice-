class Solution {
public:
    int coinChange(vector<int>& coins, int amount)
    {
        int sz = coins.size(); 
        int dp[sz+1][amount+1];
        
        for(int i=0; i<=sz; i++)
        {
            for(int j=0; j<=amount; j++)
            {
                if(i==0){ dp[i][j] = INT_MAX-1 ;}
                if(j==0){ dp[i][j] = 0 ;}
                if(i==1)
                {   
                    if((j%coins[i-1]) == 0){ dp[i][j] = j/coins[i-1] ;}
                    else{ dp[i][j] = INT_MAX-1 ;}
                }
            }
        }
        dp[0][0] = 0;
         for(int i=1; i<=sz; i++)
        {
            for(int j=1; j<=amount; j++)
            {
                if(coins[i-1] <= j )
                {
                    dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-coins[i-1]]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[sz][amount] > amount ? -1 : dp[sz][amount];
        
    }
};