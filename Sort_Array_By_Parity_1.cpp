/*
Link of the question : https://leetcode.com/problems/sort-array-by-parity/
Leetcode question number : 905
*/
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                ans.push_back(nums[i]);
                nums[i] = 0;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};