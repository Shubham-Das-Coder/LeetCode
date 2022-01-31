/*
Link of the question : https://leetcode.com/problems/count-special-quadruplets/
Leetcode question number : 1995
*/
class Solution
{
public:
    int countQuadruplets(vector<int> &nums)
    {
        unsigned int a, b, c, d, cnt = 0;
        for (a = 0; a < nums.size() - 3; a++)
        {
            for (b = a + 1; b < nums.size() - 2; b++)
            {
                for (c = b + 1; c < nums.size() - 1; c++)
                {
                    for (d = c + 1; d < nums.size(); d++)
                        if (nums[a] + nums[b] + nums[c] == nums[d])
                            cnt++;
                }
            }
        }
        return cnt;
    }
};