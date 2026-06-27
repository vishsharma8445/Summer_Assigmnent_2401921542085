class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        
        queue<TreeNode*> st1, st2;
        st1.push(p);
        st2.push(q);
        
        while (!st1.empty() && !st2.empty()) {
            TreeNode* t1 = st1.front(); st1.pop();
            TreeNode* t2 = st2.front(); st2.pop();
            
            if (t1->val != t2->val) return false;
          
            if (t1->left && t2->left) {
                st1.push(t1->left);
                st2.push(t2->left);
            } else if (t1->left || t2->left) { 
                return false;
            }
            
  
            if (t1->right && t2->right) {
                st1.push(t1->right);
                st2.push(t2->right);
            } else if (t1->right || t2->right) { 
                return false;
            }
        }
        
        return st1.empty() && st2.empty();
    }
};
