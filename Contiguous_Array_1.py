'''
Link of the question : https://leetcode.com/problems/contiguous-array/
Leetcode question number : 525
'''


class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        seen = {}
        seen[0] = -1
        best = 0
        current = 0
        for index, x in enumerate(nums):
            if x == 1:
                current += 1
            else:
                current -= 1
            if current in seen:
                best = max(best, index-seen[current])
            else:
                seen[current] = index
        return best
