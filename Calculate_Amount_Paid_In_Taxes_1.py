'''
Link of the question : https://leetcode.com/problems/calculate-amount-paid-in-taxes/
Leetcode question number : 2303
'''


class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        tax = 0
        last = 0
        for x, c in brackets:
            t = x-last
            i = min(income, t)
            income -= i
            tax += c/100*i
            last = x
        return tax
