// Title: Construct Uniform Parity Array II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-uniform-parity-array-ii/

class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        int n = arr.size();
        int lowest_odd = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                lowest_odd = min(lowest_odd, arr[i]);
            }
        }
        if (lowest_odd == INT_MAX)
            return true;

        for (int i = 0; i < n; i++) {
