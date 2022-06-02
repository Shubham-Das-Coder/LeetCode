'''
Link of the question : https://leetcode.com/problems/transpose-matrix/
Leetcode question number : 867
'''


class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        return list(zip(*matrix))
