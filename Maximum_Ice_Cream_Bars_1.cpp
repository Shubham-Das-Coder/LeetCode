/*
Link of the question : https://leetcode.com/problems/maximum-ice-cream-bars/
Leetcode question number : 1833
*/
class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        sort(costs.begin(), costs.end());
        int cnt = 0;
        for (int i = 0; i < costs.size(); i++)
        {
            if (costs[i] > coins)
                break;
            coins -= costs[i];
            cnt++;
        }
        return cnt;
    }
};