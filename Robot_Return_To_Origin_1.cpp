/*
Link of the question : https://leetcode.com/problems/robot-return-to-origin/
Leetcode question number : 657
*/
class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int i = 0, vertical = 0, horizontal = 0;
        while (i < moves.size())
        {
            if (moves[i] == 'U')
                vertical++;
            else if (moves[i] == 'D')
                vertical--;
            else if (moves[i] == 'L')
                horizontal--;
            else if (moves[i] == 'R')
                horizontal++;
            i++;
        }
        return !(horizontal || vertical);
    }
};