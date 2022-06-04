'''
Link of the question : https://leetcode.com/problems/calculate-digit-sum-of-a-string/
Leetcode question number : 2243
'''


class Solution:
    def digitSum(self, s: str, k: int) -> str:
        while len(s) > k:
            current = list(s)
            now = []
            nx = []
            for i in range(len(current)):
                now.append(int(current[i]))
                if i % k == k-1:
                    nx.append(sum(now))
                    now = []
            if len(now) > 0:
                nx.append(sum(now))
            s = "".join(str(x) for x in nx)
        return s
