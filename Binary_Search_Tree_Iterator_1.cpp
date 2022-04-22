/*
Link of the question : https://leetcode.com/problems/binary-search-tree-iterator/
Leetcode question number : 173
*/
class BSTIterator
{
public:
    vector<int> v;
    int i = 0;

    void inorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }

    BSTIterator(TreeNode *root)
    {
        inorder(root);
    }

    int next()
    {
        return v[i++];
    }

    bool hasNext()
    {
        return i < v.size();
    }
};