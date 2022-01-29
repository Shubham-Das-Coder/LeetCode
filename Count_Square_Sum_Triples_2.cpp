/*
Link of the question : https://leetcode.com/problems/count-square-sum-triples/
Leetcode question number : 1925
*/
class Solution
{
public:
    short int countTriples(int n)
    {
        short short int cnt = 0;
        for (short int a = 3; a < n; a++)
        {
            for (short int b = 3; b < n; b++)
            {
                int sum = a * a + b * b;
                int t = sqrt(a * a + b * b);
                if (t * t == sum && t <= n)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};