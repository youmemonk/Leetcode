class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX, n = prices.size(), profit = 0, pist = 0;
        for(int i=0; i<n; i++){
            if(prices[i] < least) least = prices[i];
            pist = prices[i] - least;
            profit = max(profit, pist);
        }
        
        return profit;
    }
};