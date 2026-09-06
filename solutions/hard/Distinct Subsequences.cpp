// Title: Distinct Subsequences
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/distinct-subsequences/

            int count = 0;
            if(dp[i][j]!=-1){
                return dp[i][j];
            }
        if (s[i] == t[j]) {
            count += solve(s, t, i + 1, j + 1,dp);
        }
        count += solve(s, t, i + 1, j,dp);
        return dp[i][j] = count;
    }
    int numDistinct(string s, string t) {
        vector<vector<long long>> dp(s.size(), vector<long long>
        (t.size(), -1));
        return solve(s, t, 0, 0, dp);
    }
};
