/*
Link of the question : https://leetcode.com/problems/power-of-two/
Leetcode question number : 231
*/
class Solution
{
public:
    bool isPowerOfTwo(long int n)
    {
        return (n && !(n & n - 1));
    }
};