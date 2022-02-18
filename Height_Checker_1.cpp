/*
Link of the question : https://leetcode.com/problems/height-checker/
Leetcode question number : 1051
*/
class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        int i = 0, cnt = 0;
        vector<int> temp = heights;
        sort(temp.begin(), temp.end());
        while (i < heights.size())
        {
            if (heights[i] != temp[i])
                cnt++;
            i++;
        }
        return cnt;
    }
};