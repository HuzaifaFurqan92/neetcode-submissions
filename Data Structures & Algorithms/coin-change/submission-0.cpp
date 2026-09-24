class Solution {
public:
    vector<int> store;
    int coinChange(vector<int>& coins, int amount) {
        store.resize(amount + 1,-1);
        int ans =  dfs(coins,amount);
        return (ans >= 1e9) ? -1 : ans;    
    }
    int dfs(vector<int>& coins,int amount){
       if(amount == 0 ) return 0;
       if ( amount < 0 ) return 1e9;
       if (store[amount] != -1) return store[amount];

       int minCoins = 1e9;
       for ( int coin:coins){
        int result  = dfs(coins,amount - coin);
        minCoins = min(minCoins, 1 + result);
       }
        store[amount]= minCoins;
        return store[amount];
    }
};
