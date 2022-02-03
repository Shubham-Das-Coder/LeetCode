'''
Link of the question : https://leetcode.com/problems/4sum-ii/
Leetcode question number : 454
'''
class Solution:
    def fourSumCount(self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]) -> int:
        lookup=collections.Counter()
        for x in nums1:
            for y in  nums2:
                lookup[x+y]+=1
        total=0
        for x in nums3:
            for y in nums4:
                total+=lookup[-(x+y)]
        return total