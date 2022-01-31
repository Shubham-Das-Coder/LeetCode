/*
Link of the question : https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
Leetcode question number : 2144
*/
class Solution
{
public:
    int minimumCost(vector<int> &cost)
    {
        sort(cost.begin(), cost.end(), greater<int>());
        unsigned int n = cost.size();
        unsigned int totalCost = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i % 3 == 2))
                continue;
            else
                totalCost += cost[i];
        }
        return totalCost;
    }
};