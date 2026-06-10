class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,k=-1;
        for(int i=0;i<t.size();i++)
        {
            if(s[j]==t[i])
            {
                if(k<i)
                {
                  k=i;
                  j++;   
                }
                else 
                 return false;
            }
        }
        if(j!=s.size())
            return false;
        return true;
    }
};
