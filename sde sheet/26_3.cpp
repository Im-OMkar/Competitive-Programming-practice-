 bool checkPart(vector<int> &nums, int sum){
        bool dp[nums.size()+1][sum+1];
        //for sum 0;
        for(int i =0;i<=nums.size();i++){
            dp[i][0] = true;
        }
        //for array size 0;no partition
        for(int i=0;i<=sum;i++){
            dp[0][i]=false;
        }
        dp[0][0] = true;//empty array use case
        
        for(int i =1;i<=nums.size();i++){
            for(int j = 1;j<=sum;j++){
                if(j>=nums[i-1])
                    dp[i][j] = dp[i-1][j-nums[i-1]] | dp[i-1][j];
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[nums.size()][sum];
    }
    
    
    
    bool canPartition(vector<int>& nums) {

        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2==1)
            return false;
        
        return checkPart(nums,sum/2);
    }