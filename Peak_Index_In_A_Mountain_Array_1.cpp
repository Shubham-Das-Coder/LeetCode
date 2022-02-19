/*
Link of the question : https://leetcode.com/problems/peak-index-in-a-mountain-array/
Leetcode question number : 852
*/
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int i = 0;
        while (arr[i] < arr[i + 1])
            i++;
        return i;
    }
};