/*
Link to the question : https://leetcode.com/problems/complement-of-base-10-integer/
Leetcode question number : 1009
*/
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        int comp = 0;
        int ind = 0;
        while (n > 0)
        {
            if (!(n & 1))
            {
                comp = comp | (1 << ind);
            }
            n = n >> 1;
            ind++;
        }
        return comp;
    }
};