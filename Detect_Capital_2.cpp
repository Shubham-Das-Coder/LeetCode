/*
Link of the question : https://leetcode.com/problems/detect-capital/
Leetcode question number : 520
*/
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        bool allUpper = true, allLower = true;
        if (word.size() < 2)
            return true;
        for (int i = 1; i < word.size(); i++)
        {
            if (islower(word[i]))
                allUpper = false;
            if (isupper(word[i]))
                allLower = false;
        }
        return allLower or (allUpper && isupper(word[0]));
    }
};