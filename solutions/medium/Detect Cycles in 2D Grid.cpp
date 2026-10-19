// Title: Detect Cycles in 2D Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/detect-cycles-in-2d-grid/

    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m,0));

    for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!vis[i][j]) {
                    if(solve(grid, i, j, vis, -1, -1))
                        return true;
                }
            }
        }
        return false;
    }
};
