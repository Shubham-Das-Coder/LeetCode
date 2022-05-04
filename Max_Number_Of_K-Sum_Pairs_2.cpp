/*
Link of the question : https://leetcode.com/problems/max-number-of-k-sum-pairs/
Leetcode question number : 1679
*/
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1, count = 0;
        while (i < j)
        {
            if (nums[i] + nums[j] == k)
            {
                count++;
                i++;
                j--;
            }
            else if (nums[i] + nums[j] < k)
                i++;
            else
                j--;
        }
        return count;
    }
};