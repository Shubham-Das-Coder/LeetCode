'''
Link of the question : https://leetcode.com/problems/intersection-of-multiple-arrays/
Leetcode question number : 2248
'''


class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        s = set(nums[0])
        for s2 in nums[1:]:
            s &= set(s2)
        return list(sorted(s))
