/*
Link of the question : https://leetcode.com/problems/build-array-from-permutation/
Leetcode question number : 1920
*/
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};