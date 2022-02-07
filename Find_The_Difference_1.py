'''
Link of the question : https://leetcode.com/problems/find-the-difference/
Leetcode question number : 389
'''


class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        sc = collections.Counter(s)
        tc = collections.Counter(t)
        return list((tc-sc).keys())[0]
