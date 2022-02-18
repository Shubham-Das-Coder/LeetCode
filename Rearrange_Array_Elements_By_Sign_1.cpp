/*
Link of the question : https://leetcode.com/problems/rearrange-array-elements-by-sign/
Leetcode question number : 2149
*/
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        int a = 0, b = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                ans[a] = nums[i];
                a = a + 2;
            }
            else
            {
                ans[b] = nums[i];
                b = b + 2;
            }
        }
        return ans;
    }
};