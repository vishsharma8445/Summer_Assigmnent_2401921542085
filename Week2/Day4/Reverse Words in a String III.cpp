class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0,n=s.size(),index;
        while(end<s.size())
        {
            if(s[end+1]==' '||s[end+1]=='\0')
            {
                index=end+2;
                 while(start<end)
                  {
                 swap(s[start++],s[end--]);
                  }
                  start=end=index;
            }  
         else
            end++;

        }
        return s;
    }
};
