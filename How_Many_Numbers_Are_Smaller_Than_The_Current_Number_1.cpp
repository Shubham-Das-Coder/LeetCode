/*
Link of the question : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
Leetcode question number : 1365
*/
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int cnt = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] > nums[j])
                    cnt++;
            }
            ans.insert(ans.end(), cnt);
        }
        return ans;
    }
};