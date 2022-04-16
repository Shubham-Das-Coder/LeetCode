/*
Link of the question : https://leetcode.com/problems/root-equals-sum-of-children/
Leetcode question number : 2236
*/
class Solution
{
public:
    bool checkTree(TreeNode *root)
    {
        return root->val == root->left->val + root->right->val;
    }
};