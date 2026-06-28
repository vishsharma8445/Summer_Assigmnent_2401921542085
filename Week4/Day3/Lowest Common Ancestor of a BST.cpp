/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* bst(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(root == NULL)
        return NULL;

    // dono left me
    if(p->val < root->val && q->val < root->val)
        return bst(root->left, p, q);

    // dono right me
    if(p->val > root->val && q->val > root->val)
        return bst(root->right, p, q);

    // yahi LCA hai
    return root;
}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return bst(root,p,q);

        
    }
};
