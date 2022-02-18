/*
Link of the question : https://leetcode.com/problems/determine-color-of-a-chessboard-square/
Leetcode question number : 1812
*/
class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        return (coordinates[0] + coordinates[1]) % 2;
    }
};