/*
Link of the question : https://leetcode.com/problems/truncate-sentence/
Leetcode question number : 1816
*/
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string ans = "";
        int cnt = 0, i = 0;
        while (cnt < k)
        {
            if (s[i] == ' ')
            {
                ans += s[i];
                cnt++;
                i++;
            }
            else if (s[i] == '\0')
            {
                return ans;
            }
            else
            {
                ans += s[i];
                i++;
            }
        }
        ans.pop_back();
        return ans;
    }
};