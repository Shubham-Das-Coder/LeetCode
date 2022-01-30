/*
Link of the question : https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
Leetcode question number : 2124
*/
class Solution
{
public:
    bool checkString(string s)
    {
        unsigned short int i;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b' && s[i + 1] == 'a')
                return false;
        }
        return true;
    }
};