// Title: Rotting Oranges
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotting-oranges/

            for(int j=0;j<m;j++){
                if(grid[i][j]==1) f++;
                else if(grid[i][j]==2) q.push({i,j}); // multi source BFS 
            }
        }
        q.push({-1,-1});
        int count = 0;
        vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
        queue<pair<int,int> > q;
        int f = 0;
        for(int i=0;i<n;i++){
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
class Solution {
public:
