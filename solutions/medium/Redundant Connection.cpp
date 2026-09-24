// Title: Redundant Connection
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/redundant-connection/

        vector<int> rank(n+1,0);
        for(int i=1;i<=n;i++){
            parents[i] = i;
        }
        for(int i=0;i<n;i++){
            int x = edges[i][0];
            int y = edges[i][1];
            bool flag =  Union(parents,rank,x,y);
            if(flag){
                return {x,y};
            }
        }
        return {};
    }
};
