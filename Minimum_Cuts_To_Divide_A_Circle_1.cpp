/*
Link of the question : https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/
Leetcode question number : 2481
*/
class Solution
{
public:
    int numberOfCuts(int n)
    {
        if (n == 1)
            return 0;
        return n % 2 ? n : n / 2;
    }
};