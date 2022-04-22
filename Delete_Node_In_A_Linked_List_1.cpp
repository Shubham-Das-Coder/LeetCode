/*
Link of the question : https://leetcode.com/problems/delete-node-in-a-linked-list/
Leetcode question number : 237
*/
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};