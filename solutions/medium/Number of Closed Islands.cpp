// Title: Number of Closed Islands
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-closed-islands/

        bool left = dfs(grid, i, j - 1);
        bool right = dfs(grid, i, j + 1);


        bool up = dfs(grid, i - 1, j);
        bool down = dfs(grid, i + 1, j);

        grid[i][j] = 1; // visited

        if (grid[i][j] == 1)
            return true;
class Solution {
public:
    int m, n;

    bool dfs(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || j < 0 || i >= m || j >= n)
            return false;
