'''
Link of the question : https://leetcode.com/problems/valid-parentheses/
Leetcode question number : 20
'''


class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        matching = {
            ")": "(",
            "]": "[",
            "}": "{"
        }
        for p in s:
            if p in "([{":
                stack.append(p)
                continue
            else:
                if len(stack) == 0 or stack[-1] != matching[p]:
                    return False
                stack.pop()
        return len(stack) == 0
