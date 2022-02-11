/*
Link of the question : https://leetcode.com/problems/shuffle-string/
Leetcode question number : 1528
*/
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string res = s;
        for (int i = 0; i < indices.size(); ++i)
            res[indices[i]] = s[i];
        return res;
    }
};