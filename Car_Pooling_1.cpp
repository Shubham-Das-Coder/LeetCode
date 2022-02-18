/*
Link of the question : https://leetcode.com/problems/car-pooling/
Leetcode question number : 1094
*/
class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        int maximum = 0;
        for (auto it : trips)
        {
            maximum = max(maximum, it[2]);
        }
        vector<int> sum(maximum + 1, 0);

        for (auto it : trips)
        {
            sum[it[1]] += it[0];
            sum[it[2]] -= it[0];
        }

        for (int i = 0; i <= maximum; i++)
        {
            if (i != 0)
                sum[i] += sum[i - 1];
            if (sum[i] > capacity)
                return false;
        }
        return true;
    }
};