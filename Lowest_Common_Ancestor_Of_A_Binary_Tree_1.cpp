/*
Link of the question : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
Leetcode question number : 236
*/
class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
            return NULL;
        if (root == p or root == q)
            return root;
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (left && right)
            return root;
        if (left)
            return left;
        return right;
    }
};