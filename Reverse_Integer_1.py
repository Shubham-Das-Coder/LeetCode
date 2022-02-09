'''
Link of the question : https://leetcode.com/problems/reverse-integer/
Leetcode question number : 7
'''


class Solution:
    def reverse(self, x: int) -> int:
        y = 0
        negative = (x < 0)
        if negative:
            x *= -1
        while x > 0:
            y *= 10
            y += x % 10
            x //= 10
        if negative:
            y *= -1
        if(y > 2147483647 or y < -2147483648):
            return 0
        return y
