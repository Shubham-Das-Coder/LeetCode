/*
Link of the question : https://leetcode.com/problems/count-special-quadruplets/
Leetcode question number : 1995
*/
class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        vector<int> freq(1001, 0);
        for (auto it : nums)
            freq[it]++;
        while (1)
        {
            if (original <= 1000 && freq[original] > 0)
                original *= 2;
            else
                break;
        }
        return original;
    }
};