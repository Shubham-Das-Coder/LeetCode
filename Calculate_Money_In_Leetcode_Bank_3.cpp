/*
Link of the question : https://leetcode.com/problems/calculate-money-in-leetcode-bank/
Leetcode question number : 1716
*/
class Solution
{
public:
    int totalMoney(int n)
    {
        int i, sum = 0, counter = 0;
        for (i = 1; i <= (n / 7) + 1; i++)
        {
            int key = (i <= n / 7) ? (7) : (n % 7);
            for (int j = i; counter < key; j++)
            {
                sum += j;
                counter++;
            }
            counter = 0;
        }
        return sum;
    }
};