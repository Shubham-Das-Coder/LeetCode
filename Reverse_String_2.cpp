/*
Link of the question : https://leetcode.com/problems/reverse-string/
Leetcode question number : 344
*/
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int st = 0, e = s.size() - 1;
        while (st < e)
        {
            swap(s[st], s[e]);
            st++;
            e--;
        }
    }
};