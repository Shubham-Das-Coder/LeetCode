'''
Link of the question : https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
Leetcode question number : 2160
'''


class Solution:
    def minimumSum(self, num: int) -> int:
        num = sorted(str(num), reverse=True)
        return int(num[0]) + int(num[1]) + int(num[2])*10 + int(num[3])*10
