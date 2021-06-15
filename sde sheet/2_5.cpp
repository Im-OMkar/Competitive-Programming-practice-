class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof, minprice;
        maxprof=0;
        minprice=INT_MAX;
        for(int i=0; i<prices.size(); i++){
            minprice=min(minprice, prices[i]);
            maxprof=max(maxprof, prices[i]-minprice);
        }
        return maxprof;
    }
};