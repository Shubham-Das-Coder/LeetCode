/*
Link of the question : https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
Leetcode question number : 2114
*/
class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int maximum = 0;
        for (auto &it : sentences)
        {
            int cnt = 0;
            for (auto &ch : it)
            {
                if (ch == ' ')
                    cnt++;
            }
            maximum = max(maximum, cnt + 1);
        }
        return maximum;
    }
};