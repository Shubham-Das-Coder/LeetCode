/*
Link of the question : https://leetcode.com/problems/divide-two-integers/
Leetcode question number : 29
*/
class Solution
{
public:
    long int divide(long int dividend, long int divisor)
    {
        if (dividend / divisor < -2147483648)
            return -2147483648;
        else if (dividend / divisor > 2147483647)
            return 2147483647;
        else
            return dividend / divisor;
    }
};