/*
Link of the question : https://leetcode.com/problems/shuffle-the-array/
Leetcode question number : 1470
*/
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        const int len = nums.size();
        for (int i = n; i < nums.size(); i++)
            nums[i] = (nums[i] * 1024) + nums[i - n];

        int index = 0;
        for (int i = n; i < nums.size(); i++, index += 2)
        {
            nums[index] = nums[i] % 1024;
            nums[index + 1] = nums[i] / 1024;
        }
        return nums;
    }
};