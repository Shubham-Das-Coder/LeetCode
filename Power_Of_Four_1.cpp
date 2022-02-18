/*
Link of the question : https://leetcode.com/problems/power-of-four/
Leetcode question number : 342
*/
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        int i = 1;
        if (n == 1)
            return true;
        while (pow(4, i) <= n)
        {
            if (pow(4, i) == n)
                return true;
            else
                i++;
        }
        return false;
    }
};