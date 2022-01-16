/*
Link of the question : https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
Leetcode question number : 2006
*/
class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int cnt = 0;
        int hash[101] = {0};
        for (int num : nums)
        {
            hash[num]++;
        }
        for (int i = k + 1; i <= 100; i++)
        {
            cnt += (hash[i] * hash[i - k]);
        }
        return cnt;
    }
};