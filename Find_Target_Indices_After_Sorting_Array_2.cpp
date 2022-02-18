/*
Link of the question : https://leetcode.com/problems/find-target-indices-after-sorting-array/
Leetcode question number : 2089
*/
class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                ans.insert(ans.end(), i);
            else if (nums[i] > target)
                return ans;
        }
        return ans;
    }
};