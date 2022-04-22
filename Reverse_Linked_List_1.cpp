/*
Link of the question : https://leetcode.com/problems/reverse-linked-list/
Leetcode question number : 206
*/
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *Prev = NULL;
        ListNode *Curr = head;
        ListNode *Next;
        while (Curr != NULL)
        {
            Next = Curr->next;
            Curr->next = Prev;
            Prev = Curr;
            Curr = Next;
        }
        return Prev;
    }
};