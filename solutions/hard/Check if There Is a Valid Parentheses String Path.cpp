// Title: Check if There Is a Valid Parentheses String Path
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-there-is-a-valid-parentheses-string-path/


        return dp[i][j][count] = (down || right);
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if ((n + m - 1) % 2 != 0)
            return false;
        memset(dp, -1, sizeof(dp));
        return solve(grid, 0, 0, 0);
    }
};
