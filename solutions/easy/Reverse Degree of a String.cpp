// Title: Reverse Degree of a String
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-degree-of-a-string/

class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=1;i<=n;i++){
            int asc = int('z')-int(s[i-1])+1;
            ans += i*(asc);
        }
        return ans;  
    }
};
