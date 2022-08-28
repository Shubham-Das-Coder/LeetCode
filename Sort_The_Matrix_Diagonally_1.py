'''
Link of the question : https://leetcode.com/problems/sort-the-matrix-diagonally/
Leetcode question number : 1329
'''


class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        R = len(mat)
        C = len(mat[0])
        diagonals = collections.defaultdict(list)
        for x in range(R):
            for y in range(C):
                diagonals[x-y].append(mat[x][y])
        for key in diagonals.keys():
            diagonals[key] = deque(sorted(diagonals[key]))
        for x in range(R):
            for y in range(C):
                mat[x][y] = diagonals[x-y].popleft()
        return mat
