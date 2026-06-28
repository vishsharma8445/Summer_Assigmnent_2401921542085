bool valid(TreeNode *root, long minVal, long maxVal)
{
    if(!root)
        return true;

    if(root->val <= minVal || root->val >= maxVal)
        return false;

    return valid(root->left, minVal, root->val) &&
           valid(root->right, root->val, maxVal);
}

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN, LONG_MAX);
    }
};
