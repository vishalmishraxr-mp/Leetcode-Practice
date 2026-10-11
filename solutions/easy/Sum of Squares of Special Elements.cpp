// Title: Sum of Squares of Special Elements
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/sum-of-squares-of-special-elements/

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ans += nums[i-1]*nums[i-1];
            }
        }
        return ans;
    }
};
