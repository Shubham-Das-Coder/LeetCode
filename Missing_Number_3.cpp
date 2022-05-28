/*
Link of the question : https://leetcode.com/problems/missing-number/
Leetcode question number : 268
*/
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
    }
};