/*
Link of the question : https://leetcode.com/problems/check-if-the-sentence-is-pangram/
Leetcode question number : 1832
*/
class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        int i = 0;
        int a[26] = {0};
        int in = 0;
        for (int i = 0; i < sentence.size(); i++)
        {
            in = sentence[i] - 'a';
            a[in]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
};