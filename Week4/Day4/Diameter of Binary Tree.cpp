/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */ int dia(TreeNode* root,int &d)
{
    if(!root)
        return 0;
    int lef=dia(root->left,d);
    int righ=dia(root->right,d);
    d=max(d, lef+righ);
    return 1+ max(lef, righ);
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {  int d=0;
         dia(root, d);
                                              return d;
    }
};
