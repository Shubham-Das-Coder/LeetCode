/*
Link of the question : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
Leetcode question number : 961
*/
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    return nums[i];
            }
        }
        return 0;
    }
};