/*
Link of the question : https://leetcode.com/problems/counting-bits/
Leetcode question number : 338
*/
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v(n + 1);
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            v[i] = v[i & (i - 1)] + 1;
        }
        return v;
    }
};