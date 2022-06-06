'''
Link of the question : https://leetcode.com/problems/search-a-2d-matrix/
Leetcode question number : 74
'''


class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        R = len(matrix)
        C = len(matrix[0])
        left = 0
        right = R*C-1

        def f(t):
            x, y = t//C, t % C
            return matrix[x][y]

        def good(t):
            return f(t) > target
        while left < right:
            mid = (left+right+1)//2
            if good(mid):
                right = mid-1
            else:
                left = mid
        return f(left) == target
