/*
Link of the question : https://leetcode.com/problems/hamming-distance/
Leetcode question number : 461
*/
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int count = 0;
        while (x || y)
        {
            if (x % 2 != y % 2)
                count++;
            x = x / 2;
            y = y / 2;
        }
        return count;
    }
};