// Title: Minimum XOR Path in a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-xor-path-in-a-grid/

        if (i == m - 1 && j == n - 1) {
            return x;
        }
        if (dp[i][j][x] != -1) {
            return dp[i][j][x];
        }

        int mn = INT_MAX;

