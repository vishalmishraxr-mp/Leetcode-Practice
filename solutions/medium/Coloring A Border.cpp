// Title: Coloring A Border
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/coloring-a-border/

        int inti_col = grid[row][col];
        DFS(grid,row,col,color,inti_col);
        for(auto p : internal){
            int i = p.first;
            int j = p.second;
            grid[i][j] = inti_col;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]<0) grid[i][j]*=-1;
            }
        }
        return grid;
    }
};
        int m = grid[0].size();
