// Title: Map of Highest Peak
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/map-of-highest-peak/

            int j = curr.second;
            vis[i][j] = true;
            for(int d=0;d<4;d++){
                int newR = i+dir[d][0];
                int newC = j+dir[d][1];
                if(newR < 0 || newC < 0 ||newR >= rows || newC >= cols)
                    continue;
                if(vis[newR][newC]) continue;
                vis[newR][newC] = true;
                result[newR][newC] = result[i][j] + 1;
                q.push({newR, newC});
            }
        }
    }
};
