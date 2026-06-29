bool symmetric(TreeNode *l, TreeNode *r)
{
    if(l == NULL && r == NULL)
        return true;

    if(l == NULL || r == NULL)
        return false;

    if(l->val != r->val)
        return false;

    return symmetric(l->left, r->right) && symmetric(l->right, r->left);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return symmetric(root->left, root->right);
    }
};
