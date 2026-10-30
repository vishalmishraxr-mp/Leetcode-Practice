// Title: N-Queens
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/n-queens/

class Solution {
public:
    vector<vector<char>> grid;
    vector<vector<string>> result;
    bool isplace(int row, int col, int n){
        // colomn check
        for(int i=row-1;i>=0;i--){
            if(grid[i][col]=='Q') return false;
        }
        // left diagonal check
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(grid[i][j]=='Q') return false;
        }
        // left diagonal check 
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(grid[i][j]=='Q') return false;
