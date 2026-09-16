// Title: Number of Sets of K Non-Overlapping Line Segments
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-sets-of-k-non-overlapping-line-segments/

        for (int j = 1; j <= k; j++) {
            long long sum = 0;
            for (int i = 1; i < n; i++) {
                sum = (sum + dp[i - 1][j - 1]) % M;

                dp[i][j] = (dp[i - 1][j] + sum) % M;
            }
        }
        return dp[n - 1][k];
    }
};
