// Title: Min Cost to Connect All Points
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/min-cost-to-connect-all-points/

            int node = p.second;
            if(vis[node]==true) continue;
            vis[node] = true;
            auto p = pq.top();
            pq.pop();
            int wt = p.first;
        pq.push({0,0});
        vector<bool> vis(V,false);
        int sum = 0;
        while(!pq.empty()){
        // code here
        priority_queue< p ,vector<p> ,greater<p> > pq;
public:
typedef pair<int,int> p;
    int prims(int V, vector<vector<p>> & adj) {
class Solution {
