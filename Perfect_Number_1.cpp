/*
Link of the question : https://leetcode.com/problems/perfect-number/
Leetcode question number : 507
*/
class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int i, sum = 0;
        for (i = 1; i <= num / 2;)
        {
            if (num % i == 0)
                sum += i;
            i++;
        }
        if (sum == num)
            return true;
        else
            return false;
    }
};