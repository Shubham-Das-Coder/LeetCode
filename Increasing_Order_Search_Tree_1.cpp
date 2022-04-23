/*
Link of the question : https://leetcode.com/problems/increasing-order-search-tree/
Leetcode question number : 897
*/
class Solution
{
public:
    TreeNode *res = new TreeNode(-1);
    TreeNode *ans = res;
    void inorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        res->right = new TreeNode(root->val);
        res = res->right;
        inorder(root->right);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        inorder(root);
        return ans->right;
    }
};