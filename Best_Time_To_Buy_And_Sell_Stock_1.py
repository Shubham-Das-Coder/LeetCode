'''
Link of the question : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Leetcode question number : 121
'''


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        INF = 10**10
        cheapest = INF
        best = 0
        for price in prices:
            best = max(best, price-cheapest)
            cheapest = min(cheapest, price)
        return best
