/*
Link of the question : https://leetcode.com/problems/sort-an-array/
Leetcode question number : 912
*/
class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums;
    }
};