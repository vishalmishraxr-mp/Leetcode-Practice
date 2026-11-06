// Title: Process String with Special Operations I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/process-string-with-special-operations-i/

class Solution {
public:
    string processStr(string s) {
        int n = s.size();
        string res = "";
        for(int i=0;i<n;i++){
            if(s[i]=='*' && !res.empty()) res.erase(res.size()-1);
            else if(s[i]=='*') continue;
            else if(s[i]=='#') res += res;
            else if(s[i]=='%') reverse(res.begin(),res.end());
            else res += s[i];
        }
        return res;
    }
