/*
Link of the question : https://leetcode.com/problems/student-attendance-record-i/
Leetcode question number : 551
*/
class Solution
{
public:
    bool checkRecord(string s)
    {
        int a = 0, l = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                a++;
            if (s[i] == 'L')
                l++;
            else
                l = 0;
            if (a >= 2 || l > 2)
                return false;
        }
        return true;
    }
};