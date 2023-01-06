/*
Link of the question : https://leetcode.com/problems/convert-the-temperature/description/
Leetcode question number : 2469
*/
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> ans;
        ans.push_back(celsius + 273.15);
        ans.push_back(celsius * 1.80 + 32);
        return ans;
    }
};