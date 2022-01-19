/*
Link of the question : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
Leetcode question number : 2011
*/
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int cnt = 0, i;
        for (i = 0; i < operations.size(); i++)
        {
            if (operations[i][1] == '+')
                cnt++;
            else
                cnt--;
        }
        return cnt;
    }
};