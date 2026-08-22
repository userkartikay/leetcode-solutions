class Solution {
public:
    vector<vector<string>> result;
    bool is_valid(vector<string> & board,int row,int col,int n){
        for(int i=row-1; i>=0 ;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void solve(vector<string>board,int row,int n){
        if(row>=n){
            result.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(is_valid(board,row,i,n)){
                board[row][i]='Q';
                solve(board,row+1,n);
                board[row][i]='.';

            }

        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(board,0,n);
        return result;
        
    }
};