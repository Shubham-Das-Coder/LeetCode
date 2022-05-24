/*
Link of the question : https://leetcode.com/problems/percentage-of-letter-in-string/
Leetcode question number : 2278
*/
class Solution
{
public:
    int percentageLetter(string s, char letter)
    {
        return 100 * count(begin(s), end(s), letter) / s.size();
    }
};