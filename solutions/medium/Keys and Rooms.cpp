// Title: Keys and Rooms
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/keys-and-rooms/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        unordered_set<int> vis;
        q.push(0);
        vis.insert(0);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int nbr : rooms[curr]){
                if(vis.count(nbr)==0){
                    q.push(nbr);
                    vis.insert(nbr);
                }
