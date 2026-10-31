// Title: Check Knight Tour Configuration
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/check-knight-tour-configuration/

}
bool solve(vector<vector<int>> &grid, int i, int j, int n, int count){
    if(count==n*n-1){
        return true;
    }
    if(grid[0][0] != 0) return false;
    for(int k=0;k<dx.size();k++){
            if(isSafe(grid,i+dx[k],j+dy[k],n,count)){
               return solve(grid,i+dx[k],j+dy[k],n,count+1);
        }
    }
    return false;
}
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==count+1;
bool isSafe(vector<vector<int>> &grid, int i, int j, int n,int count){
class Solution {
public:

vector<int> dx = {-2,-1,-2,-1,2,1,2,1};
vector<int> dy = {1,2,-1,-2,1,2,-1,-2};
