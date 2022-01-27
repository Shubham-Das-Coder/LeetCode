/*
Link of the question : https://leetcode.com/problems/binary-number-with-alternating-bits/
Leetcode question number : 693
*/
class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        int lastBit = (n % 2);
        n /= 2;
        while (n)
        {
            if (n % 2 == lastBit)
                return false;
            lastBit = n % 2;
            n /= 2;
        }
        return true;
    }
};