/*
Link of the question : https://leetcode.com/problems/move-zeroes/
Leetcode question number : 283
*/
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0;
        while (j < nums.size())
        {
            if (nums[j] != 0)
                nums[i++] = nums[j];
            j++;
        }
        while (i < nums.size())
            nums[i++] = 0;
    }
};