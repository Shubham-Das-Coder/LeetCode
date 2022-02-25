/*
Link of the question : https://leetcode.com/problems/nim-game/
Leetcode question number : 292
*/
class Solution
{
public:
    bool canWinNim(int n)
    {
        if (n % 4 == 0)
            return false;
        return true;
    }
};