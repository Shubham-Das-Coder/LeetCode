'''
Link of the question : https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/
Leetcode question number : 2259
'''


class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        best = ""
        for i, c in enumerate(number):
            if digit == c:
                current = number[:i]+number[i+1:]
                if best == "" or current > best:
                    best = current
        return best
