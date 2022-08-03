'''
Link of the question : https://leetcode.com/problems/surface-area-of-3d-shapes/
Leetcode question number : 892
'''


class Solution:
    def surfaceArea(self, grid: List[List[int]]) -> int:
        R = len(grid)
        C = len(grid[0])
        bases_area = R*C*2
        for i in range(R):
            for j in range(C):
                if grid[i][j] == 0:
                    bases_area -= 2
        left_right_area = 0
        for i in range(R):
            left_right_area += grid[i][0]+grid[i][C-1]
            for j in range(1, C):
                left_right_area += abs(grid[i][j]-grid[i][j-1])
        top_down_area = 0
        for i in range(C):
            top_down_area += grid[0][i]+grid[R-1][i]
            for j in range(1, R):
                top_down_area += abs(grid[j][i]-grid[j-1][i])
        return bases_area+left_right_area+top_down_area
