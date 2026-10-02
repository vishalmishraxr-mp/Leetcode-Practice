// Title: Generate Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/generate-parentheses/

        if(close==n){
            ans.push_back(s);
            return;
        }
        if(open<n) generate(ans,s+'(',open+1,close,n);
        if(open>close) generate(ans,s+')',open,close+1,n);
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans,"",0,0,n);
        return ans;
    }
       int n){
       void generate(vector<string> & ans,string s , int open, int close, 
public:
class Solution {
