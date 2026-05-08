class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        mini_price = prices[0]
        profit = 0 


        for price in prices:

            mini_price = min(mini_price , price)
            profit = max(profit , price - mini_price)

        return profit

        