'''
Link of the question : https://leetcode.com/problems/unique-paths/
Leetcode question number : 62
'''


class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        if m > n:
            m, n = n, m
        row = [0]*n
        row[0] = 1
        for i in range(m):
            next_row = [0]*n
            for j in range(n):
                next_row[j] = row[j]+next_row[j-1]
            row = next_row
        return row[n-1]
