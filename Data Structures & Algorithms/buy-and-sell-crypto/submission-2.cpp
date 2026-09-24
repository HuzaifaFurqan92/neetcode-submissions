class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxProfit = 0;
    vector<int> res(n,0);
    for(int i = 0 ; i < n; i++ ){
        int num = 0;
        for(int j = i + 1; j < n ; j++){ 
            num = max(num, prices[j] - prices[i]);
        }
        res[i] = num;
    }
    for(int i = 0 ; i < n ; i++){
        maxProfit = max(maxProfit,res[i]);
    }
    return maxProfit;
    }
};
