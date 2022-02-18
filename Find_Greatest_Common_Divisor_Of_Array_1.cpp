/*
Link of the question : https://leetcode.com/problems/find-greatest-common-divisor-of-array/
Leetcode question number : 1979
*/
class Solution
{
public:
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        if (b == 0)
            return a;
        if (a == b)
            return a;
        if (a > b)
            return gcd(a - b, b);
        return gcd(a, b - a);
    }
    int findGCD(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return gcd(nums[0], nums[n - 1]);
    }
};