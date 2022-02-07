/*
Link of the question : https://leetcode.com/problems/sign-of-the-product-of-an-array/
Leetcode question number : 1822
*/
class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        short int i, cnt = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                return 0;
            else if (nums[i] < 0)
                cnt++;
        }
        if (cnt % 2 == 0)
            return 1;
        return -1;
    }
};