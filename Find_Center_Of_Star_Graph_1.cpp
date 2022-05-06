/*
Link of the question : https://leetcode.com/problems/find-center-of-star-graph/
Leetcode question number : 1791
*/
class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        if (edges[0][0] == edges[1][0])
            return edges[0][0];
        else if (edges[0][0] == edges[1][1])
            return edges[1][1];
        else if (edges[0][1] == edges[1][0])
            return edges[0][1];
        else if (edges[0][1] == edges[1][1])
            return edges[1][1];
        return 0;
    }
};