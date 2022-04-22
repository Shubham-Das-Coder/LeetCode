/*
Link of the question : https://leetcode.com/problems/palindrome-linked-list/
Leetcode question number : 234
*/
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<ListNode *> st;
        ListNode *temp = head;
        while (temp != NULL)
        {
            st.push(temp);
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            if (temp->val != st.top()->val)
                return false;
            temp = temp->next;
            st.pop();
        }
        return true;
    }
};