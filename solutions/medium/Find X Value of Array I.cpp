// Title: Find X Value of Array I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-x-value-of-array-i/

class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> result(k, 0);
        vector<long long> dp(k, 0);

        for (int num : nums) {
            vector<long long> ndp(k, 0);
            int rem = num % k;
            ndp[rem]++;
            for (int r = 0; r < k; r++) {
                if (dp[r] == 0) continue;

                int newR = (1LL * r * rem) % k;
                ndp[newR] += dp[r];
            }
            for (int r = 0; r < k; r++) {
                result[r] += ndp[r];
