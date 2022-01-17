/*
Link of the question : https://leetcode.com/problems/valid-perfect-square/
Leetcode question number : 367
*/
class Solution
{
public:
    bool isPerfectSquare(unsigned int num)
    {
        unsigned int i;
        for (i = 1; i * i <= num; i++)
        {
            if (i * i == num)
                return true;
        }
        return false;
    }
};