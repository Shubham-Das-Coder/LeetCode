/*
Link of the question : https://leetcode.com/problems/first-bad-version/
Leetcode question number : 278
*/
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int lo = 1, hi = n, mid;
        while (lo < hi)
        {
            mid = lo + (hi - lo) / 2;
            if (isBadVersion(mid))
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;
    }
};