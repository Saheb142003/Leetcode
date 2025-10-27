class Solution {
public:
    vector<vector<string>>res;
    int n;
    bool isValid(vector<string>board,int row,int col){
        //upwards
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //diagleft
        for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void solve(vector<string>board,int i){

        if(i>=n){
            res.push_back(board);
            return ;
        }

        for(int j=0;j<n;j++){
            if(isValid(board,i,j)){
                board[i][j]='Q';
                solve(board,i+1);
                board[i][j]='.';
            }
        }


    }
    vector<vector<string>> solveNQueens(int size) {
        n=size;
        res.clear();
        vector<string>board(n,string(n,'.'));
       solve(board,0);
        return res;
    }
};