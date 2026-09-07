// Title: Longest Common Subsequence
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-common-subsequence/

                    [j-1]:dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
       vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int lcs = solve(s1,s2,dp);
        return lcs;
    }
};
