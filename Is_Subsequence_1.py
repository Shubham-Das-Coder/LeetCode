'''
Link of the question : https://leetcode.com/problems/is-subsequence/
Leetcode question number : 392
'''


class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        current = 0
        N = len(s)
        if N == 0:
            return True

        for c in t:
            if s[current] == c:
                current += 1
            if current == N:
                return True
        return False
