/*
Link of the question : https://leetcode.com/problems/linked-list-cycle/
Leetcode question number : 141
*/
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        unordered_map<ListNode *, int> mp;
        ListNode *temp = head;
        while (temp != NULL)
        {
            if (mp[temp] > 1)
            {
                return true;
            }
            mp[temp]++;
            temp = temp->next;
        }
        return false;
    }
};