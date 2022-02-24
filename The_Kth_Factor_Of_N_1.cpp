/*
Link of the question : https://leetcode.com/problems/the-kth-factor-of-n/
Leetcode question number : 1492
*/
class Solution
{
public:
    int kthFactor(int n, int k)
    {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                cnt++;
            if (cnt == k)
                return i;
        }
        return -1;
    }
};