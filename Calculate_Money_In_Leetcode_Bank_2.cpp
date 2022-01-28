/*
Link of the question : https://leetcode.com/problems/calculate-money-in-leetcode-bank/
Leetcode question number : 1716
*/
class Solution
{
public:
    int totalMoney(int n)
    {
        int m, q = n / 7, r = n % 7;
        m = 28 * q + (q * (q - 1) / 2) * 7;
        while (r)
        {
            m += ++q;
            r--;
        }
        return m;
    }
};