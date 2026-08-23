class Solution {
public:
    bool is_valid(vector<vector<char>> &board,int row,int col,char num){
        if(board[row][col]!='.'){
            return false;
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==num){
                return false;
            }
            if(board[row][i]==num){
                return false;
            }
        
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num){
                    return false;
            }
        }
        return true;

    }
    bool solve(vector<vector<char>> &board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(int k='1';k<='9';k++){
                        if(is_valid(board,i,j,k)){
                            board[i][j]=k;
                            if(solve(board)){
                                return true;
                            }
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;    
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        
    }
};