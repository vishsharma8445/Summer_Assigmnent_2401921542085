class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if (!isalnum(s[i])) {
                i++;
                continue;
            }
            if (!isalnum(s[j])) {
                j--;
                continue;
            }
            char a = s[i], b = s[j];
            if (a >= 'A' && a <= 'Z') a += 32;
            if (b >= 'A' && b <= 'Z') b += 32;
            if (a != b)
                return false;

            i++;
            j--;
        }
        return true;
    }
};
