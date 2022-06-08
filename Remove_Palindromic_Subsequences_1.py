'''
Link of the question : https://leetcode.com/problems/remove-palindromic-subsequences/
Leetcode question number : 1332
'''


class Solution:
    def removePalindromeSub(self, s: str) -> int:
        if s == s[::-1]:
            return 1
        return 2
