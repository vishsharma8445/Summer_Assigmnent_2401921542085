class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int end = nums.size();
        if (end == 1) return;

        int beg = 0;
        while (beg < end) {
            int n = beg;
            if (nums[n] == 0) {
                while (n < end - 1) {
                    nums[n] = nums[n + 1];
                    n++;
                }
                nums[n] = 0;
                end--;    
            } else {
                beg++;
            }
        }
    }
};
