/*
Link of the question : https://leetcode.com/problems/fibonacci-number/
Leetcode question number : 509
*/
class Solution
{
public:
    int f(int n, vector<int> &dp)
    {
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = f(n - 1, dp) + f(n - 2, dp);
    }
    int fib(int n)
    {
        if (n <= 1)
            return n;
        int prev2 = 0;
        int prev1 = 1;
        for (int i = 2; i <= n; i++)
        {
            int curi = prev1 + prev2;
            prev2 = prev1;
            prev1 = curi;
        }
        return prev1;
    }
};