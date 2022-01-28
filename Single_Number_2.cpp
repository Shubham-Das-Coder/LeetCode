/*
Link of the question : https://leetcode.com/problems/single-number/
Leetcode question number : 136
*/
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (auto a : nums)
            ans = ans ^ a;
        return ans;
    }
};