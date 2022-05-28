/*
Link of the question : https://leetcode.com/problems/missing-number/
Leetcode question number : 268
*/
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        int total = nums.size() * (nums.size() + 1) / 2;
        for (auto number : nums)
            sum += number;
        return total - sum;
    }
};