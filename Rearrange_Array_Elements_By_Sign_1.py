'''
Link of the question : https://leetcode.com/problems/rearrange-array-elements-by-sign/
Leetcode question number : 2149
'''


class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        positives = []
        negatives = []
        for x in nums:
            if x < 0:
                negatives.append(x)
            else:
                positives.append(x)
        ans = []
        for a, b in zip(positives, negatives):
            ans.append(a)
            ans.append(b)
        return ans
