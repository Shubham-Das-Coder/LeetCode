/*
Link of the question : https://leetcode.com/problems/majority-element/
Leetcode question number : 169
*/
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[(int)nums.size() / 2];
    }
};