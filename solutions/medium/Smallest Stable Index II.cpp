// Title: Smallest Stable Index II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-stable-index-ii/

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> suffix(n);
        suffix[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suffix[i] = min((long long)nums[i], suffix[i + 1]);
        }
        long long f = nums[0];
        for(int i = 0; i < n; i++) {
            f = max(f, (long long)nums[i]);
            long long s = suffix[i];
            if(f - s <= (long long)k)
                return i;
        }
        return -1;
    }
};
