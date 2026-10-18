// Title: Number of Ways to Reorder Array to Get Same BST
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/

    long long mod = 1e9 + 7;
    vector<vector<long long>> dp;

    long long solve(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) return 1;

        vector<int> left, right;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[0])
                left.push_back(nums[i]);
            else
public:
class Solution {

