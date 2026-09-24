// Title: Smallest Index With Digit Sum Equal to Index
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int digit = 0;
        for(int i=0;i<n;i++){
            int x = nums[i];
            int sum = 0;
            while(x!=0){
                digit = x%10;
                x = x/10;
                sum += digit;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};
