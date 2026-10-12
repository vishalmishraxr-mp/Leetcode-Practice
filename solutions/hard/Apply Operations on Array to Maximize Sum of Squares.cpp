// Title: Apply Operations on Array to Maximize Sum of Squares
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/

class Solution {
public:
    long long md = 1e9 + 7;
    int maxSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> binary(32,0);
        for(int &nums : nums){
            for(int b=0;b<32;b++){
                if(nums & (1<<b)){
                    binary[b]++;
                }
            }
        }
        long long result = 0;
        while(k--){
            long long curr = 0;
            for(int b=0;b<32;b++){
