class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_share= prices[0];
        int max_profit = INT_MIN;
        
        for(int i = 1 ; i < prices.size() ; i++)
        {
            if(min_share < prices[i])
            {
                if(max_profit < (prices[i] -min_share))
                max_profit = prices[i] - min_share;

            }
            else{
                min_share = prices[i];
            }
        }
        if(max_profit == INT_MIN)
        max_profit = 0;
        return max_profit;
    }
};