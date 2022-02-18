/*
Link of the question : https://leetcode.com/problems/palindrome-number/
Leetcode question number : 9
*/
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long int original = x;
        long long int remainder = 0;
        long long int reversed = 0;
        if (x < 0)
            return false;
        else if (x == 0)
            return true;
        else
        {
            while (x > 0)
            {
                remainder = x % 10;
                reversed = reversed * 10 + remainder;
                x = x / 10;
            }
            if (reversed == original)
                return true;
            else
                return false;
        }
    }
};