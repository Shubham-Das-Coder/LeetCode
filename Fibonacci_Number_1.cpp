/*
Link of the question : https://leetcode.com/problems/fibonacci-number/
Leetcode question number : 509
*/
class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;
        return fib(n - 1) + fib(n - 2);
    }
};