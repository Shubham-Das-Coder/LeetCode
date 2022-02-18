/*
Link to the question : https://leetcode.com/problems/find-the-town-judge/
Leetcode question number : 997
*/
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        vector<int> mpp(n + 1, 0);
        for (auto &it : trust)
        {
            mpp[it[1]]++;
            mpp[it[0]]--;
        }
        for (int i = 1; i <= n; i++)
        {
            if (mpp[i] == n - 1)
                return i;
        }
        return -1;
    }
};