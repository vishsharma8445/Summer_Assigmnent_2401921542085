/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
           return true;
           ListNode *temp=head;
        vector<int>ans;
        while(temp)
        {
           ans.push_back(temp->val);
             temp=temp->next;
        }
        int beg=0,end=ans.size()-1;
        while(beg<=end)
        {
            if(ans[beg]!=ans[end])
                 return false;
                 beg++,end--;

        }
        return true;
    }
};
