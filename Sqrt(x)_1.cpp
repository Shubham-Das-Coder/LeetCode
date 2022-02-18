/*
Link of the question : https://leetcode.com/problems/sqrtx/
Leetcode question number : 69
*/
class Solution
{
public:
    int mySqrt(int x)
    {
        long long int i;
        for (i = 0; i * i <= x; i++)
        {
        }
        return i - 1;
    }
};