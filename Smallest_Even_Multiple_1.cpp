/*
Link of the question : https://leetcode.com/problems/smallest-even-multiple/
Leetcode question number : 2413
*/
class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        if (n % 2)
            return 2 * n;
        return n;
    }
};