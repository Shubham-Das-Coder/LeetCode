/*
Link of the question : https://leetcode.com/problems/linked-list-cycle-ii/
Leetcode question number : 142
*/
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        bool flag = 0;
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast)
            {
                flag = 1;
                break;
            }
        }
        fast = head;
        if (flag == 1)
        {
            while (fast != slow)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
        return NULL;
    }
};