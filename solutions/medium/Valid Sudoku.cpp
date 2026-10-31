// Title: Valid Sudoku
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/valid-sudoku/

        int a = (r/3)*3;
        int b = (c/3)*3;
        for(int i = a;i<a+3;i++){
            for(int j=b;j<b+3;j++){
                if(i == r && j == c) continue;
                if(board[i][j]-'0'==x) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                int x = board[i][j] - '0';
                if(!isValid(board, i, j, x))
                    return false;
