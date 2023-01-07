/*
Link of the question : https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
Leetcode question number : 2455
*/
class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int sum = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 6 == 0)
            {
                sum += nums[i];
                cnt++;
            }
        }
        if (cnt)
            return sum / cnt;
        return 0;
    }
};