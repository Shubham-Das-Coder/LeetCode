/*
Link of the question : https://leetcode.com/problems/a-number-after-a-double-reversal/
Leetcode question number : 2119
*/
class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        return (num == 0) || (num % 10 != 0);
    }
};