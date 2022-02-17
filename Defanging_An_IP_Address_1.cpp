/*
Link of the question : https://leetcode.com/problems/defanging-an-ip-address/
Leetcode question number : 1108
*/
class Solution
{
public:
    string defangIPaddr(string address)
    {
        return regex_replace(address, regex("[.]"), "[.]");
    }
};