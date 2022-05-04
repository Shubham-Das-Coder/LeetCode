/*
Link of the question : https://leetcode.com/problems/max-number-of-k-sum-pairs/
Leetcode question number : 1679
*/
class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int count = 0;
        for (auto x : nums)
        {
            if (mp[k - x])
            {
                mp[(k - x)]--;
                mp[x]--;
                count++;
            }
            mp[x]++;
        }
        return count;
    }
};