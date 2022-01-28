/*
Link of the question : https://leetcode.com/problems/reverse-string/
Leetcode question number : 344
*/
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int n = s.size();
        int st = 0, e = n - 1;
        while (st < e)
        {
            char t = s[st];
            s[st] = s[e];
            s[e] = t;
            st++;
            e--;
        }
    }
};