class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        minPrice = prices[0]
        maxProfit = 0
        for i in range(1,n):
            minPrice = min(minPrice,prices[i])
            maxProfit = max(maxProfit,prices[i] - minPrice)
        return maxProfit
        