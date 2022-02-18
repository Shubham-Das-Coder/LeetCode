/*
Link of the question : https://leetcode.com/problems/smallest-index-with-equal-value/
Leetcode question number : 2057
*/
class Solution
{
public:
    int smallestEqual(vector<int> &nums)
    {
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            if (i % 10 == nums[i])
            {
                return i;
            }
        }
        return -1;
    }
};