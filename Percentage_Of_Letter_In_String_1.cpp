/*
Link of the question : https://leetcode.com/problems/percentage-of-letter-in-string/
Leetcode question number : 2278
*/
class Solution
{
public:
    int percentageLetter(string s, char letter)
    {
        int cnt = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == letter)
                cnt++;
        }
        return 100 * cnt / n;
    }
};