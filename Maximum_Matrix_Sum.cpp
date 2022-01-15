/*
Link of the question : https://leetcode.com/problems/maximum-matrix-sum/
Leetcode question number : 1975
*/
class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &a)
    {
        int n = a.size();
        int m = a[0].size();
        long long sum = 0;
        int minimum = 1000000;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += abs(a[i][j]);
                minimum = min(minimum, abs(a[i][j]));
                if (a[i][j] < 0)
                    cnt++;
            }
        }
        if (cnt % 2 == 0)
            return sum;
        return sum - 2 * minimum;
    }
};