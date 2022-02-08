/*
Link of the question : https://leetcode.com/problems/divisor-game/
Leetcode question number : 1025
*/
class Solution
{
public:
    bool divisorGame(int n)
    {
        while (n % 2 == 0)
            return true;
        return false;
    }
};