/*
Link of the question : https://leetcode.com/problems/xor-operation-in-an-array/
Leetcode question number : 1486
*/
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int ans = 0, i;
        vector<int> nums;
        for (i = 0; i < n; i++)
        {
            nums.push_back(start + 2 * i);
        }
        for (i = 0; i < n; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};