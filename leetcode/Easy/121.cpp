class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 1e8, currentMaxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            if (currentMaxProfit < prices[i] - min) currentMaxProfit = prices[i] - min;
        }
        return currentMaxProfit;
    }
};

