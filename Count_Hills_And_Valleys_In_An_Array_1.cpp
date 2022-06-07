/*
Link of the question : https://leetcode.com/problems/count-hills-and-valleys-in-an-array/
Leetcode question number : 2210
*/
class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        int res = 0;
        for (int i = 1, j = 0; i < nums.size() - 1; ++i)
            if ((nums[j] < nums[i] && nums[i] > nums[i + 1]) || (nums[j] > nums[i] && nums[i] < nums[i + 1]))
            {
                ++res;
                j = i;
            }
        return res;
    }
};