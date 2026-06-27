
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
         return {};
        
        vector<vector<int>>a;
        queue<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            int n=st.size();
            vector<int>ans;
            while(n--)
            {
                TreeNode *temp=st.front();
                st.pop();
                ans.push_back(temp->val);
                if(temp->left)
                 st.push(temp->left);
                 if(temp->right)
                 st.push(temp->right);  
            }
            a.push_back(ans);
        }
        return a;
    }
};
