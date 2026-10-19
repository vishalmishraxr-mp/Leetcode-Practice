// Title: Most Stones Removed with Same Row or Column
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/

class Solution {
public:
    int removeStones(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> vis(n, 0);
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(vis[i]) continue;
            count++;
            vis[i] = 1;
            vector<int> q = {i};
            for(int k = 0; k < q.size(); k++) {
                int x = q[k];
                for(int j = 0; j < n; j++) {
                    if(!vis[j] && (nums[x][0] == nums[j][0] || nums[x][1] 
                    == nums[j][1])) {
                        vis[j] = 1;
                        q.push_back(j);
