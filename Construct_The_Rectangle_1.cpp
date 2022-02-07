/*
Link of the question : https://leetcode.com/problems/construct-the-rectangle/
Leetcode question number : 492
*/
class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int w;
        for (int i = 1; i * i <= area; ++i)
        {
            if (area % i == 0)
                w = i;
        }
        return vector<int>{area / w, w};
    }
};