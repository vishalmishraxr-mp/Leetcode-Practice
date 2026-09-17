// Title: Find Center of Star Graph
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-center-of-star-graph/

        unordered_map<int,int> mp;
        for(int x : edges[i]){
            mp[x]++;
           }
        for(auto it : mp){
            if(it.second==edges.size()) return it.first;
        }
    }
        return 0;
        for(int i=0;i<edges.size();i++){
        }
};
    int findCenter(vector<vector<int>>& edges) {
public:
class Solution {
