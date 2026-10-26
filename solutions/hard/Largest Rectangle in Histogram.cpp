// Title: Largest Rectangle in Histogram
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/largest-rectangle-in-histogram/

        // PSE
        while(!st.empty()) st.pop();
        }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
                st.pop();
            }
        stack<int> st;
        // NSE
        for(int i=n-1;i>=0;i--){
            while(!st.empty() &&
                  heights[st.top()] >= heights[i]){
class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n), pse(n);
