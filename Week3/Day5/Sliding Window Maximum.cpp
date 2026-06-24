class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>ans;
        deque<int>st;
        for(int i=0;i<k-1;i++)
        {
            while(!st.empty()&&nums[i]>nums[st.back()])
                 st.pop_back();
             st.push_back(i);
        }
        for(int i=k-1;i<nums.size();i++)
        {
            while(!st.empty()&&nums[i]>nums[st.back()])
              st.pop_back();
              st.push_back(i);
              if(st.front()<=i-k)
               st.pop_front();
               ans.push_back(nums[st.front()]);
                 
        }
        return ans;
    }
};
