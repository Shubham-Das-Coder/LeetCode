/*
Link of the question : https://leetcode.com/problems/roman-to-integer/
Leetcode question number : 13
*/
class Solution
{
public:
    int romanToInt(string s)
    {
        int roman = 0;
        int i = 0;
        while (s[i] != NULL)
        {
            if (s[i] == 'I' && s[i + 1] == 'V')
            {
                roman += 4;
                i += 2;
            }
            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                roman += 9;
                i += 2;
            }
            else if (s[i] == 'X' && s[i + 1] == 'L')
            {
                roman += 40;
                i += 2;
            }
            else if (s[i] == 'X' && s[i + 1] == 'C')
            {
                roman += 90;
                i += 2;
            }
            else if (s[i] == 'C' && s[i + 1] == 'D')
            {
                roman += 400;
                i += 2;
            }
            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                roman += 900;
                i += 2;
            }
            else if (s[i] == 'I')
            {
                roman++;
                i++;
            }
            else if (s[i] == 'V')
            {
                roman += 5;
                i++;
            }
            else if (s[i] == 'X')
            {
                roman += 10;
                i++;
            }
            else if (s[i] == 'L')
            {
                roman += 50;
                i++;
            }
            else if (s[i] == 'C')
            {
                roman += 100;
                i++;
            }
            else if (s[i] == 'D')
            {
                roman += 500;
                i++;
            }
            else if (s[i] == 'M')
            {
                roman += 1000;
                i++;
            }
        }
        return roman;
    }
};