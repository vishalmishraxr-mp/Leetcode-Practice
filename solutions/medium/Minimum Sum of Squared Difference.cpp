// Title: Minimum Sum of Squared Difference
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-sum-of-squared-difference/


class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, 
    int k1, int k2) {
        int n = nums1.size();
        vector<int> vec(1e5+1,0);
        for(int i=0;i<n;i++){
            int d = abs(nums1[i] - nums2[i]);
            vec[d]++;
        }
        int x = k1 + k2;
        for(int i=1e5;i>0 && x>0;i--){
            int count = min(x, vec[i]);
            vec[i] -= count;
            vec[i-1] += count;
            x -= count;
