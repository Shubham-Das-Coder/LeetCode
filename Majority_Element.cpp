/*
Link of the question : https://leetcode.com/problems/majority-element/
Leetcode question number : 169
*/
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ans = nums[0], freq = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == ans)
                freq++;
            else
                freq--;
            if (freq <= 0)
            {
                ans = nums[i];
                freq++;
            }
        }
        return ans;
    }
};