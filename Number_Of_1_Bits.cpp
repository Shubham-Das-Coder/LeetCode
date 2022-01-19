/*
Link of the question : https://leetcode.com/problems/number-of-1-bits/
Leetcode question number : 191
*/
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int cnt = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                cnt++;
            }
            n /= 2;
        }
        return cnt;
    }
};