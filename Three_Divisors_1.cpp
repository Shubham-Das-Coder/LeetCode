/*
Link of the question : https://leetcode.com/problems/three-divisors/
Leetcode question number : 1952
*/
class Solution
{
public:
    bool isThree(int n)
    {
        int i, cnt = 2;
        for (i = 2; i <= n / 2;)
        {
            if (n % i == 0)
            {
                cnt++;
            }
            i++;
        }
        if (cnt == 3)
            return true;
        else
            return false;
    }
};