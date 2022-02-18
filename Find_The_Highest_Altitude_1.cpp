/*
Link of the question : https://leetcode.com/problems/find-the-highest-altitude/
Leetcode question number : 1732
*/
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int i, high = 0, sum = 0;
        for (i = 0; i < gain.size();)
        {
            sum += gain[i];
            if (high < sum)
            {
                high = sum;
            }
            i++;
        }
        return high;
    }
};