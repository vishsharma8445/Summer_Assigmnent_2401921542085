class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>st; vector<int>ans;
        st[nums[0]]=0; int i;
        for(i=1;i<nums.size();i++)
        {
             if(st.find(target-nums[i])!=st.end())
                  break;
            st[nums[i]]=i;
        }
        ans.push_back(i); ans.push_back(st[target-nums[i]]);
        return ans;
    }
};
