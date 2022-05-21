/*
Link of the question : https://leetcode.com/problems/next-permutation/
Leetcode question number : 31
*/
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        next_permutation(begin(nums), end(nums));
    }
};