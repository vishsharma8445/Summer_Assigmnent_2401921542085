class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int beg=0,end=0,len=0;
        vector<int>count(256,0);
        while(end<s.size())
        {
            while(count[s[end]])
            {
                count[s[beg]]=0;
                beg++;
            }
            count[s[end]]=1;
            len=max(len,end-beg+1);
            end++;
        }
       return len;
        
    }
};
