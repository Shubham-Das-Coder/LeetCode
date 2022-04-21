/*
Link of the question : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
Leetcode question number : 83
*/
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *cur = head;
        while (cur)
        {
            while (cur->next && cur->val == cur->next->val)
            {
                cur->next = cur->next->next;
            }
            cur = cur->next;
        }
        return head;
    }
};