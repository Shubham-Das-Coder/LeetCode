'''
Link of the question : https://leetcode.com/problems/first-letter-to-appear-twice/
Leetcode question number : 2351
'''


class Solution:
    def repeatedCharacter(self, s: str) -> str:
        seen = set()
        for c in s:
            if c in seen:
                return c
            seen.add(c)
