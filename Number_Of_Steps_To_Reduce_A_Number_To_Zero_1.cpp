/*
Link of the question : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
Leetcode question number : 1342
*/
class Solution
{
public:
    int numberOfSteps(int num)
    {
        int cnt = 0;
        while (num)
        {
            if (num % 2 == 0)
            {
                num /= 2;
                cnt++;
            }
            else if (num == 1)
            {
                num = 0;
                cnt++;
            }
            else
            {
                num -= 1;
                num /= 2;
                cnt = cnt + 2;
            }
        }
        return cnt;
    }
};