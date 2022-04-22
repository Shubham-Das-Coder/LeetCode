/*
Link of the question : https://leetcode.com/problems/middle-of-the-linked-list/
Leetcode question number : 876
*/
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};