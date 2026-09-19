// Title: Surrounded Regions
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/surrounded-regions/

        // First and last columns
        for(int i = 0; i < n; i++) {
        n = grid.size();
        m = grid[0].size();
    }
    void solve(vector<vector<char>>& grid) {
        DFS(grid, r, c - 1);
        DFS(grid, r - 1, c);
        DFS(grid, r, c + 1);
        // Mark as safe
        grid[r][c] = '#';
        DFS(grid, r + 1, c);
        if(r < 0 || c < 0 || r >= n || c >= m) return;
        if(grid[r][c] != 'O') return;
    int n, m;
    void DFS(vector<vector<char>>& grid, int r, int c) {
public:
            DFS(grid, i, 0);
            DFS(grid, i, m - 1);
