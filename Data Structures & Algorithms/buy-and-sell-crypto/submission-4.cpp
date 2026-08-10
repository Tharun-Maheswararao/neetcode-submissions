class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = 0, sell = 1;

        while(sell < prices.size()) {
            if(prices[buy] < prices[sell]) {
                int diff = prices[sell] - prices[buy];
                profit = max(profit, diff); 
            } else {
                buy = sell;
            }
            sell++;
        }

        return profit;
    }
};
