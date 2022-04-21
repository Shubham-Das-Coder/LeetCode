/*
Link of the question : https://leetcode.com/problems/same-tree/
Leetcode question number : 100
*/
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p || !q)
            return q == p;
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};