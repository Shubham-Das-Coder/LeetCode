/*
Link of the question : https://leetcode.com/problems/count-sorted-vowel-strings/
Leetcode question number : 1641
*/
class Solution
{
public:
    int countVowelStrings(int n)
    {
        return ((n + 1) * (n + 2) * (n + 3) * (n + 4)) / 24;
    }
};