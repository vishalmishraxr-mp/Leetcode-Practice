// Title: Range Sum Query - Immutable
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/range-sum-query---immutable/

class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr = nums;
    }
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i=left;i<=right;i++){
            sum += arr[i];
        }
        return sum;
    }
};
