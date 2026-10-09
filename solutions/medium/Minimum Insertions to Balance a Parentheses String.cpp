// Title: Minimum Insertions to Balance a Parentheses String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/

class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        stack<char> st;
        int ans = 0;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(s[i]);
            if(s[i]==')' && i+1<n  && s[i+1]==')'){
                if(!st.empty()){
                    st.pop();
                    i++;
                }
                else{
                    ans += 1;
                    i++;
