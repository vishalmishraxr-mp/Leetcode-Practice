// Title: Flood Fill
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/flood-fill/

        if (img[cr][cc] != initial_col)
            return;
        if (cr < 0 || cc < 0 || cr >= n || cc >= m)
        int n = img.size();
        int m = img[0].size();
    void DFS(vector<vector<int>>& img, int cr, int cc, int initial_col,
             int new_col) {
              int color) {
        if(img[sr][sc]==color) return img;
        DFS(img, sr, sc, img[sr][sc], color);
        return img;
    }
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc,
