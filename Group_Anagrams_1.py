'''
Link of the question : https://leetcode.com/problems/group-anagrams/
Leetcode question number : 49
'''


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        c = collections.defaultdict(list)
        for s in strs:
            c["".join(sorted(s))].append(s)
        return c.values()
