int path(TreeNode* root, int &sum)
{
    if(root == NULL)
        return 0;

    int left = path(root->left, sum);
    int right = path(root->right, sum);

    //  negative ignore 
    left = max(0, left);
    right = max(0, right);

    sum = max(sum, left + right + root->val);

    // parent ke liye ek side return
    return root->val + max(left, right);
}

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        path(root, sum);
        return sum;
    }
};
