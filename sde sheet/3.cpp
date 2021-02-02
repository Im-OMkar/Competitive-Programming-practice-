class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int act= n*(n+1)/2;
        for(int i=0; i<n; i++){
            sum+= nums[i];
        }
        if(sum==act){return 0;}
        else{sum= act-sum;
            return sum;}

    }
};
