'''
Link of the question : https://leetcode.com/problems/missing-number/
Leetcode question number : 268
'''


class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        totalf = n*(n+1)//2
        totals = sum(nums)
        return totalf-totals
