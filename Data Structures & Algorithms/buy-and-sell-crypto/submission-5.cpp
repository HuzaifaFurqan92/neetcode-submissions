class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right  = 0 ;
        int min = prices[0];
        int profit = 0;

        for (; right < prices.size() ; right++){
            if (prices[right] < min){
                min = prices[right];
               left = right;
            }
            profit = max(profit,prices[right] - prices[left]);
            
        }
        return profit;
    }
};
