class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<int>ans(26,0);
        
     for(int a=0;a<s.size();a++)
         {  ans[s[a]-'a']++;
             ans[t[a]-'a']--;
    }
        for(int a=0;a<26;a++)
            {
                if(ans[a]!=0)
                    return false;
            }
        return true;
    }
};
