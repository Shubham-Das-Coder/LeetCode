/*
Link of the question : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
Leetcode question number : 81
*/
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                return true;
        }
        return false;
    }
};