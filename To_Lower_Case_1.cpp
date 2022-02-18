/*
Link of the question : https://leetcode.com/problems/to-lower-case/
Leetcode question number : 709
*/
class Solution
{
public:
    string toLowerCase(string s)
    {
        int i = 0;
        while (s[i] != '\0')
        {
            if (s[i] > 64 && s[i] < 91)
            {
                s[i] = s[i] + 32;
            }
            i++;
        }
        return s;
    }
};