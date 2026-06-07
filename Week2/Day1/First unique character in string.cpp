class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        for(int i=0;i<s.size();i++)
             {
                char c=s[i];
                arr[c-'a']++;
             }  
             for(int i=0;i<s.size();i++)
             {
                char c=s[i];
                if(arr[c-'a']==1)
               { return i;
                  break;}
             }      
             return -1;
    }
};
