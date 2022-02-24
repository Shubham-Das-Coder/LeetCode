/*
Link of the question : https://leetcode.com/problems/angle-between-hands-of-a-clock/
Leetcode question number : 1344
*/
class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        double a1;
        if (hour == 12)
        {
            a1 = minutes * 0.5;
        }
        else
            a1 = ((hour * 30) + (minutes * 0.5));
        double a2 = minutes * 6;
        if (abs(a2 - a1) > 180)
            return 360 - abs(a2 - a1);
        return abs(a2 - a1);
    }
};