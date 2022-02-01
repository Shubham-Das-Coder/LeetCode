/*
Link of the question : https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
Leetcode question number : 2138
*/
class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        vector<string> ans;
        int n = s.size();
        string res = "";
        for (int i = 0; i < n; i++)
        {
            res += s[i];
            if (res.size() == k)
            {
                ans.push_back(res);
                res = "";
            }
        }
        if (res.size() > 0 && res.size() != k)
        {
            while (res.size() != k)
            {
                res += fill;
            }
            ans.push_back(res);
        }
        return ans;
    }
};