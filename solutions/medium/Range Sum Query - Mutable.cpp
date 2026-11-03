// Title: Range Sum Query - Mutable
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/range-sum-query---mutable/

    }
    int mid = low + (high-low)/2;
    BuildTree(arr,2*i+1,low,mid);   // 2*i+1 --->left child if(root node 
    start to 0)
    BuildTree(arr,2*i+2,mid+1,high);  // right child 2*i+2;
    st[i] = st[2*i+1]+st[2*i+2];  // backtracking
class NumArray {
public:
    vector<int> st;
    int n;
    void BuildTree(vector<int> & arr,int i, int low, int high){
    if(low==high){               // base case
         st[i] = arr[low];
         return;
