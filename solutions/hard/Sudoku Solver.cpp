// Title: Sudoku Solver
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/sudoku-solver/

                if(board[i][j]-'0'==x) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board, int r, int c){
        if(r==9) return true;
        if(c==9) return solve(board,r+1,0);
        if(board[r][c]!='.') return solve(board,r,c+1);
        for(int j=1;j<=9;j++){
            if(isValid(board,r,c,j)){
                board[r][c] = '0'+j;
                bool ret = solve(board,r,c+1);
                if(ret) return true;
                board[r][c] = '.';
            }
        }
        return false;
