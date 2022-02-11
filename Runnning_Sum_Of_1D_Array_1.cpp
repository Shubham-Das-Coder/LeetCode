/*
Link of the question : https://leetcode.com/problems/running-sum-of-1d-array/
Leetcode question number : 1480
*/
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
            nums[i] += nums[i - 1];
        return nums;
    }
};