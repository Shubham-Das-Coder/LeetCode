/*
Link of the question : https://leetcode.com/problems/calculate-money-in-leetcode-bank/
Leetcode question number : 1716
*/
class Solution
{
public:
    int totalMoney(int n)
    {
        int m = 0, i = 0, j = 1;
        while (n > 7)
        {
            m = m + (7 * i) + 28;
            n -= 7;
            i++;
            j++;
        }
        while (n)
        {
            m += j;
            j++;
            n--;
        }
        return m;
    }
};