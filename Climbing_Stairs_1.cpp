/*
Link of the question : https://leetcode.com/problems/climbing-stairs/
Leetcode question number : 70
*/
class Solution
{
public:
    int climbStairs(int n)
    {
        long int a = 1, b = 1;
        while (n--)
            a = (b += a) - a;
        return a;
    }
};